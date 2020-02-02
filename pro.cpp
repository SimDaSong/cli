// pro : display the number of running processes

#include <iostream>
#include <wtypes.h>
#include <Psapi.h>
#include "pro.h"

void pro() {
	DWORD MyProc[1024], CountBytes; // 프로세스를 저장할 배열과 배열에 리턴할 바이트 수를 저장할 변수 선언
	EnumProcesses(MyProc, sizeof(MyProc), &CountBytes);
	std::cout << CountBytes / sizeof(DWORD) << std::endl; // 프로세스의 개수를 얻디 위해 배열의 크기를 타입형 사이즈로 나눈다
}