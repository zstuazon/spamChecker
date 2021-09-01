/* 
 * Filename: util.c
 * Author: John Li and Matthew Parker
 * UserId: N/A
 * Date: 6/21/20
 * Sources of help: our brains (and previously existing solution code)
 */


#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>
#include <string.h>
#include "pa1.h"

/*
 * Name: newLinkedListNode
 * Function Prototype: linkedListNode_t * newLinkedList();
 * Description: Dynamically allocates memory for a linkedListNode_t struct
 *              and returns a pointer to the struct.
 * Parameters: None
 * Side Effects: None.
 * Error Conditions: None
 * Return Value: A pointer to the new struct.
 */
linkedListNode_t * newLinkedListNode();

linkedListNode_t ** newLinkedListArray( int size );

char * strcp( char * str );

void cleanup( linkedListNode_t ** hashtbl);

#endif
