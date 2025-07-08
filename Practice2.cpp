#include<iostream>
 using namespace std;
 namespace math{

int add(int x, int y) {
return x+y;
}
}

int main() {
  using namespace math;
  cout<<"sum:"<<add(10,20)<<endl;
  return 0;
}
