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




void testSmithy() {

    
    
    if (containsBSTree(tree, &myData1))
        printf("containsBSTree(): PASS when test containing 50 as root\n");
    else
        printf("containsBSTree(): FAIL when test containing 50 as root\n");
        
    if (containsBSTree(tree, &myData2))
        printf("containsBSTree(): PASS when test containing 13 as left of root\n");
    else
        printf("containsBSTree(): FAIL when test containing 13 as left of root\n");
        
        
    if (containsBSTree(tree, &myData3))
        printf("containsBSTree(): PASS when test containing 110 as right of root\n");
    else
        printf("containsBSTree(): FAIL when test containing 110 as right of root\n");
        
    if (containsBSTree(tree, &myData4))
        printf("containsBSTree(): PASS when test containing 10 as left of left of root\n");
    else
        printf("containsBSTree(): FAIL when test containing 10 as left of left of root\n");
        
    if (!containsBSTree(tree, &myData5))
        printf("containsBSTree(): PASS when test containing 111, which is not in the tree\n");
    else
        printf("containsBSTree(): FAIL when test containing 111, which shouldn't be in the tree.\n");
}

int main(int argc, char *argv[])
{
    testSmithy();
    return 0;
}

