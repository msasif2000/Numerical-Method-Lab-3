#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;
float y(float x)
{
    return log10(x);
}
int main()
{
    float a, b;
    cout<<"Enter the lower limit: a = ";
    cin>>a;
    cout<<"Enter the upper limit: b = ";
    cin>>b;
    int n;
    cout<<"Enter the interval n: ";
    cin>>n;
    float h=(b-a)/n;
    float sum = y(a) + y(b);
    for(int i=1;i<n;i++)
        sum+= 2*y(a+i*h);

    cout<<setprecision(5)<<(h/2)*sum<<endl;
return 0;
}
