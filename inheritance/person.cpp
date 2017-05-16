#include<iostream>
using namespace std;

class Person{
  public:
  void setName(string n){
    name = n;
  }
  public:
  void setGender(string g){
    gender = g;
  }
  protected:
    string name;
    string address;
    string birthdate;
    string gender;
    string iD;
};
