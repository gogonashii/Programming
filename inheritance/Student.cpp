#include<iostream>
#include<Person.h>
using namespace std;

class Student: public Person {
  protected:
  string school;
  void setSchool(string s){
    school = s;
  }
};
