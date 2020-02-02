// help : display all commands supported and their usage.

#include <iostream>
#include "help.h"

void help() {
	printf("%-5s : %s\n", "help", "display all commands supported and their usage.");
	printf("%-5s : %s\n", "exit", "finish the execution of the program.");
	printf("%-5s : %s\n", "cd", "change a working directory to another.");
	printf("%-5s : %s\n", "ls", "display all the files and directories in the working dir.");
	printf("%-5s : %s\n", "pwd", "display the path of working directory.");
	printf("%-5s : %s\n", "date", "display current time.");
	printf("%-5s : %s\n", "cat", "display the contents of a specified text file.");
	printf("%-5s : %s\n", "mv", "change the name of a file or directory to another.");
	printf("%-5s : %s\n", "rm", "delete a specified file or directory");
	printf("%-5s : %s\n", "cpu", "display current cpu load in the form of percentage");
	printf("%-5s : %s\n", "pro", "display the number of running processes.");
	printf("%-5s : %s\n", "exe", "execute a program.");
}