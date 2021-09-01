
#include "pa1Strings.h"
#include "util.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



unsigned int hash(char* str) {
	unsigned int hashval = HASH_START_VAL;
	int length = strlen(str);
	int i;
	
	if(strcmp(str, "") == 0) {
		return hashval;
	}

        

	if(str == NULL) {
		return hashval;
	}

	if (str[0] == '\0')
		return 0;

	for(i=0; i < length; i = i + 2) {
		//printf("Ascii value of %c is %d.\n", str[i], (unsigned int)str[i]);
		hashval = (hashval * HASH_PRIME) + (unsigned int)str[i];
		//printf("hashval == %d\n", hashval);
	}
	
	for(i=1; i < length; i = i + 2) {
		//printf("Ascii value of %c is %d.\n", str[i], (unsigned int)str[i]);
		hashval = (hashval * HASH_PRIME) + (unsigned int)str[i];
		//printf("hashval == %d\n", hashval);
	}

	return hashval;

}	
