#include<iostream>
using namespace std;
int main(){
    int marks[5]={80,75,90,60,85};
    int total = 0;
    int max=marks[0];
    int min = marks[0];
    float average;

    for(int i=0;i<5;i++){
    total +=marks[i];
    }

    average = float (total)/5;

    for(int i = 1;i<5;i++){
        if(marks[i]>max){
            max = marks[i];
        }
        if(marks[i]<min){
            min = marks[i];
        }
        
    }
    //parallel arrays array
    
    int id[3]={101,102,103};
    int marks2[3]={80,75,90};
    for (int i = 0; i < 3; i++)
    {
        cout << "ID: " << id[i] << "  Marks: " << marks2[i] << "\n";
    }
    
    cout<<"The Total marks : "<< total <<endl;
    cout<<"The Maximum marks : "<< max <<endl;
    cout<<"The Minimum marks : "<< min <<endl;
    cout<<"The Average marks : "<< average <<endl;

return 0;

}