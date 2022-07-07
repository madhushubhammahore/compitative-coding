// 1.> derived class(child) ;- the class that inherts from another class
//2.> parents class;- the class being inherited from 
// types;- 
#include<iostream>
using namespace std;
 
 class A{

     public: 
     void func(){
         cout<<"inherited";
     }

 };
 class B : public A{

 };
 int main(){
     B b;
     b.func();

 
     return 0;

     }