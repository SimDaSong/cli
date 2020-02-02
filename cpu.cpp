#include <iostream>
#include <windows.h>
#include "cpu.h"

ULONGLONG SubtractTimes(const FILETIME& ftA, const FILETIME& ftB) {
	LARGE_INTEGER a, b;
	a.LowPart = ftA.dwLowDateTime;
	a.HighPart = ftA.dwHighDateTime;

	b.LowPart = ftB.dwLowDateTime;
	b.HighPart = ftB.dwHighDateTime;

	return a.QuadPart - b.QuadPart;
}

void cpu() {
	FILETIME idleTimeNow, kernelTimeNow, userTimeNow;
	FILETIME idleTimeLast, kernelTimeLast, userTimeLast;
	double idle, kernel, user, system;

	std::cout << "Current CPU Load : ";

	GetSystemTimes(&idleTimeNow, &kernelTimeNow, &userTimeNow);

	user = SubtractTimes(userTimeNow, userTimeLast);
	kernel = SubtractTimes(kernelTimeNow, kernelTimeLast);
	idle = SubtractTimes(idleTimeNow, idleTimeLast);
	system = kernel + user;

	std::cout << (system - idle) * 100 / system << std::endl;
}