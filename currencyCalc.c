#include <stdio.h>
#include "myMath.h"

int changeCalculation(int change, int currencyType){
  int coins[4], coinCount[4] = {0, 0, 0, 0}, remaining = change;
  switch(currencyType){ // Switch case to decide which coins to be used
    case 1:
      printf("USD$ Selected\n");
      coins[0] = 50;
      coins[1] = 25;
      coins[2] = 10;
      coins[3] = 1;
      break;
    case 2:
      printf("AUD$ Selected\n");
      coins[0] = 50;
      coins[1] = 20;
      coins[2] = 10;
      coins[3] = 5;
      break;
    case 3:
      printf("Euro Selected\n");
      coins[0] = 20;
      coins[1] = 10;
      coins[2] = 5;
      coins[3] = 1;
      break;
  }

  for(int i = 0; i < 4; i++) { // Used to loop through all 4 coin types
    while (remaining >= coins[i]){
      coinCount[i]++;
      remaining -= coins[i];
    }
}
display(coinCount, currencyType);
}