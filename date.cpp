// date : display current time.

#include <stdio.h>
#include <Windows.h>
#include "date.h"

void date() {
	SYSTEMTIME lst;
	GetLocalTime(&lst);
	printf("%04d_%02d_%02d %02d:%02d:%02d\n", 
		lst.wYear, lst.wMonth, lst.wDay, lst.wHour, lst.wMinute, lst.wSecond);
}