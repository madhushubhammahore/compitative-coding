#include<iostream>
using namespace std;



Node* buildtree(int postorder[],int inorder[],int start,int end){
    static int idx=4;

int val=postorder[idx];
idx--;
Node curr=new Node(val);


}


int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};

}