#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;
float fact(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    {
        res*=i;
    }
    return res*1.00;
}
int main()
{
    int n;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>y[i];
    int h= x[1]-x[0];
    int diffTable[n][n];
    for(int i=0;i<n;i++)
        diffTable[i][0]=y[i];

    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            diffTable[i][j]= diffTable[i+1][j-1] - diffTable[i][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
        for(int j=0;j<n-i; j++)
        {
           cout<< diffTable[i][j]<<"\t";
        }
        cout<<endl;
    }

    float X;
    cout<<"Enter the value of X: ";
    cin>>X;
    float u = (X-x[0])/h;
    float first_derivative = (1/h * ((1.00)*diffTable[0][1] + (2*u-1/fact(2))*(diffTable[0][2]) + (3*u*u-6*u+2/fact(3))*(diffTable[0][3])));
    cout<<"First Derivative: " <<setprecision(4)<<first_derivative<<endl;

     float second_derivative = (1/(h*h) * ((1.00)*(diffTable[0][2]) + ((u-1)*(1.00)*diffTable[0][3])));
    cout<<"Second Derivative: " <<setprecision(4)<<second_derivative<<endl;
return 0;
}



