#include <iostream>
using namespace std;
double _pow (double x, int y)
{
 double f = 1;
 for ( int i = 1; i <= y; i++) {
 f = f * x;
}
return f;
}
int main ()
{
    int b;
    double a;
    cin >> a >> b;
    cout << _pow(a,b)<<endl;
 
    return 0;
}
 
