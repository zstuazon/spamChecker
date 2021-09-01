#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "pa1Strings.h"
#include "pa1.h"
#include "llTableAddString.h"
#include "prependNode.h"
#include "hash.h"
#include "retrieveLinkedList.h"

int checkTable(char* str, linkedListNode_t** hashtbl) {
	

	if(retrieveLinkedList(hashtbl, str) == NULL) {
		return 0;
	}
	
	linkedListNode_t* current = retrieveLinkedList(hashtbl,str);
	while(current != NULL) {
		if(strcmp(current->value,str)==0) {
			return 1;
		}
		current = current->next;
	}

	return 0;


}


