#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char randchar(){
	int r = rand()% (122+1-97)+97; //ascii values of lowercase a to z
	char c = r;
	return c;
}

