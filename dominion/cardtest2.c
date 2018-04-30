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

void testAdventure() {

    if (compare(_leftMost(tree->root), &myData4) == 0)
        printf("_leftMost(): PASS left most of root\n");
    else
        printf("_leftMost(): FAIL left most of root\n");
    
    if (compare(_leftMost(tree->root->left), &myData4) == 0)
        printf("_leftMost(): PASS left most of left of root\n");
    else
        printf("_leftMost(): FAIL left most of left of root\n");
        
    if (compare(_leftMost(tree->root->left->left), &myData4) == 0)
        printf("_leftMost(): PASS left most of left of left of root\n");
    else
        printf("_leftMost(): FAIL left most of left of left of root\n");
    
    if (compare(_leftMost(tree->root->right), &myData3) == 0)
        printf("_leftMost(): PASS left most of right of root\n");
    else
        printf("_leftMost(): FAIL left most of right of root\n");
}



int main(int argc, char *argv[])
{
    testAdventure();
    return 0;
}
