//Mustafa Wedee
//01/18/23
//This .c file is to be used in conjuction with print_char.c, this function returns a random char using rand(); Seeded in main.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char randchar(){
	int r = rand()% (122+1-97)+97; //ascii values of lowercase a to z
	char c = r;
	return c;
}

