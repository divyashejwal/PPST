#include<iostream>
using namespace std;

int main() {
  int age;//Declare an integer variable to store the age
  
  //Prompt the user for their age
  cout<<"18:";
  cin>>age;//Read the age from users input
  
  //conditional logic using 'if-else'
  if(age>=18) {
    cout<<"you are an adult."<<endl;//Message if age is 18 or order
  }else{
    cout<<"you are not adult."<<endl;//Message if age is less than 18
}

return 0;//Return 0 to indicate successful execution
}
