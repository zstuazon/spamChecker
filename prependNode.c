/*
#include "pa1.h"
#include "hash.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "util.h"

void prependNode(linkedListNode_t** head, char* str) {
	linkedListNode_t* temp = newLinkedListNode();
	temp->value = strcp(str);
	temp->next = *head;
	(*head) = temp;
        return;
}
*/

#include "pa1.h"
#include "hash.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "util.h"

void prependNode(linkedListNode_t** head, char* str) {
	if (strcmp(str,"")==0 || str[0] == '\0')
		return;
	linkedListNode_t* temp = newLinkedListNode();
	temp->value = strcp(str);
	temp->next = *head;
	(*head) = temp;
}
