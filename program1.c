/*Program Description: Calculates most efficient way to make change
 *   (in dollar bills) for any dollar value. Prints result.
 *Programmer Name: Tara Eicher
 *Programmer Contact: tdeicher@wichita.edu
 *WSU ID: z847x563
 *Date Completed: August 27, 2012
*/

#include <stdio.h>

//Amount entered, amount of each bill needed will be stored.
//Leftover variable used in calculation.

int dollar_amount, twenties, tens, fives, ones, leftOver;

int main(void) 
{ 
   //Prompt for and store dollar amount.

   printf("Please enter a dollar amount.\n"); 
   scanf("%d",&dollar_amount); 

   //Find number of twenties needed and leftover amount.

   twenties=dollar_amount/20; 
   leftOver=dollar_amount-(20*twenties); 

   //Find number of tens needed and leftover amount.

   tens=leftOver/10; 
   leftOver=leftOver-(10*tens); 

   //Find number of fives needed and leftover amount.

   fives=leftOver/5; 
   leftOver=leftOver-(5*fives); 

   //Find number of ones needed.

   ones=leftOver; 

   //Display result on screen.

   printf("Number of twenty dollar bills: %d\n", twenties);
   printf("Number of ten dollar bills: %d\n",tens);
   printf("Number of five dollar bills: %d\n",fives); 
   printf("Number of one dollar bills: %d\n\n",ones); 

   //Terminate program.

   return(0);
}
