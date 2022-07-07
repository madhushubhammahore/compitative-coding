//password creating

#include<iostream>
using namespace std;
int password(string s)


{
    bool num=false;
    bool cap=false;

    if(s.length()<4)
    return 0;

    if (s[0]>=48 &&s[0]<=57);
    return 0;

    for (int i=0;i<s.length();i++)
    {
        if (s[i]==' '|| s[i] =='/')
        return 0;

        else if(s[i]>=65 && s[i]<=90)
         cap=true;

         else if (s[i]>=48 && s[i]<=57)
         num=true;

    }

    int res=(num && cap);
    return res;


} 

 
 int main(){
     string str;
     cin>>str;

     password(str);

 }