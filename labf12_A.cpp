#include <iostream>
using namespace std;
int _min (int x,int y,int z,int d)
{
int m1,m2,m3;
m1=min (x,y);
m2=min (m1,z);
m3=min (m2,d);
 
return m3;
}  
 
int main () {
int x,y,z,d;
cin>>x>>y>>z>>d;
cout<<_min(x,y,z,d)<<endl;
return 0;
}