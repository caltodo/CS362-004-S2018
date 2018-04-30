#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include<stdlib.h>
#include "bst.h"
#include "structs.h"



void testGreatHall() {

    
    cur = _removeLeftMost(tree->root);
    if (cur == tree->root)
        printf("_removeLeftMost: PASS removing leftmost of root 1st try\n");
    else 
        printf("_removeLeftMost: FAIL removing leftmost of root 1st try\n");
    
    cur = _removeLeftMost(tree->root->right);
    if (cur == NULL)
        printf("_removeLeftMost: PASS removing leftmost of right of root 1st try\n");
    else 
        printf("_removeLeftMost: FAIL removing leftmost of right of root 1st try\n");
        
    
    cur = _removeLeftMost(tree->root);
    if (cur == tree->root)
        printf("_removeLeftMost: PASS removing leftmost of root 2st try\n");
    else 
        printf("_removeLeftMost: FAIL removing leftmost of root 2st try\n");
    
}

int main(int argc, char *argv[])
{	
    testGreatHall();
    return 0;
}



