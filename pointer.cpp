#include<iostream>
using namespace std;

int main(){
    //pointer is a data types which holds the address of otherdata types


int a=3;
int*b=&a;
cout<<b;
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is "<<b<<endl;

cout<<"the value at address of b is "<<*b<<endl;

//&--->address of operator


//*--->derefrence operator 
//pinter to pointer
int **c=&b;
cout<<"the value of b is "<<&b<<endl;
cout<<"the address of b is"<<c<<endl;
cout<<"the value at address c is"<<*c<<endl;
cout<<"the value at address value_at(c)) is"<<**c<<endl;



return 0; 

}