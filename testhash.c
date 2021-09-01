/*
 * Filename: testhash
 * Author: Z. Tuazon
 * Userid: cs30s121bm
 * Description: Unit test program to test the function hash().
 * Date: 07/14/2021
 * Sources of Help: TODO
 */

#include <string.h>
#include <stdlib.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"
#include "hash.h"

void testhash() {
	TEST( hash( "" ) == 0 );
 	TEST( hash( "abc" ) == 693737 );
	TEST( hash( "paul" ) == 26452777 );
	TEST( hash( "" ) == 0);
	TEST( hash( "0123" ) == 23117429);
	TEST( hash( "@A6s9s" ) == -1594549351);
	//TEST( hash( "" ) == 1);
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
  fprintf( stderr, "Testing hash...\n\n" );
  testhash();
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}
