/*
Purpose: to calculate the price of burger purchases including a discount.
concepts: if, else if, else
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int choice;
 do {
   char choiceStr[10], radiusStr[256], cont[256];
   double radius, width, length, lengthTriangle, height;
   double circle_area, triangle_area, rectangle_area;
   const double PI = 3.14159;

   printf("1. Calculate the area of a circle \n");
   printf("2. Calculate the area of a rectangle \n");
   printf("3. Calculate the area of a Triangle \n");
   printf("4. Quit \n\n");
   printf("Enter you choice (1-4): ");

   fgets(choiceStr, 10, stdin);
   choice = atoi(choiceStr);

   // input validation
   while (choice < 1 || choice > 4)
   {
     printf("ERROR!! \n");
     printf("Enter a choice between 1-4 \n");
     fgets(choiceStr, 10, stdin);
     choice = atoi(choiceStr);
   }

   // if valid input
   switch (choice)
   {
     case 1:
      printf("\nEnter the radius of the circle: ");
      fgets(radiusStr, 256, stdin);
      radius = atof(radiusStr);
      while (radius < 0) {
        printf("Error! \n");
        printf("Enter a positive value for the radius: ");
        fgets(radiusStr, 256, stdin);
        radius = atoi(radiusStr);
      }
      if (radius > 0) {
        circle_area = PI * radius * radius;
        printf("\nThe area of the circle is: %f \n\n", circle_area);
      }
      break;
     case 4:
      printf("program terminated \n");
      break;
   }
 } while (choice != 4); //{
}