#include <stdio.h>
#include "myMath.h"

int main()
{
  while(1 == 1){
    int currencyType = currency(); // Gets the currency type from user
    if (currencyType == 4){
      return 0;
    }
    int changeAmount = amount(currencyType); // Gets the amount of change from the user
    changeCalculation(changeAmount, currencyType); // Calculates and prints out the change to the user
    printf("\nDo you wish to continue? Type 4 for no, otherwise ");
  }

}