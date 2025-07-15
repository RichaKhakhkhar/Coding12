#include<iostream>
 using namespace std;

int main() {
  int number;
  cout<<"enter a number "<<endl;
  cin>>number;
  cout<<"multiplication of 1 to 30 table" <<number<<"is the:"<<endl;

  int i;
  for(i=1;i<=30;i++){
  cout<<number<<"*"<<i<<"=" <<number*i<<endl;
 }
 return 0;
 }
