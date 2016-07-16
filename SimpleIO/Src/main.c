#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char* s;
	char* s2 = "aiueo";
	char tmp[] = { '1', '2', '8', '\0' };

	s = tmp + 2;

	printf(("%d%s\n", 8, s));

	puts("");

	printf("s num = %d\n", strlen((tmp + 2)) );
	

	return 0;
}