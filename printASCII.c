#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char str[100];
	int i = 0;
	printf("Enter any string to get ASCII Value of each Character\n");
	scanf("%s", str);

	printf("ASCII values of each characters of given string:\n");
	while(str[i])
		printf("%d \n",  str[i++]);
	
}
