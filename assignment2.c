#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exit(char* str) {

	if (strcmp(str, "exit") == 0) {
		exit(0);
	}
}

int main(void) {
	char str[10];

	scanf("%s", str);
	exit(str);

	printf("%s\n", str);

	return 0;
}