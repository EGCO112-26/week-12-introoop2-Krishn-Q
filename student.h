#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
   void set_name(string="Yme");
   void print_name();
   void print_age();
   void set_age(int x);
   int show_age();
   void get_age(int x);
   void get_name(string n);


};

void student::set_name(string n)
{
  name = n;
}


void student::set_age(int x)
{
  if(x>80) age = 80;
  else if(x<13) age=13;
  else age = x;
}


void student::print_name()
{
  cout<<"Name: "<<name<<endl;
}

void student::print_age()
{
  cout<<"Age: "<<age<<endl;
}

void student::get_age(int x)
{
	age = x; 
}



void student::get_name(string n)
{
  name=n;
}

int student::show_age()
{
  return age;
}