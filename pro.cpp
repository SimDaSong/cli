// pro : display the number of running processes

#include <iostream>
#include <wtypes.h>
#include <Psapi.h>
#include "pro.h"

void pro() {
	DWORD MyProc[1024], CountBytes; // ���μ����� ������ �迭�� �迭�� ������ ����Ʈ ���� ������ ���� ����
	EnumProcesses(MyProc, sizeof(MyProc), &CountBytes);
	std::cout << CountBytes / sizeof(DWORD) << std::endl; // ���μ����� ������ ��� ���� �迭�� ũ�⸦ Ÿ���� ������� ������
}