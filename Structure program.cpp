#include<iostream>
using namespace std;

struct student{
  string name;
  int rollNumber;
  float marks;
};

int main(){
  student s1;
  
  s1.name="John Doe";
  s1.rollNumber=101;
  s1.marks=89.7;
  
  cout<<"Name:"<<s1.name<<endl;
  cout<<"Roll Number:"<<s1.rollNumber<<endl;
  cout<<"marks:"<<s1.marks<<endl;
  
 return 0;
}