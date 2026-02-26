#include<iostream>
using namespace std;
int main(){
//Operaters of three numbers

//Addition
   int number1,number2,number3;

   cout<<"Enter three numbers: ";
   cin>> number1 >> number2 >> number3;
   int sum = number1+number2+number3;
   cout<<"Addition: " <<sum<<endl;

//Substuction
int remain = number1-number2-number3;
 cout<<"Substuction: " <<remain<<endl;

 //Multiplication
int multiple = number1*number2*number3;
cout<<"Multiplication: " <<multiple<<endl;

//Division
int division = number1/number2/number3;
cout<<"Division: " <<division<<endl;
//Modulus
int modulus = number1%number2%number3;
cout<<"Remainder: " <<modulus<<endl;


// lab activity Add two numbers

int result;
cout<<("Enter Two numbers:");
cin>>number1 >>number2;
result = number1+number2;
cout<<"The sum is : " <<result<<endl;

// Area of rectangle

int length, width;
float area;
cout<<"Enter length and width: ";
cin>> length >> width;
 area = (float) length*width; 
 cout<<"The area of rectangle is : " <<area<<endl;
//Write a C++ program that inputs temperature in Celsius and converts it to Fahrenheit
float celsius;
float fahrenheit;
cout<<"Enter temperature in Celsius: ";
cin>> celsius;
fahrenheit = (celsius * 9 / 5) + 32;
cout<<"Fahrenheit = " << fahrenheit<<endl;
    return 0;
}