#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

class Student{

    private:
    std::string name;
    int age;
    std::string height;
    std::string sid;
    
    public:
    
//constructor
    Student(name,sid);
    Student(name,sid,age);
//getters
    std::string getName();
    int getAge();
    std::string getHeight();
    std::string getSid();
//setters
    void setName();
    void setAge();
    void setHeight();
    void setSid();
//other functions
    void display();
};



#endif