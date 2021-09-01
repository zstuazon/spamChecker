#include "pa1.h"
#include "prependNode.h" // pa1.h <- hash.c <- prependNode.c <- llTableAddString.c
#include "hash.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "util.h"
void llTableAddString(linkedListNode_t** hashtbl, char* string) {
	unsigned int hashkey = hash(string) % DEFAULT_SIZE;
//	if (( hashtbl + hashkey ) == N
		prependNode((hashtbl + hashkey), string); 	// bug: must increment with hashkey for linked list, not an array. Generally, some cases it works with brackets.


}
