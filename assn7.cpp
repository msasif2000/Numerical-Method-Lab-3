#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

double determinant(double matrix[3][3])
{
    double det;
    det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[2][1]*matrix[1][2])
          - matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
          + matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);
    return det;
}
int main()
{
    double matrix[3][4];
    cout<<"Enter the coefficients of equations :" <<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
        cin>>matrix[i][j];

    double d[3][3] = {
        { matrix[0][0], matrix[0][1], matrix[0][2] },
        { matrix[1][0], matrix[1][1], matrix[1][2] },
        { matrix[2][0], matrix[2][1], matrix[2][2] },
    };
    double dX[3][3] = {
        { matrix[0][3], matrix[0][1], matrix[0][2] },
        { matrix[1][3], matrix[1][1], matrix[1][2] },
        { matrix[2][3], matrix[2][1], matrix[2][2] },
    };
    double dY[3][3] = {
        { matrix[0][0], matrix[0][3], matrix[0][2] },
        { matrix[1][0], matrix[1][3], matrix[1][2] },
        { matrix[2][0], matrix[2][3], matrix[2][2] },
    };
    double dZ[3][3] = {
        { matrix[0][0], matrix[0][1], matrix[0][3] },
        { matrix[1][0], matrix[1][1], matrix[1][3] },
        { matrix[2][0], matrix[2][1], matrix[2][3] },
    };

    double D = determinant(d);
    double DX = determinant(dX);
    double DY = determinant(dY);
    double DZ =determinant(dZ);

    cout<<"D = "<<D<<endl;
    cout<<"DX = "<<DX<<endl;
    cout<<"DY = "<<DY<<endl;
    cout<<"DZ = "<<DZ<<endl;

    if(D!=0)
    {
        cout<<"Value of x is: "<<setprecision(4)<<DX/D<<endl;
        cout<<"Value of y is: "<<setprecision(4)<<DY/D<<endl;
        cout<<"Value of z is: "<<setprecision(4)<<DZ/D<<endl;
    }
    else
    {
        if(DX==0 && DY==0 && DZ==0)
            cout<<"Infinite Solution"<<endl;
        else if(DX !=0 || DY !=0 || DZ !=0)
            cout<<"No Solution"<<endl;
    }
return 0;
}

