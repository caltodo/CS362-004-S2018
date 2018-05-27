#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

void caseAdventurer(int drawntreasure, struct gameState *state, int currentPlayer, int temphand[MAX_HAND], int z) {
   	int numCardsBefore = state->deckCount[currentPlayer];
		int cardDrawn;
			while (drawntreasure<2) {


			   		if (state->deckCount[currentPlayer] <1) {
