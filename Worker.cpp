#include<iostream>
#include<Person.h>
using namespace.std;

class Worker: public Person {
  protected:
  string company;
  void setCompany(string c){
    company = c;
  }
};
