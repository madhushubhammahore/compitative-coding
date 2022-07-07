//jai shree ram
#include<iostream>
using namespace std;
int main(){
    int items,i;
    cin>>items;
    int price_list[items],distance_list[items],sku_list[items];

    for (i=0;i<items;i++)
     cin>>price_list[i];
    for (i=0;i<items;i++)
     cin>>distance_list[i];
    for (i=0;i<items;i++)
    cin>>sku_list[i];


    int result[items],count=0;

    for (i=0;i<items;i++)
     if(sku_list[i]>0){
         result[count]=price_list[i]*distance_list[i];
         count++;
     }

         for(i=0;i<count;i++)
          cout<<result[i]<<" ";


          return 0;

     }

