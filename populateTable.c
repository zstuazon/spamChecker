#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "pa1Strings.h"
#include "pa1.h"
#include "llTableAddString.h"
#include "prependNode.h"
#include "hash.h"

void populateTable(linkedListNode_t** hashtbl, FILE* dataFile) {
	//FILE* fp;
	char str[30];		// don't need * because an array is already a pointer
	const char ch = '\n';
	//fp = fopen(dataFile, "r");	// bug: no quotes needed datafile bc var.
	//if(fp == NULL) {
	//	perror(FILTER_ERR);
	//}
	int emails;
	emails = 0;
	while ( fgets ( str, 30, dataFile) != NULL) {		// bug: change if to while
		emails++;		
			
		
		
		////// iterate over the string and replace every character with the correspondive lower-case
		int i;
		for( i = 0 ; i < sizeof(str); i++)
		{
			str[i] = tolower(str[i]);
			if (str[i] == ch)
			{
				str[i] = '\0';
			}

		}
		llTableAddString(hashtbl, str); 	// tolower from stdlib.h
	}
	if (emails == 0)
	{
		//perror(FILTER_ERR);
	}
}




