/*
ID: 22011027
Name: Muhammad Haziq bin Rahmathullah Khan
*/


#include <iostream>
#include <string>
using namespace std;

struct Student{
    int id;
    string name;
    string contact;
    string email;
};


int main()
{
    Student student[5];
    
    for (int i=0; i<5; i++){
        cout<<"\nEnter the data for Student "<< i+1 << " : " << endl;
        cout<<"Student ID: "; cin>>student[i].id;
        cout<<"Name: "; cin>>student[i].name;
        cout<<"Contact Number: "; cin>>student[i].contact;
        cout<<"Email: "; cin>>student[i].email;
    }
    
    for (int i=0; i<5; i++){
        cout<<"\n********************************"<<endl;
        cout<<"Student "<< i+1 << endl;
        cout<<"Student ID: " << student[i].id <<endl;
        cout<<"Name: " << student[i].name <<endl;
        cout<<"Contact Number: " << student[i].contact <<endl;
        cout<<"Email: " << student[i].email <<endl;
    }
    
    return 0;
}