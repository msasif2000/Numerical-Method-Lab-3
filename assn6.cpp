#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

int main()
{
    int matrix[3][3];
    cout<<"Enter the elements of 3X3 matrix:" <<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>matrix[i][j];
   double det;
    det = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[2][1]*matrix[1][2])
          - matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
          + matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);
    cout<<"Determinant of the matrix is "<<det<<endl;
    return 0;
}
