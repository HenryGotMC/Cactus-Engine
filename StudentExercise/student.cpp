#include "student.h"
#include <iostream>
#include <string>

std::string Student::getName(){
    return getname;
}

int Student::getAge(){
    return getAge;
}

std::string Student::getHeight(){
    return getHeight;
}

std::string Student::getSid(){
    return getSid;
}

void Student::setName(std::string getname){
    this->name=getName;
}
void Student::setAge(){
    this->age=getAge;
}
void Student::setHeight(){
    this->height=getHeight;
}
void Student::setSid(){
    this->sid=getSid;
}
void display(){
    std::cout<<name<<age<<height<<sid;
}
int main(){
    std::cout<<"Hello you are putting in information about students"
}