#include<iostream>
using namespace std;

int main(){
    //there are basically three types of stracture in c++
    /*1 sequence 
    selection 
    loop stracture*/
    /* 1 if else statement 
      2 if else  ladder 
      3 switch  case
      */
     //cout<<"this is toutorial line";
     int age;
     cout<<"tall me your age"<<endl;
     cin>>age;
    // selection control stracture using if else
switch (age)
{
case 18:
cout<<"you are 18"<<endl ;
    break;
case 22:
cout<<"you are 22"<<endl;
    break;
case 24:
cout<<"you are 24"<<endl;
    break;

default:
cout<<"no secial cases"<<endl;
    break;
}


    return 0;
    
}