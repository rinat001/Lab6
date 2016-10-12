#include <iostream>
 using namespace std;
int main () {
int N;
cin>>N;
if ( N==1) {
cout<<"YES"<<endl;
return 0;
}
if ( N%2!=0) {
cout<<"NO"<<endl;
return 0;
}
while (N%2==0 )
{
N=N/2;
}
if (N==1) {
cout<<"YES"<<endl;
return 0;
 
}
else {
cout<<"NO"<<endl;
return 0;
}
 
return 0;
}
 
