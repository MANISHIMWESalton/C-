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
return 0;
}
