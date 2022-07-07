//jai shree ram
#include<iostream>
#include<math.h>
#include<stdlib.h>
#define pi 3.1415926535897932384

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t-){
        long double x1,y1,r1,x2,y2,r2,d,ans,r1sqr,r2sqr,dsquare;
        scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&x1,&y1,&r1,&y1,&r1,&x2,&y2,&r2);

        r1sqr=r1*r1; r2sqr=r2*r2;
        
        d=sqrt( ( x2=x1)*(x2-x1)+(y2-y1)*(y2-y1));
        dsquare=d*d;
        if(d>r1+r2) ans=0;
        else if (d<=abs(r2-r1) && r1>=r2)
        {
            printf("Here\n");
            ans=pi*r2sqr;
        }
        else if(d<=abs(r2-r1) && r1<=r2)
        {
            printf("here2\n");
            ans=pi*r1sqr;

        }
        
    }


}