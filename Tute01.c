/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float m1,m2,avg;  //define variable

  printf("Enter the mark 1 : "); //display prompt
  scanf("%f",&m1); //read value

  printf("Enter the mark 2 : ");  //display value
  scanf("%f",&m2);  //read value

  avg=(m1+m2)/2;  //calculation

  printf("Your average is %.2f",avg); //display output

  
  return 0;
}

