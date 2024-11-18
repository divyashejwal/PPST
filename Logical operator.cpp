#include <iostream>
using namespace std;

int main() {
  int a=10;
  int b=5;
  int c=20;
  cout<<"Logical AND(a>b&&b<c):"<<(a>b&&b<c)<<endl;
  cout<<"Logical OR(a<b||b<c):"<<(a<b||b<c)<<endl;
  cout<<"Logical NOT(!(a>b)):"<<!(a>b)<<endl;
  
  return 0;
}

Output:

Logical AND(a>b&&b<c):1
Logical OR(a<b||b<c):1
Logical NOT(!(a>b)):0