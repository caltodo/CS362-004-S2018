#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1


//Random Test for Adventure Card

int checkAdventureCard(int drawntreasure, struct gameState *state, int *temphand, int currentPlayer){
	//stuff
	struct gameState pre;
	memcpy (&pre, state, sizeof(struct gameState));  

	int drawntreasure_pre = drawntreasure;
	adventure(drawntreasure, state, temphand, currentPlayer);


	//check to make sure it worked
	
	assert(drawntreasure == drawntreasure_pre + 2);
	
		

}




int main(){

   	printf ("Testing Adventure Card.\n");
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





	//set up random Deck
	shuffle(currentPlayer, &G);
	
	//Set up random hand? Fixed player?
	int j;
	for(j = 0; j < 5; j++){
		drawCard(1, &G); 
		//That's draw for player 1, with gamestate G
	}
	checkAdventureCard(drawntreasure, &G, temphand, currentPlayer);


	return 0;
}
