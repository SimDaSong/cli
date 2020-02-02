// 문자열 좌측 공백문자 삭제 함수

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