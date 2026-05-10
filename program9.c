#include<stdio.h>

float AddTwoNumbers (
                     float fNo1,         //First input
                     float fNo2        //Second input
                    )
{
    float fAns = 0.0f;
    fAns = fNo1 + fNo2;
    return fAns;                       //Variable to store the result
}

int main()
{
    float fValue1 = 0.0f;                  // To Store the first input
    float fValue2 = 0.0f;                  // To Store the second input
    float fResult = 0.0f;                 // To Store the result of addition
    
     printf("Enter first number:\n");
     scanf("%f",&fValue1);
    
     printf("Enter Second Number:\n");
     scanf("%f",&fValue2);
    
     fResult = AddTwoNumbers(fValue1,fValue2);   // Perform the addition 
     printf("Addition is : %f\n",fResult);
    
        return 0;
}