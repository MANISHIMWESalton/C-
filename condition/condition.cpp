#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>> marks;
    if(marks>90){
        cout<<"Distiction \n";
    } else if (marks>=80 && marks>=50)
    {
        cout<<"Pass \n";
    } else
    {
        cout<<"Fail \n";
    }
    return 0;
}