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



void testSteward() {

    _removeNode(tree->root, &myData4);
    if (compare(tree->root->val, &myData1) == 0 && tree->root->left->left == NULL)
        printf("_removeNode(): PASS remove left of left of root 1st try\n");
    else
        printf("_removeNode(): FAIL remove left of left of root 1st try\n");
        
    _removeNode(tree->root, &myData3);
    if (compare(tree->root->val, &myData1) == 0 && tree->root->right == NULL)
        printf("_removeNode(): PASS remove right of root 2st try\n");
    else
        printf("_removeNode(): FAIL remove right of root 2st try\n");
    
    _removeNode(tree->root, &myData2);
    if (compare(tree->root->val, &myData1) == 0 && tree->root->left == 0)
        printf("_removeNode(): PASS remove left of root 3st try\n");
    else
        printf("_removeNode(): FAIL remove left of root 3st try\n");
        
    cur = _removeNode(tree->root, &myData1);
    if (cur == NULL)
        printf("_removeNode(): PASS remove root 4st try\n");
    else
        printf("_removeNode(): FAIL remove root 4st try\n");
        
}


int main(int argc, char *argv[])
{
    testSteward();
    return 0;
}



