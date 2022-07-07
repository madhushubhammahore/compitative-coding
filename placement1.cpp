/*i/p: 8 4 5 3 2 6 9 1
o/p: 189 120 90 45 15 9 0 0 
8->4+5+3+2+6+1=21 9 21*9=189
4->3+2+1=6 5+6+9=20 6*20=120*/
//solve this problem be using for loop
#include<iostream>
using namespace std;
int*product (int a[],int n)
{
    if (n==0)
    return NULL;
    for (int i=0; i<n; i++)
    {
        int sumS=0;
        int sumL=0;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[i])
            {
                sumS=sumS+a[j];

            }
            else{
                sumS=sumL=a[j];
            }
        }
        a[i]=(sumS*sumL);
    }
    return a;
}

int main(){

int n=8;
int a[n]={8, 4, 5 ,3, 2 ,6, 9, 1};

int* res=product(a,n);
for (int i=0;i<n;i++)
cout<<res[i]<<" ";
}
