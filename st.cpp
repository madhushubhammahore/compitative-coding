#include<iostream>
using namespace std;

struct employee

{

  
    /* data */
    int eId;
     
    float salary;

};
int main(){
    struct employee shubham;
    shubham.eId=1;
    shubham.salary=15000000;
    cout<<shubham.salary;

    return 0;

}
