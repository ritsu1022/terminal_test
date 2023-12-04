/*
 ============================================================================
 Name        : terminal_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for (int i = 40; i <= 47; i++) {
		for (int j = 30; j <= 37; j++) {
			printf("\033[%02d;%02dm%d%d\033[0m ", j, i, j, i);
		}
		printf("\n");
	}

}
