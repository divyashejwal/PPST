#include <iostream>
using namespace std;

int main() {
  int x=10;
  int y=30;
  
  cout<<"x==y:"<<(x==y)<<endl;
  cout<<"x!=y:"<<(x!=y)<<endl;
  cout<<"x<y:"<<(x<y)<<endl;
  cout<<"x>y:"<<(x>y)<<endl;
  cout<<"x<=y:"<<(x<=y)<<endl;
  cout<<"x>=y:"<<(x>=y)<<endl;
  
  return 0;
}

Output:

x==y:0
x!=y:1
x<y:1
x>y:0
x<=y:1
x>=y:0