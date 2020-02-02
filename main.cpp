/* 
	assignment 03 CLI 
	
	///////// warning //////////
	C++17 이상에서만 동작하는 함수들이 있으므로 VS 2017 이상에서만 실행시켜 주세요.
*/
#include <iostream>
#include <Windows.h> // for get current working directory
#include <string>
#include "help.h"
#include "cd.h"
#include "ls.h"
#include "pwd.h"
#include "date.h"
#include "cat.h"
#include "mv.h"
#include "rm.h"
#include "cpu.h"
#include "pro.h"
#include "exe.h"

int main() {
	std::string cmd;

	std::cout << "############### MY CLI ################\n";

	while (true) {
		// 현재 디렉토리 출력
		char buf[256];
		GetCurrentDirectoryA(256, buf);
		std::string path = std::string(buf);
		std::cout << path << ">";

		// 사용자 명령어 입력 받기
		std::cin >> cmd;

		// 사용자 명령어 대문자 있으면 소문자로
		for (int i = 0; cmd[i]; i++) {
			if ('A' <= cmd[i] && cmd[i] <= 'Z') cmd[i] += 32;
		}
		
		// exit : finish the execution of the program.
		if (cmd == "exit") return 0;

		// help : display all commands supported and their usage.
		else if (cmd == "help") help();
		
		// cd : change a working directory to another.
		else if (cmd == "cd") cd();

		// ls : display all the files and directories in the working dir.
		else if (cmd == "ls") ls(path);

		// pwd : display the path of working directory.
		else if (cmd == "pwd") pwd(buf);

		// date : display current time.
		else if (cmd == "date") date();

		// cat : display the contents of a specified text file.
		else if (cmd == "cat") cat();

		// mv : change the name of a file or directory to another
		else if (cmd == "mv") mv();

		// cpu : display current cpu load in the form of percentage
		else if (cmd == "rm") rm();

		// cpu : display current cpu load in the form of percentage
		else if (cmd == "cpu") cpu();

		// pro : display the number of running processes
		else if (cmd == "pro") pro();

		else if (cmd == "exe") exe();

		else std::cout << "invalid command" << std::endl;
	}
}

