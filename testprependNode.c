
/*
 * Filename: testprependNode
 * Author: Z. Tuazon
 * Userid: cs30s121bm
 * Description: Unit test program to test the function hash().
 * Date: 07/14/2021
 * Sources of Help: TODO
 */

/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//#include "util.c"
#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"
#include "prependNode.h"

/*
void testprependNode(linkedListNode_t** aList, char* str) {;
	
prependNode( aList, str );
}
*/

/*
 * Function Name: main()
 * Function prototype: int main();
 * Description: The test driver. Runs specified tests.
 * Side Effects: None
 * Error Conditions: None
 * Return Value: 0 on exit success.
 */

/*
int main() {
  char *s = "abc";
  linkedListNode_t** aList = newLinkedListArray(10000);
  fprintf( stderr, "Testing prependNode...\n\n" );
  testprependNode(aList,s);
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}

*/

// -------------------------------------//

/*
 * Filename: testprependNode
 * Author: Z. Tuazon
 * Userid: cs30s121bm
 * Description: Unit test program to test the function hash().
 * Date: 07/14/2021
 * Sources of Help: TODO
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "prependNode.h"
#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

int size(linkedListNode_t** hashtbl);

void testprependNode() {

char* str = "abc";
int size_before, size_after;
size_before = 0;
linkedListNode_t** newList = newLinkedListArray(10);
prependNode( newList, str );
size_after = size(newList);
TEST(size_before + 1 == size_after);
}

void testprependNodeEmptyNode() {

char* str = "";
int size_before, size_after;
linkedListNode_t** newList = newLinkedListArray(10);
size_before = size(newList);
prependNode( newList, str );
size_after = size(newList);
printf("%d %d",size_before,size_after);
TEST(size_before  == size_after);
}


int size(linkedListNode_t** hashtbl)
{
int count;
count = 0;
linkedListNode_t * llNode = hashtbl[0];
while ( llNode ) {
        llNode = llNode->next;
        count++;
    }
    return count;
}


int main() {
  printf("Testing hash...\n\n");
  testprependNode();
  testprependNodeEmptyNode();
  printf("\nDone running tests.\n");
  return 0;
}
