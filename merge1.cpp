#include<iostream>
using namespace std;

  class A{
 private:
  int value;
 public:
  void setvalue(int x){
   this->value=x; 
  }
};

int main(){
 A a;
 a.setvalue(5);
 return 0;
}
 