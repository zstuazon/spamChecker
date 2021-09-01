#include "pa1Strings.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include "populateTable.h"
#include "pa1.h"
#include "util.h"
#include "prependNode.h"
#include "llTableAddString.h"
#include "checkTable.h"
#include "launchUserQuery.h"

int main(int argc, char* argv[]) {


        //printf("%d hi",argc);
        //printf("%s hi",argv[1]);
	if(argc > 3 || argc <= 1) {
		fprintf(stderr, "%s", INVALID_ARGS);
		fprintf(stderr, "%s", SHORT_USAGE);
	return 1;
	}

	
  
        int i;
	for(i=1;i<argc;i++)
	{
		
		//printf("Arg = %s",argv[i]);
		if (strcmp(argv[i],"-h")==0) {
			
				
				if (argc==3)
			        {
				   FILE *fp;
				   fp = fopen(argv[2],"r");
		
				if(fp == NULL) {
					fprintf(stdout, "%s", FILTER_ERR);
					break;
				}
			//	printf("Hi");

                                int count; char c;
				count = 0;
			        for (c = getc(fp); c != EOF; c = getc(fp))
        				if (c == '\n')
            					count = count + 1;
	
	                        if (count==0)
					count++;

			//	printf("Hi2");	
						linkedListNode_t** aList = newLinkedListArray(count);
			//	              printf("Hi3");
					      populateTable(aList,fp);
			//	printf("hi4");
                                launchUserQuery(aList);
				break;	
				}

				fprintf(stdout, "%s", LONG_USAGE);
			        break;
		}	
			else if (strcmp(argv[i],"-i")==0){
				
				FILE* fp;
	                        if (argc==2)
				{
					fprintf(stdout,"%s", LONG_USAGE);
					//perror(LONG_USAGE);
				        break;
				}
                          //      printf("1");
				fp = fopen(argv[2], "r");	// bug: no quotes needed datafile bc var.
				if(fp == NULL) {
					fprintf(stdout, "%s", FILTER_ERR);
					break;
				}
			//	printf("2");
				
                                	int count; char c;
					count = 0;
			        	for (c = getc(fp); c != EOF; c = getc(fp))
        					if (c == '\n')
            						count = count + 1;
				if (count==0)
			 	   count++;
				linkedListNode_t** aList = newLinkedListArray(count);
				populateTable(aList,fp);
                          //      printf("3");
				launchUserQuery(aList);
				break;	
			}		
	

	}
	return 0; 
}

	

