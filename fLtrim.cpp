// ���ڿ� ���� ���鹮�� ���� �Լ�

#include <ctype.h>
#include "fLtrim.h"

char* ltrim(char *s) {
	char* begin;
	begin = s;

	while (*begin != '\0') {
		if (isspace(*begin)) begin++;
		else {
			s = begin; break;
		}
	}

	return s;
}