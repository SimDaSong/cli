#include <iostream>
#include <direct.h>
#include "cd.h"
#include "fLtrim.h"

// cd : change a working directory to another.

void cd() {
	char cdInput[50];
	int result;

	std::cin.getline(cdInput, 50);
	strcpy(cdInput, ltrim(cdInput));

	result = chdir(cdInput);

	if (result == -1) {
		/* illegal byte sequence error는 locale 설정 문제 때문에 발생되는건데
		실제 cd 명령어는 잘 작동 되어서 이 error는 그냥 넘겼습니다. */
		if (strcmp(strerror(errno), "Illegal byte sequence"))
			std::cout << "경로 설정 오류 : " << strerror(errno) << std::endl;
	}
}