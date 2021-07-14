/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int count,num,total; //define variable

  printf("Enter the number : ");  //display prompt
  scanf("%d",&num); //read value

  total=0;

  for(count=1;count<=num;count++){  //repetition condition
      total=total+count;  //calculation

  }

  printf("Total is %d",total);  //display output
  
  
  return 0;
}//end of main function

