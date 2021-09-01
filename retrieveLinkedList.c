#include "populateTable.h"
#include "llTableAddString.h"
#include "prependNode.h"
#include "hash.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


linkedListNode_t *retrieveLinkedList(linkedListNode_t** hashtbl, char* string) {
	unsigned int hashkey = hash(string) % DEFAULT_SIZE;
	
	return hashtbl[hashkey];

}

