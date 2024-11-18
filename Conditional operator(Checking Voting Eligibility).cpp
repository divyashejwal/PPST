#include <iostream>
using namespace std;

int main() {
  int age=18;
  
  cout<<"Enter your age:";
  cin>>age;
  
  string eligibility=(age>=18)?"Eligible to vote":"Not eligible to vote";
  
  cout<<eligibility<<endl;
  
  return 0;
}

Output:

Enter your age:16
eligible to vote

Enter your age:15
Not eligible to vote