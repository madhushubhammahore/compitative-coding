#include<iostream>
//include one more header file
#include<vector>

using namespace std;


int main(){

//implimenting of vector 




vector <int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);

for (int i=0;i<v.size();i++){
    cout<<v[i]<<endl;

}//123
vector<int>::iterator it;

for (it=v.begin();it!=v.end();it++){
   cout<<*it<<endl;
}
//1 2 3

for (auto element:v){
  cout<<elemnet<<endl;
}
//1 2 3
v.pop_back();


}

  n                                                   


}