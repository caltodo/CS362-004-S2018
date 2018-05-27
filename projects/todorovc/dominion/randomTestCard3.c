#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1

//test for smithy


int testSmithy(int currentPlayer, int handpos, struct gameState *post){
	struct gameState pre;
	memcpy (&pre, post, sizeof(struct gameState));

	int handCount_pre = post->handCount;
	smith(currentPlayer, &post, handPos);


	//check to make sure it worked somehow
	assert(post->handCount == handCount_pre + 2);	
	
}


int main(){
	printf ("Testing Smithy Card.\n");	
   	//all the stuff needed for CardEffect()
	int i,n;	
	int card, choice1, choice2, choice3, handPos; 
	int *bonus;

	struct gameState G;
	//set up Random Gamestate
  	for (n = 0; n < 2000; n++) {
        	for (i = 0; i < sizeof(struct gameState); i++) {
            		((char*)&G)[i] = floor(Random() * 256);
	        }
	}
	

     	int index;
     	int currentPlayer = whoseTurn(&G);
     	int nextPlayer = currentPlayer + 1;
       	
     	int tributeRevealedCards[2] = {-1, -1};
     	int temphand[MAX_HAND];// moved above the if statement
     	int drawntreasure=0;
     	int cardDrawn;
     	int z = 0;// this is the counter for the temp hand
     	if (nextPlayer > (G.numPlayers - 1)){
      	   nextPlayer = 0;
     	}
	//random handpos??
	//handpos = rand() etc
	
	handPos = 0;
	int j;
	for(j = 0; j < 5; j++){
		drawCard(1, &G); 
		//That's draw for player 1, with gamestate G
	}
	testSmithy(currentPlayer, handpos, &G);


	return 0;

}