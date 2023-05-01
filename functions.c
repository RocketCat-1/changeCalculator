#include <stdio.h>
#include "myMath.h"

int amount(int currencyType){
  int changeAmount = 0;
  if(currencyType == 2){ //Check if currency type is AUD as it will then need to be a multiple of 5
    return amountAUD();
  }else{
    while(1 == 1){
      printf("Input amount from 1-95: ");
      scanf("%d", &changeAmount);
      if(changeAmount >= 1 && changeAmount <= 95){ // Checking if amount inputted is a valid amount
        break;
      }else {
        printf("Invalid number inputted, please try again.\n");
      }
    }
  return changeAmount;
  }
}

int amountAUD(){
  int changeAmount = 0;
  while(1 == 1){
    printf("Input amount from 5-95: ");
    scanf("%d", &changeAmount);
    if(changeAmount >= 5 && changeAmount <= 95){ // Checking if amount inputted is a valid amount
      if((changeAmount % 5) != 0){
        printf("Invalid number inputed, please input a multiple of 5.\n");
      } else{
        break;
      }
    } else {
      printf("Invalid number inputted, please try again.\n");
    }
  }
  return changeAmount;
}

int currency(){
  int currencyType;
  while(1 == 1){
    printf("Pick a currency:\n1. USD$\n2. AUD$\n3. Euro\n4. Exit Program\nInput: ");
    scanf("%d", &currencyType);
    if (currencyType == 1 || currencyType == 2 || currencyType == 3 || currencyType == 4){ // Checking if the currency type is valid
      break;
    } else {
      printf("\nInvalid input, please try again.\n");
    }
  }
  return currencyType;
}

int display(int coinCount[], int currencyType){
  switch(currencyType){ // Switch case to decide which currency is being used and needs to be printed
    case 1: // USD
      printf("\n--------------------\nFifties: %d\nTwenty Fives: %d\nTens: %d\nOnes: %d\n--------------------\n", coinCount[0], coinCount[1], coinCount[2], coinCount[3]);
      break;
    case 2: // AUD
      printf("\n--------------------\nFifties: %d\nTwenties: %d\nTens: %d\nFives: %d\n--------------------\n", coinCount[0], coinCount[1], coinCount[2], coinCount[3]);
      break;
    case 3: //Euro
       printf("\n--------------------\nTwenties: %d\nTens: %d\nFives: %d\nOnes: %d\n--------------------\n", coinCount[0], coinCount[1], coinCount[2], coinCount[3]);
      break;
  }
}