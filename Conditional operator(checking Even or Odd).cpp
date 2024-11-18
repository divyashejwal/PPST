#include <iostream>
using namespace std;

int main() {
  int num;
  
  cout<<"Enter a number:";
  cin>>num;
  
  string result=(num%2==0)?"Even":"Odd";
  
  cout<<"The number is:"<<result<<endl;
  
  return 0;
}

Output:
Enter a number:8
The number is:Even

Enter a number:7
The number is:Odd

