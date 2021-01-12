#include <iostream>

using namespace std;

int main()
{
    int A[2][5],B[2][5];
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<"enter the elements of the matrix : ";
            cin>>A[i][j];
            B[i][j]=5*A[i][j];
        }
    }
    cout<<"the elements of the matrix A : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<"the elements of the matrix B : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<B[i][j]<<" ";

        }
        cout<<endl;

    }
    return 0;
}
