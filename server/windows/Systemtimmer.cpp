#include "Systemtimmer.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
char* Systemtimmer::gettime() {
	char *time_get;
	time_get = (char*)malloc(sizeof(char)*9);
	/* time_t��ܪ��ɶ��]���ɶ��^�O�q�@�Ӯɶ��I
	1970�~1��1��0��0��0��^�즹�ɪ����,�O����ƫ��A */
	time_t  t;

	//�ϥ�clock()�禡�ӭp�ɡA�^�Ǫ���ƫ��O��clock_ 
	clock_t  start_clock, end_clock;
	double spend;

	//���o�{���q�}�l����즹���,�g�L���w����(ticks) 
	start_clock = clock();

	//�N�ثe���ɶ��HHH�GMM�GSS�覡�A�s�J�r��current_time�� 
	_strtime(time_get);
	char *time_get_;
	time_get_ = (char*)malloc(sizeof(char) * 15);
	sprintf(time_get_,"[ %s ]: ", time_get);
	return time_get_;
}