#include<iostream>
using namespace std;
 int smalllargesum(int*arr,int n){
     if(n<=3){
         return 0;

     }
     //here be use vector because we dont know the array size.
     //we can use array also but vector gives us more functionality than array
     vector<int>arrEven,arrOdd;
     //break array into two different arrays even and odd
     for (int i=0;i<n;i++){
         //if number is even then add it into even array
         if (i%2==0){
             arrEven.push_back(arr[i]);

         }
         else{
             arrOdd.push_back(arr[i]);

         }
     }
     sort(arrOdd.begin(),arrOdd.end());
     return arrEven[1]+arrOdd[1];
 }
 int main(){
     int n;
     cin>>n;
     int arr[n];

     for (int i=0;i<n;i++){
         cin>>arr[i];

     }
     cout<<smalllargesum(arr,n);

     return 0;

 }

 