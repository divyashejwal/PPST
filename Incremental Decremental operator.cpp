#include <iostream>
using namespace std;

int main() {
  int x=10;
  
  cout<<"x:"<<x<<endl;
  cout<<"Post-increment(x++):"<<x++<<endl;
  cout<<"After Post-increment:"<<x<<endl;
  cout<<"Pre-increment(++x):"<<++x<<endl;
  
  return 0;
}

Output:

x:10
Post-increment(x++):10
After Post-increment:11
Pre-increment(++x):12