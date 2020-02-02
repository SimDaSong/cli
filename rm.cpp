// rm : delete a specified file or directory

#include <iostream>
#include "rm.h"
#include "fLtrim.h"

void rm() {
	char rmInput[50];

	std::cin.getline(rmInput, 50);
	strcpy(rmInput, ltrim(rmInput));

	if (remove(rmInput) != 0)
		perror("Error deleting file");
	else
		puts("File succesfully deleted");
}