#include "MyForm.h"
#include "client_connection.h"
#include "car_connection.h"
#include "Systemtimmer.h"
#include <stdio.h>
#include <iostream>

using namespace windows;

//���O�إ߰�
Systemtimmer stimmer;
client_connection cclient;
car_connection ccar;

[STAThreadAttribute]

int main(array<System::String ^> ^args){
	omp_set_nested(1);//���}openmp �_������� �ѦҸ�� https://www.phototalks.idv.tw/academic/?p=1997 

	//true == 1, false == 0
	// �إߥ��󱱨���e�A���ҥ� Windows XP ��ı�ƮĪG
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	// �إߥD�����ð���
	Application::Run(gcnew MyForm());
	
	//�����{������A�æ^�� 0 �N��{�����楿�`�L�����C
	return 0;
}
char *localhost_IP;
System::Void windows::MyForm::MyForm_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	green = gcnew Bitmap("images/green.png");
	red = gcnew Bitmap("images/red.png");
	
	::System::Threading::Thread^ thr1 = gcnew ::System::Threading::Thread(gcnew ::System::Threading::ThreadStart(this, &MyForm::client_connection_wait));
	::System::Threading::Thread^ thr2 = gcnew ::System::Threading::Thread(gcnew ::System::Threading::ThreadStart(this, &MyForm::client_get_data));

	::System::Threading::Thread^ thr3 = gcnew ::System::Threading::Thread(gcnew ::System::Threading::ThreadStart(this, &MyForm::car_connection_wait));
	::System::Threading::Thread^ thr4 = gcnew ::System::Threading::Thread(gcnew ::System::Threading::ThreadStart(this, &MyForm::car_get_data));


	#pragma omp parallel sections 
	{
		#pragma omp section
		{
			thr1->Start();
		}
		#pragma omp section
		{
			thr2->Start();
		}
		#pragma omp section
		{
			thr3->Start();
		}
		#pragma omp section
		{
			thr4->Start();
		}
	}
	
	char hostname[256] = "";
	struct hostent *ph = 0;
	WSADATA w;
	WSAStartup(0x0101, &w);
	gethostname(hostname, 256);
	ph = gethostbyname(hostname);
	localhost_IP = inet_ntoa(*((struct in_addr *)ph->h_addr_list[0]));
	char buffer[1000];
	sprintf(buffer, "�۰ʰ���IP:%s", localhost_IP);
	localhost_name->Text = gcnew String(buffer);
	WSACleanup();

}

System::Void windows::MyForm::MyForm_FormClosed(System::Object ^ sender, System::Windows::Forms::FormClosedEventArgs ^ e) {
	cclient.close_server_connection();
	exit(1);
}

//�ϥΪ̦��A�����A
void windows::MyForm::client_connection_wait()
{
	do {
		if(!cclient.get_client_connection())
			client_connection->Text = "�ϥΪ̳s�u�H�_�}";
		else {
			cclient.send_(ccar.get_speed(), ccar.get_direction(), ccar.get_battery_level());
		}
		int mode = cclient.wait_connection();
		if (mode == 1 || mode == -1)
			client_connection->Text = "�ϥΪ̳s�u���\";
		Sleep(100);
	}while (1);
}

//�ϥΪ̦��A����Ʊ���
char client_textBox_show_text[1048576];
void windows::MyForm::client_get_data()
{
	client_textBox_show_text[0] = '\0';
	do {
		if (cclient.get_client_connection()) {
			char *str = cclient.get_data();
			if (cclient.get_client_connection()) {
				if (client_textBox_show_text[0] != '\0')
					sprintf_s(client_textBox_show_text, "%s[�t�α������] %s%s", client_textBox_show_text, stimmer.gettime(), str);
				else
					sprintf_s(client_textBox_show_text, "[�t�α������] %s%s", stimmer.gettime(), str);
			}else
				sprintf_s(client_textBox_show_text, "[�t�ΰ򥻸��] %s�ϥΪ̥H�_�u", stimmer.gettime());
			
			if (*client_textBox_show_text != -1) {
				//MessageBox::Show("��������");
			}
		}
		Sleep(10);
	} while (1);
}

