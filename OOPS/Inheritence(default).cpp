// USING THE DEFAULT CONSTRUCTOR

#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
    Person(){
        cout<<"I am the Parent"<<endl;
    }
};

class Student : public Person{
    public:
    int rollno;
    Student(){
        cout<<"I am the Child"<<endl;
    }
    void getInfo(){
        cout<<"name:"<<" "<<name<<endl;
        cout<<"age:"<<" "<<age<<endl;
        cout<<"rollno:"<<" "<<rollno<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Add";
    s1.age = 10;
    s1.rollno = 1;
    s1.getInfo();

    return 0;
}
