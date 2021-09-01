/*
 * Filename: launchUserQuery.c
 * Author: N/A
 * UserId: N/A
 * Date: N/A
 * Sources of help: N/A
 */

#ifndef LAUNCHUSERQUERY_H
#define LAUNCHUSERQUERY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include "pa1.h"
#include "pa1Strings.h"

/*
 * Function Name: launchUserQuery
 * Function Prototype: void launchUserQuery( linkedListNode_t ** hashtbl );
 * Description: interactive search to allow user to search the tables
 * Parameters: hashtbl - pointer to the hashtable which will be queried
 * Side Effects: Output is printed to stdout
 * Return Value: None
 */ 
void launchUserQuery( linkedListNode_t ** hashtbl );

#endif
