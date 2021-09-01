/*
 * Filename: testpopulateTable
 * Author: Z. Tuazon
 * Userid: cs30s121bm
 * Description: Unit test program to test the function hash().
 * Date: 07/14/2021
 * Sources of Help: TODO
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "util.c"
//#include "prependNode.c"
#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"
#include "llTableAddString.c"


void testpopulateTable() {
	
	char* str = "abc";
	linkedListNode_t** newList = newLinkedListArray(10);
	printf("head = %s\n", str);
}





/*
 * Function Name: main()
 * Function prototype: int main();
 * Description: The test driver. Runs specified tests.
 * Side Effects: None
 * Error Conditions: None
 * Return Value: 0 on exit success.
 */
int main() {
  printf("Testing hash...\n\n");
  testpopulateTable();
  printf("\nDone running tests.\n");
  return 0;
}
