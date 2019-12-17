#pragma once

namespace windows {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected:
	private: System::Windows::Forms::ToolStripStatusLabel^  server_status;
	private: System::Windows::Forms::ToolStripStatusLabel^  client_connection;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  car_connection;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  連線ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  伺服器連接ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  設定IP位置ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripTextBox^  ip_address;
	private: System::Windows::Forms::ToolStripMenuItem^  啟動伺服器ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  client_textBox;


	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox_server_connection;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  client_groupBox;

	private: System::Windows::Forms::TextBox^  car_textBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  client_speed_text;



	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  client_direction_text;



	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  client_auto_mode_pictureBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  server_ip_show;
	private: System::Windows::Forms::PictureBox^  client_connection_server_pictureBox;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  car_groupBox;
	private: System::Windows::Forms::PictureBox^  car_connection_server_pictureBox;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  car_auto_mode_pictureBox;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  car_direction_text;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  car_speed_text;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  car_battery_level_text;


	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  client_connection_pictureBox;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  car_connection_pictureBox;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::ToolStripMenuItem^  關閉伺服器ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  localhost_name;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->server_status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->client_connection = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->car_connection = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->連線ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->伺服器連接ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->設定IP位置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ip_address = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->啟動伺服器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->關閉伺服器ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->client_textBox = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox_server_connection = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->client_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->client_connection_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->client_connection_server_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->client_auto_mode_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->client_direction_text = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->client_speed_text = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->car_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->server_ip_show = (gcnew System::Windows::Forms::Label());
			this->car_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->car_connection_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->car_battery_level_text = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->car_connection_server_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->car_auto_mode_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->car_direction_text = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->car_speed_text = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->localhost_name = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_server_connection))->BeginInit();
			this->client_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_connection_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_connection_server_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_auto_mode_pictureBox))->BeginInit();
			this->car_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->car_connection_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->car_connection_server_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->car_auto_mode_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->server_status,
					this->client_connection, this->toolStripStatusLabel1, this->car_connection
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 746);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
			this->statusStrip1->Size = System::Drawing::Size(1424, 24);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// server_status
			// 
			this->server_status->Name = L"server_status";
			this->server_status->Size = System::Drawing::Size(132, 19);
			this->server_status->Text = L"各項服務連線狀態:";
			// 
			// client_connection
			// 
			this->client_connection->Name = L"client_connection";
			this->client_connection->Size = System::Drawing::Size(114, 19);
			this->client_connection->Text = L"伺服器尚未啟動";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(15, 19);
			this->toolStripStatusLabel1->Text = L"/";
			// 
			// car_connection
			// 
			this->car_connection->Name = L"car_connection";
			this->car_connection->Size = System::Drawing::Size(99, 19);
			this->car_connection->Text = L"汽車尚未連接";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->連線ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1424, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 連線ToolStripMenuItem
			// 
			this->連線ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->伺服器連接ToolStripMenuItem });
			this->連線ToolStripMenuItem->Name = L"連線ToolStripMenuItem";
			this->連線ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->連線ToolStripMenuItem->Text = L"連線";
			// 
			// 伺服器連接ToolStripMenuItem
			// 
			this->伺服器連接ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->設定IP位置ToolStripMenuItem });
			this->伺服器連接ToolStripMenuItem->Name = L"伺服器連接ToolStripMenuItem";
			this->伺服器連接ToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->伺服器連接ToolStripMenuItem->Text = L"伺服器連接";
			// 
			// 設定IP位置ToolStripMenuItem
			// 
			this->設定IP位置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ip_address,
					this->localhost_name, this->toolStripSeparator1, this->啟動伺服器ToolStripMenuItem, this->關閉伺服器ToolStripMenuItem
			});
			this->設定IP位置ToolStripMenuItem->Name = L"設定IP位置ToolStripMenuItem";
			this->設定IP位置ToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->設定IP位置ToolStripMenuItem->Text = L"設定IP位置";
			// 
			// ip_address
			// 
			this->ip_address->MaxLength = 19;
			this->ip_address->Name = L"ip_address";
			this->ip_address->Size = System::Drawing::Size(100, 27);
			this->ip_address->TextChanged += gcnew System::EventHandler(this, &MyForm::ip_address_TextChanged);
			// 
			// 啟動伺服器ToolStripMenuItem
			// 
			this->啟動伺服器ToolStripMenuItem->Enabled = false;
			this->啟動伺服器ToolStripMenuItem->Name = L"啟動伺服器ToolStripMenuItem";
			this->啟動伺服器ToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->啟動伺服器ToolStripMenuItem->Text = L"啟動伺服器";
			this->啟動伺服器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::啟動伺服器ToolStripMenuItem_Click);
			// 
			// 關閉伺服器ToolStripMenuItem
			// 
			this->關閉伺服器ToolStripMenuItem->Enabled = false;
			this->關閉伺服器ToolStripMenuItem->Name = L"關閉伺服器ToolStripMenuItem";
			this->關閉伺服器ToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->關閉伺服器ToolStripMenuItem->Text = L"關閉伺服器";
			this->關閉伺服器ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::關閉伺服器ToolStripMenuItem_Click);
			// 
			// client_textBox
			// 
			this->client_textBox->AcceptsReturn = true;
			this->client_textBox->AcceptsTab = true;
			this->client_textBox->Location = System::Drawing::Point(37, 55);
			this->client_textBox->Margin = System::Windows::Forms::Padding(4);
			this->client_textBox->Multiline = true;
			this->client_textBox->Name = L"client_textBox";
			this->client_textBox->ReadOnly = true;
			this->client_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->client_textBox->Size = System::Drawing::Size(456, 669);
			this->client_textBox->TabIndex = 2;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox_server_connection
			// 
			this->pictureBox_server_connection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_server_connection.Image")));
			this->pictureBox_server_connection->Location = System::Drawing::Point(523, 55);
			this->pictureBox_server_connection->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox_server_connection->MaximumSize = System::Drawing::Size(33, 31);
			this->pictureBox_server_connection->Name = L"pictureBox_server_connection";
			this->pictureBox_server_connection->Size = System::Drawing::Size(33, 31);
			this->pictureBox_server_connection->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_server_connection->TabIndex = 3;
			this->pictureBox_server_connection->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 20));
			this->label1->Location = System::Drawing::Point(564, 55);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"伺服器啟用的總狀態";
			// 
			// client_groupBox
			// 
			this->client_groupBox->Controls->Add(this->client_connection_pictureBox);
			this->client_groupBox->Controls->Add(this->label15);
			this->client_groupBox->Controls->Add(this->client_connection_server_pictureBox);
			this->client_groupBox->Controls->Add(this->label7);
			this->client_groupBox->Controls->Add(this->client_auto_mode_pictureBox);
			this->client_groupBox->Controls->Add(this->label8);
			this->client_groupBox->Controls->Add(this->label4);
			this->client_groupBox->Controls->Add(this->client_direction_text);
			this->client_groupBox->Controls->Add(this->label6);
			this->client_groupBox->Controls->Add(this->label3);
			this->client_groupBox->Controls->Add(this->client_speed_text);
			this->client_groupBox->Controls->Add(this->label2);
			this->client_groupBox->Location = System::Drawing::Point(571, 188);
			this->client_groupBox->Margin = System::Windows::Forms::Padding(4);
			this->client_groupBox->Name = L"client_groupBox";
			this->client_groupBox->Padding = System::Windows::Forms::Padding(4);
			this->client_groupBox->Size = System::Drawing::Size(273, 236);
			this->client_groupBox->TabIndex = 5;
			this->client_groupBox->TabStop = false;
			this->client_groupBox->Text = L"使用者端";
			// 
			// client_connection_pictureBox
			// 
			this->client_connection_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"client_connection_pictureBox.Image")));
			this->client_connection_pictureBox->Location = System::Drawing::Point(191, 80);
			this->client_connection_pictureBox->Margin = System::Windows::Forms::Padding(4);
			this->client_connection_pictureBox->MaximumSize = System::Drawing::Size(33, 31);
			this->client_connection_pictureBox->Name = L"client_connection_pictureBox";
			this->client_connection_pictureBox->Size = System::Drawing::Size(33, 31);
			this->client_connection_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->client_connection_pictureBox->TabIndex = 11;
			this->client_connection_pictureBox->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label15->Location = System::Drawing::Point(25, 88);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(127, 17);
			this->label15->TabIndex = 10;
			this->label15->Text = L"目前連線狀態：";
			// 
			// client_connection_server_pictureBox
			// 
			this->client_connection_server_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"client_connection_server_pictureBox.Image")));
			this->client_connection_server_pictureBox->Location = System::Drawing::Point(191, 38);
			this->client_connection_server_pictureBox->Margin = System::Windows::Forms::Padding(4);
			this->client_connection_server_pictureBox->MaximumSize = System::Drawing::Size(33, 31);
			this->client_connection_server_pictureBox->Name = L"client_connection_server_pictureBox";
			this->client_connection_server_pictureBox->Size = System::Drawing::Size(33, 31);
			this->client_connection_server_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->client_connection_server_pictureBox->TabIndex = 9;
			this->client_connection_server_pictureBox->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label7->Location = System::Drawing::Point(25, 45);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"伺服器啟用狀態：";
			// 
			// client_auto_mode_pictureBox
			// 
			this->client_auto_mode_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"client_auto_mode_pictureBox.Image")));
			this->client_auto_mode_pictureBox->Location = System::Drawing::Point(191, 186);
			this->client_auto_mode_pictureBox->Margin = System::Windows::Forms::Padding(4);
			this->client_auto_mode_pictureBox->MaximumSize = System::Drawing::Size(33, 31);
			this->client_auto_mode_pictureBox->Name = L"client_auto_mode_pictureBox";
			this->client_auto_mode_pictureBox->Size = System::Drawing::Size(33, 31);
			this->client_auto_mode_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->client_auto_mode_pictureBox->TabIndex = 7;
			this->client_auto_mode_pictureBox->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label8->Location = System::Drawing::Point(25, 194);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(127, 17);
			this->label8->TabIndex = 6;
			this->label8->Text = L"自動偵測模式：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(188, 158);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"單位";
			// 
			// client_direction_text
			// 
			this->client_direction_text->AutoSize = true;
			this->client_direction_text->Location = System::Drawing::Point(100, 156);
			this->client_direction_text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->client_direction_text->Name = L"client_direction_text";
			this->client_direction_text->Size = System::Drawing::Size(39, 15);
			this->client_direction_text->TabIndex = 4;
			this->client_direction_text->Text = L"0.000";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label6->Location = System::Drawing::Point(25, 156);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"方向：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(188, 124);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"單位";
			// 
			// client_speed_text
			// 
			this->client_speed_text->AutoSize = true;
			this->client_speed_text->Location = System::Drawing::Point(100, 122);
			this->client_speed_text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->client_speed_text->Name = L"client_speed_text";
			this->client_speed_text->Size = System::Drawing::Size(39, 15);
			this->client_speed_text->TabIndex = 1;
			this->client_speed_text->Text = L"0.000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label2->Location = System::Drawing::Point(25, 122);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"車速：";
			// 
			// car_textBox
			// 
			this->car_textBox->AcceptsReturn = true;
			this->car_textBox->AcceptsTab = true;
			this->car_textBox->Location = System::Drawing::Point(917, 55);
			this->car_textBox->Margin = System::Windows::Forms::Padding(4);
			this->car_textBox->Multiline = true;
			this->car_textBox->Name = L"car_textBox";
			this->car_textBox->ReadOnly = true;
			this->car_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->car_textBox->Size = System::Drawing::Size(456, 669);
			this->car_textBox->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label5->Location = System::Drawing::Point(636, 109);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"伺服器IP位置";
			// 
			// server_ip_show
			// 
			this->server_ip_show->Font = (gcnew System::Drawing::Font(L"新細明體", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->server_ip_show->ForeColor = System::Drawing::Color::Blue;
			this->server_ip_show->Location = System::Drawing::Point(571, 142);
			this->server_ip_show->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->server_ip_show->Name = L"server_ip_show";
			this->server_ip_show->Size = System::Drawing::Size(273, 29);
			this->server_ip_show->TabIndex = 8;
			this->server_ip_show->Text = L"null";
			this->server_ip_show->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// car_groupBox
			// 
			this->car_groupBox->Controls->Add(this->car_connection_pictureBox);
			this->car_groupBox->Controls->Add(this->label12);
			this->car_groupBox->Controls->Add(this->label18);
			this->car_groupBox->Controls->Add(this->car_battery_level_text);
			this->car_groupBox->Controls->Add(this->label17);
			this->car_groupBox->Controls->Add(this->car_connection_server_pictureBox);
			this->car_groupBox->Controls->Add(this->label9);
			this->car_groupBox->Controls->Add(this->car_auto_mode_pictureBox);
			this->car_groupBox->Controls->Add(this->label10);
			this->car_groupBox->Controls->Add(this->label11);
			this->car_groupBox->Controls->Add(this->car_direction_text);
			this->car_groupBox->Controls->Add(this->label13);
			this->car_groupBox->Controls->Add(this->label14);
			this->car_groupBox->Controls->Add(this->car_speed_text);
			this->car_groupBox->Controls->Add(this->label16);
			this->car_groupBox->Location = System::Drawing::Point(571, 446);
			this->car_groupBox->Margin = System::Windows::Forms::Padding(4);
			this->car_groupBox->Name = L"car_groupBox";
			this->car_groupBox->Padding = System::Windows::Forms::Padding(4);
			this->car_groupBox->Size = System::Drawing::Size(273, 279);
			this->car_groupBox->TabIndex = 10;
			this->car_groupBox->TabStop = false;
			this->car_groupBox->Text = L"汽車端";
			// 
			// car_connection_pictureBox
			// 
			this->car_connection_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"car_connection_pictureBox.Image")));
			this->car_connection_pictureBox->Location = System::Drawing::Point(191, 81);
			this->car_connection_pictureBox->Margin = System::Windows::Forms::Padding(4);
			this->car_connection_pictureBox->MaximumSize = System::Drawing::Size(33, 31);
			this->car_connection_pictureBox->Name = L"car_connection_pictureBox";
			this->car_connection_pictureBox->Size = System::Drawing::Size(33, 31);
			this->car_connection_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->car_connection_pictureBox->TabIndex = 13;
			this->car_connection_pictureBox->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(188, 195);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 15);
			this->label12->TabIndex = 12;
			this->label12->Text = L"%";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label18->Location = System::Drawing::Point(25, 89);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(127, 17);
			this->label18->TabIndex = 12;
			this->label18->Text = L"目前連線狀態：";
			// 
			// car_battery_level_text
			// 
			this->car_battery_level_text->AutoSize = true;
			this->car_battery_level_text->Location = System::Drawing::Point(100, 194);
			this->car_battery_level_text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->car_battery_level_text->Name = L"car_battery_level_text";
			this->car_battery_level_text->Size = System::Drawing::Size(39, 15);
			this->car_battery_level_text->TabIndex = 11;
			this->car_battery_level_text->Text = L"0.000";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label17->Location = System::Drawing::Point(25, 194);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(59, 17);
			this->label17->TabIndex = 10;
			this->label17->Text = L"電量：";
			// 
			// car_connection_server_pictureBox
			// 
			this->car_connection_server_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"car_connection_server_pictureBox.Image")));
			this->car_connection_server_pictureBox->Location = System::Drawing::Point(191, 36);
			this->car_connection_server_pictureBox->Margin = System::Windows::Forms::Padding(4);
			this->car_connection_server_pictureBox->MaximumSize = System::Drawing::Size(33, 31);
			this->car_connection_server_pictureBox->Name = L"car_connection_server_pictureBox";
			this->car_connection_server_pictureBox->Size = System::Drawing::Size(33, 31);
			this->car_connection_server_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->car_connection_server_pictureBox->TabIndex = 9;
			this->car_connection_server_pictureBox->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label9->Location = System::Drawing::Point(25, 44);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"伺服器啟用狀態：";
			// 
			// car_auto_mode_pictureBox
			// 
			this->car_auto_mode_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"car_auto_mode_pictureBox.Image")));
			this->car_auto_mode_pictureBox->Location = System::Drawing::Point(191, 224);
			this->car_auto_mode_pictureBox->Margin = System::Windows::Forms::Padding(4);
			this->car_auto_mode_pictureBox->MaximumSize = System::Drawing::Size(33, 31);
			this->car_auto_mode_pictureBox->Name = L"car_auto_mode_pictureBox";
			this->car_auto_mode_pictureBox->Size = System::Drawing::Size(33, 31);
			this->car_auto_mode_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->car_auto_mode_pictureBox->TabIndex = 7;
			this->car_auto_mode_pictureBox->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label10->Location = System::Drawing::Point(25, 231);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 17);
			this->label10->TabIndex = 6;
			this->label10->Text = L"自動偵測模式：";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(188, 161);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 15);
			this->label11->TabIndex = 5;
			this->label11->Text = L"單位";
			// 
			// car_direction_text
			// 
			this->car_direction_text->AutoSize = true;
			this->car_direction_text->Location = System::Drawing::Point(100, 160);
			this->car_direction_text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->car_direction_text->Name = L"car_direction_text";
			this->car_direction_text->Size = System::Drawing::Size(39, 15);
			this->car_direction_text->TabIndex = 4;
			this->car_direction_text->Text = L"0.000";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label13->Location = System::Drawing::Point(25, 160);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 17);
			this->label13->TabIndex = 3;
			this->label13->Text = L"方向：";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(188, 128);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 15);
			this->label14->TabIndex = 2;
			this->label14->Text = L"單位";
			// 
			// car_speed_text
			// 
			this->car_speed_text->AutoSize = true;
			this->car_speed_text->Location = System::Drawing::Point(100, 126);
			this->car_speed_text->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->car_speed_text->Name = L"car_speed_text";
			this->car_speed_text->Size = System::Drawing::Size(39, 15);
			this->car_speed_text->TabIndex = 1;
			this->car_speed_text->Text = L"0.000";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label16->Location = System::Drawing::Point(25, 126);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 17);
			this->label16->TabIndex = 0;
			this->label16->Text = L"車速：";
			// 
			// localhost_name
			// 
			this->localhost_name->Name = L"localhost_name";
			this->localhost_name->Size = System::Drawing::Size(216, 26);
			this->localhost_name->Text = L"ip:127.0.0.1";
			this->localhost_name->Click += gcnew System::EventHandler(this, &MyForm::localhost_name_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(213, 6);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 770);
			this->Controls->Add(this->car_groupBox);
			this->Controls->Add(this->server_ip_show);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->car_textBox);
			this->Controls->Add(this->client_groupBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox_server_connection);
			this->Controls->Add(this->client_textBox);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_server_connection))->EndInit();
			this->client_groupBox->ResumeLayout(false);
			this->client_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_connection_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_connection_server_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_auto_mode_pictureBox))->EndInit();
			this->car_groupBox->ResumeLayout(false);
			this->car_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->car_connection_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->car_connection_server_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->car_auto_mode_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e);
	private: void client_connection_wait();
	private: void client_get_data();
	private: void car_connection_wait();
	private: void car_get_data();
	private: System::Void 啟動伺服器ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void 關閉伺服器ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void localhost_name_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ip_address_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
	public: Image^ green;
	public: Image^ red;
};
}
