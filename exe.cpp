#include <string>
#include <iostream>
#include "exe.h"
#include "fLtrim.h"

void exe() {
	char exeInput[50];
	std::cin.getline(exeInput, 50);
	strcpy(exeInput, ltrim(exeInput));

	system(exeInput); // ���� ���� �̸� �߸��Ǹ� system �Լ� ��ü�� ���� �޼��� ������
	std::cout << std::endl;
}