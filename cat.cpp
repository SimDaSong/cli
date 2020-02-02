#include <iostream>
#include <string>
#include "cat.h"
#include "fLtrim.h"

void cat() {
	FILE* fp;
	char fileName[50];
	char buffer[80];
	char ch;

	std::cin.getline(fileName, 50);
	strcpy(fileName, ltrim(fileName));

	fp = fopen(fileName, "r");
	if (!fp) std::cout << "file open error\n";
	else {
		while ((ch = fgetc(fp)) != EOF) std::cout << ch;
		std::cout << std::endl;
		fclose(fp);
	}
}