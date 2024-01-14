/*
Nama : Andrea Sutanto
NIM : 2501989802
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_SIZE 10

	// PROCESS
void bubble_sort(char array[][ARRAY_SIZE], int ascending) {
	int a;
	int b;
	char temp[ARRAY_SIZE];
	
	for (a = 0; a < ascending; a++) {
		for (b = 0; (b + 1) < (ascending - a); b++) {		
			if (strcmp(array[b], array[b + 1]) > 0) {
				strcpy(temp, array[b]);
				strcpy(array[b], array[b + 1]);
				strcpy(array[b + 1], temp);
			}
		}
	}
	
}


int main() {
	// INPUT
	char data[20][ARRAY_SIZE]; // array of string
	
	int name;
	for (name = 0; name < ARRAY_SIZE ; name++) {
		printf("Name %d : ", name + 1);
		scanf("%s", data[name]);
	}
	puts("");
	
	
	// OUTPUT
	printf("[Ascending] 10 sorted data string\n");
	printf("=================================\n");
	for (name = 0; name < ARRAY_SIZE ; name++) {
		// recall sort
		bubble_sort(data, ARRAY_SIZE);
		printf("%s\n", data[name]);
	}
		
	return 0;
}
