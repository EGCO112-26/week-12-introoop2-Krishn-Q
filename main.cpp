#include <iostream>
using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {
  int N;
  N = (argc-1)/2;
  student a[N];

  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin
   for(i=0;i<N;i++)
   {
    a[i].get_name(argv[(i*2)+1]);
    a[i].get_age(atoi(argv[(i*2)+2]));
   }
  //2. Print name and age of all N ppl
  //3. Print name and age of 
  //the youngest person
   int youngest = a[0].show_age();
   for(i=0;i<N;i++)
   {
    if(a[i].show_age()<youngest)
    {
      youngest=a[i].show_age();
    }
   }

   for(i=0;i<N;i++)
   {
    if(a[i].show_age()==youngest)
    {
      a[i].print_name();
      a[i].print_age();
    }
   }

  //Find what the age of the youngest person
 
  
  // Print all info for the yougest person
 
  
  
  //4. Change input from cin to argv

  }
  
  


