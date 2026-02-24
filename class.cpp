#include<stdio.h>
int main(){
//Operaters of three numbers

//Addition
   int number1,number2,number3;

   printf("Enter three numbers: ");
   scanf("%d %d %d",&number1,&number2,&number3);
   int sum = number1+number2+number3;
   printf("Addition: %d\n",sum);

//Substuction
int remain = number1-number2-number3;
 printf("Substuction: %d\n",remain);

 //Multiplication
int multiple = number1*number2*number3;
printf("Multiplication: %d\n",multiple);

//Division
int division = number1/number2/number3;
printf("Division: %d\n",division);
//Modulus
int modulus = number1%number2%number3;
printf("Remainder: %d\n",modulus);


// lab activity Add two numbers

int number1 ,number2;
int result;
printf("Enter Two numbers:");
scanf("%d %d",&number1,&number2);
result = number1+number2;
printf("The sum is : %d \n",result);

// Area of rectangle

int length, width;
float area;
printf("Enter length and width: ");
scanf("%d %d",&length,&width);
 area = (float) length*width; 
 printf("The area of rectangle is : %.2f \n",area);

    return 0;
}