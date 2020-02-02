#include <iostream>
#include "mv.h"

void mv()
{
	char oldName[50], newName[50];
	int result;

	std::cin >> oldName >> newName;
	
	if (!(result = rename(oldName, newName)))
		puts("File successfully renamed");
	else perror("Error Renaming File");
}