//�T�����A�����A
void windows::MyForm::car_connection_wait()
{
	do {
		if(!ccar.get_car_connection())
			car_connection->Text = "�T���s�u�H�_�}";
		else {
			ccar.send_(cclient.get_speed(), cclient.get_direction(), ccar.get_battery_level());
		}
		int mode = ccar.wait_connection();
		if (mode == 1 || mode == -1)
			car_connection->Text = "�T���s�u���\";
		Sleep(100);
	}while (1);
}

//�T�����A����Ʊ���
char car_textBox_show_text[1048576];
void windows::MyForm::car_get_data()
{
	car_textBox_show_text[0] = '\0';
	do {
		if (ccar.get_car_connection()) {
			char *str = ccar.get_data();
			if (ccar.get_car_connection()) {
				if (car_textBox_show_text[0] != '\0')
					sprintf_s(car_textBox_show_text, "%s[�t�α������] %s%s", car_textBox_show_text, stimmer.gettime(), str);
				else
					sprintf_s(car_textBox_show_text, "[�t�α������] %s%s", stimmer.gettime(), str);
			}else
				sprintf_s(car_textBox_show_text, "[�t�ΰ򥻸�T] %s�T���H�_�u", stimmer.gettime());
			
			if (*car_textBox_show_text != -1) {
				//MessageBox::Show("��������");
			}
		}
		Sleep(10);
	} while (1);
}

System::Void MyForm::�Ұʦ��A��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//�]�w���A��IP
	char server_addr[20];
	sprintf_s(server_addr, "%s", ip_address->Text);
	//MessageBox::Show(gcnew String(server_addr));
	int mode1, mode2;
	if (!cclient.get_server_connection())
		mode1 = cclient.set_connection(server_addr);
	else
		mode1 = 20;
	if (!ccar.get_server_connection())
		mode2 = ccar.set_connection(server_addr);
	else
		mode2 = 20;
	if (mode1 == 20 && mode2 == 20) {
		MessageBox::Show("���A���Ұʦ��\");
		ip_address->ReadOnly = true;
		localhost_name->Enabled = false;
		�Ұʦ��A��ToolStripMenuItem->Enabled = false;
		�������A��ToolStripMenuItem->Enabled = true;
		server_ip_show->Text = ip_address->Text;
	}
	else {
		if (mode1 == 20 || mode2 == 20) {
			ip_address->ReadOnly = true;
			localhost_name->Enabled = false;
			server_ip_show->Text = ip_address->Text;
			�������A��ToolStripMenuItem->Enabled = true;
		}
		MessageBox::Show("���A���Ұʥ��� mode1 = " + mode1 + "  mode2 = " + mode2);
	}
		
	
}
System::Void MyForm::�������A��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//ip_address->Text = "";
	ip_address->ReadOnly = false;
	localhost_name->Enabled = true;
	server_ip_show->Text = "NULL";
	cclient.close_server_connection();
	ccar.close_server_connection();
	�Ұʦ��A��ToolStripMenuItem->Enabled = true;
	�������A��ToolStripMenuItem->Enabled = false;
}

System::Void windows::MyForm::ip_address_TextChanged(System::Object ^ sender, System::EventArgs ^ e){
	if (ip_address->Text != "")
		�Ұʦ��A��ToolStripMenuItem->Enabled = true;
	else
		�Ұʦ��A��ToolStripMenuItem->Enabled = false;
}

System::Void windows::MyForm::localhost_name_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	ip_address->Text = gcnew String(localhost_IP);
	�Ұʦ��A��ToolStripMenuItem_Click(sender, e);
}

