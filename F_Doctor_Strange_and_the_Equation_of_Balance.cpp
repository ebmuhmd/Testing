#include <iostream>
#include <string>
#include <vector>
#include<map>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;++i)
    {
      long long u,v,x,y,uv;
      cin >> u>>v;uv=u+v;
      x=((v-uv)*u);
      y=((u-uv)*v*-1);
      
      cout<<x<<" "<<y<<endl;
    }
 

  
    return 0;
}
