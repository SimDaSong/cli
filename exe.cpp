#include <string>
#include <iostream>
#include "exe.h"
#include "fLtrim.h"

void exe() {
	char exeInput[50];
	std::cin.getline(exeInput, 50);
	strcpy(exeInput, ltrim(exeInput));

	system(exeInput); // 실행 파일 이름 잘못되면 system 함수 자체가 에러 메세지 내보냄
	std::cout << std::endl;
}