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
		/* illegal byte sequence error�� locale ���� ���� ������ �߻��Ǵ°ǵ�
		���� cd ��ɾ�� �� �۵� �Ǿ �� error�� �׳� �Ѱ���ϴ�. */
		if (strcmp(strerror(errno), "Illegal byte sequence"))
			std::cout << "��� ���� ���� : " << strerror(errno) << std::endl;
	}
}