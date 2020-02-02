// ls : display all the files and directories in the working dir.

#include <iostream>
#include <Windows.h>
#include <filesystem> // to get file lists
#include "ls.h"
namespace fs = std::experimental::filesystem; // to get file lists

void ls(std::string path) {
	std::cout << "List of files" << std::endl;
	std::cout << "-----  ------   -------------------------------------------" << std::endl;
	
	printf("----D%10d   %s\n", 0, ".");
	printf("----D%10d   %s\n", 0, "..");

	for (const auto & entry : fs::directory_iterator(path)) 
	{
		// file attributes(RSHAD)
		DWORD fileAttri =  GetFileAttributes((entry.path().filename().wstring().c_str()));
		//R
		if (fileAttri & 0x01) std::cout << "R";
		else std::cout << "-";
		// S
		if (fileAttri & 0x04) std::cout << "S";
		else std::cout << "-";
		// H
		if (fileAttri & 0x02) std::cout << "H";
		else std::cout << "-";
		// A
		if (fileAttri & 0x20) std::cout << "A";
		else std::cout << "-";
		// D
		if (fileAttri & 0x10) std::cout << "D";
		else std::cout << "-";

		// file size
		if (!fs::is_directory(entry.path()))
			printf("%10d   ", fs::file_size(entry.path()));
		else printf("%10d   ", 0);
		
		// file name
		std::cout << entry.path().filename() << std::endl;
	}
}