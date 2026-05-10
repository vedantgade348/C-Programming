#include<stdio.h>

int main()
{
  float fvalue1 = 0.0f;                  //To Store the  first input
  float fvalue2 = 0.0f;                  // To Store Second input
  float fResult = 0.0f;              

 printf("Enter first number:\n");
 scanf("%f",&fvalue1);

 printf("Enter Second Number:\n");
 scanf("%f",&fvalue2);

fResult = fvalue1 + fvalue2;                //Perform the addition
 printf("Addition is : %f\n",fResult);

    return 0;
}