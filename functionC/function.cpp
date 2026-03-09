#include<iostream>
#include<string>
using namespace std;

int add(int num1,int num2){
    return num1+num2;
}
string greetUser( string name){
    string message = "Welcome to the level 2 "+ name +"!";
    return message;
}
int calculatePower(int a,int b){
int result = 1;
for(int i= 0;i<b;i++){
    result = result* a; 
}
return result;
}
int main(){
    cout<<"The sum is :"<< add(3,8)<<endl;
int num,p;
cout<<"Enter base and exponent: ";
cin>>num>>p;
int answer = calculatePower(num,p);
cout<< num <<" raised to the power of "<<p <<" is " << answer <<endl;
    string userName = "Salton";
    string fullGreeting =  greetUser(userName);
    cout<<fullGreeting<<endl;

    return 0;
}