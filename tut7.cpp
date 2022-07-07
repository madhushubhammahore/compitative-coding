#include<iostream>
using namespace std;

int c=45;
int main(){
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    cout<<"enter the value of c:"<<endl;
    cin>>c;
    int sum =a+b;
    cout<<"the sum is "<<c<<endl;
    cout<<"the global c is "<<::c;
    


    return 0;
}