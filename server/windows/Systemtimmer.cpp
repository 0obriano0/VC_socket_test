#include "Systemtimmer.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
char* Systemtimmer::gettime() {
	char *time_get;
	time_get = (char*)malloc(sizeof(char)*9);
	/* time_t表示的時間（日曆時間）是從一個時間點
	1970年1月1日0時0分0秒）到此時的秒數,是長整數型態 */
	time_t  t;

	//使用clock()函式來計時，回傳的資料型別為clock_ 
	clock_t  start_clock, end_clock;
	double spend;

	//取得程式從開始執行到此函數,經過的滴答數(ticks) 
	start_clock = clock();

	//將目前的時間以HH：MM：SS方式，存入字串current_time內 
	_strtime(time_get);
	char *time_get_;
	time_get_ = (char*)malloc(sizeof(char) * 15);
	sprintf(time_get_,"[ %s ]: ", time_get);
	return time_get_;
}