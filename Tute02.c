/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float dist,amount,km,distance;  //define variable

  printf("Enter the distance : ");  //prompt
  scanf("%f",&km);  //read value

  distance=km-30; //calculation

  if(distance<0){ //checking condition
    amount=km*50;   //calculation
  }

  else{
    amount=30*50+distance*40; //calculation
  }

  printf("Your total amount is RS %.2f",amount);  //display output
  
  return 0;
}
