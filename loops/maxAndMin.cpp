#include<iostream>
using namespace std;
int main(){
    int marks[5]={80,75,90,60,85};
    int total = 0;
    int max=marks[0];
    int min = marks[0];
    for(int i = 1;i<5;i++){
        if(marks[i]>max){
            max = marks[i];
        }
        if(marks[i]<min){
            min = marks[i];
        }
        total +=marks[i];
    }
    cout<<"The Total marks : "<< total <<endl;
    cout<<"The Maximum marks : "<< max <<endl;
    cout<<"The Minimum marks : "<< min <<endl;



}