#include<iostream>
using namespace std;
int main(){
int number;
do{
  cout<<"Enter a positive numbers: "<<endl;
  cin>>number;
  number++;
}
while (number<=0);

int count = 1;
while (count<=5)
{
  cout<<"Count numbers: "<<count<<endl;
  count++;
}
// looping 
int total = 0;
int numbers;
cout<<"Enter five Numbers: "<<endl;
for(int i = 1;i<=5;i++){
  cin>>numbers;
  total = total+numbers;
}
cout<<"The Total = "<<total<<endl;

// Sentinel loop
int number1;
int sum= 0;
cout<<"Enter numbers: ";
cin>> number1;
while (number1 !=-1)
{
 sum+=number1;
 cin>>number1;
}
cout<<"The Sum is = "<<sum<<endl;

return 0;
}