System::Void windows::MyForm::timer1_Tick(System::Object ^ sender, System::EventArgs ^ e)
{
	//���A�����A���
	if (cclient.get_server_connection() && ccar.get_server_connection())
		pictureBox_server_connection->Image = green;
	else
		pictureBox_server_connection->Image = red;
	//�ϥΪ̱�����ư����
	if (*client_textBox_show_text != '\0') {
		char *message;
		message = (char*)malloc(sizeof(char)*(strlen(client_textBox_show_text) + 1));
		sprintf(message,"%s", client_textBox_show_text);

		char message_buffer[10000];
		char message_buffer_final[10000];
		sprintf_s(message_buffer, "%s", client_textBox->Text);
		if(client_textBox->TextLength != 0)
			if (client_textBox->TextLength + strlen(message) >= 8000)
				sprintf_s(message_buffer_final, "%s\r\n%s", &message_buffer[client_textBox->TextLength + strlen(message) - 8000], message);
			else
				sprintf_s(message_buffer_final, "%s\r\n%s", message_buffer, message);
		else
			sprintf_s(message_buffer_final, "%s", message);

		client_textBox->Text = gcnew String(message_buffer_final);
		client_textBox->Select(client_textBox->TextLength, 0);
		client_textBox->ScrollToCaret();
		client_textBox_show_text[0] = '\0';
		free(message);
	}
	char client_speed[10],client_direction[10];
	sprintf_s(client_speed,"%3.3lf",cclient.get_speed());
	sprintf_s(client_direction, "%d", cclient.get_direction());
	client_speed_text->Text = gcnew String(client_speed);
	client_direction_text->Text = gcnew String(client_direction);
	if(cclient.get_auto_mode())
		client_auto_mode_pictureBox->Image = green;
	else
		client_auto_mode_pictureBox->Image = red;

	if (cclient.get_server_connection())
		client_connection_server_pictureBox->Image = green;
	else
		client_connection_server_pictureBox->Image = red;
	if (cclient.get_client_connection())
		client_connection_pictureBox->Image = green;
	else
		client_connection_pictureBox->Image = red;
	
	//������ư����

	//�T��������ư����
	if (*car_textBox_show_text != '\0') {
		char *message;
		message = (char*)malloc(sizeof(char)*(strlen(car_textBox_show_text) + 1));
		sprintf(message, "%s", car_textBox_show_text);

		char message_buffer[10000];
		char message_buffer_final[10000];
		sprintf_s(message_buffer, "%s", car_textBox->Text);
		if (car_textBox->TextLength != 0)
			if (car_textBox->TextLength + strlen(message) >= 8000)
				sprintf_s(message_buffer_final, "%s\r\n%s", &message_buffer[car_textBox->TextLength + strlen(message) - 8000], message);
			else
				sprintf_s(message_buffer_final, "%s\r\n%s", message_buffer, message);
		else
			sprintf_s(message_buffer_final, "%s", message);

		car_textBox->Text = gcnew String(message_buffer_final);
		car_textBox->Select(car_textBox->TextLength, 0);
		car_textBox->ScrollToCaret();
		car_textBox_show_text[0] = '\0';
		free(message);
	}
	char car_speed[10], car_direction[10], car_battery_level[10];
	sprintf_s(car_speed, "%3.3lf", ccar.get_speed());
	sprintf_s(car_direction, "%d", ccar.get_direction());
	sprintf_s(car_battery_level, "%3.3lf", ccar.get_battery_level());
	car_speed_text->Text = gcnew String(car_speed);
	car_direction_text->Text = gcnew String(car_direction);
	car_battery_level_text->Text = gcnew String(car_battery_level);
	if (ccar.get_auto_mode())
		car_auto_mode_pictureBox->Image = green;
	else
		car_auto_mode_pictureBox->Image = red;

	if (ccar.get_server_connection())
		car_connection_server_pictureBox->Image = green;
	else
		car_connection_server_pictureBox->Image = red;

	if (ccar.get_car_connection())
		car_connection_pictureBox->Image = green;
	else
		car_connection_pictureBox->Image = red;

	//������ư����

	//����O����
	GC::Collect();
}
