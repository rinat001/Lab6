#include <iostream>
#include <cmath>
using namespace std;
int p ( int a) {
cout<<"prime"<<endl;
return 1;
}
int c ( int a) {
cout<<"composite"<<endl;
return 0;
 
}
int main () {
int a;
cin>>a;
for ( int i=2; i<=sqrt(a); i++)
{
if ( a%i==0) {
c(a);
return 0;
}
 
}
p(a);
return 0;
}