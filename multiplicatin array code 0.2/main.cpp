#include <iostream>

using namespace std;

int main()
{
    int A[4][5],B[5][3],C[4][3];
    cout<<"please enter matrix A : ";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"please enter matrix B : ";
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<3;y++)
        {
            cin>>B[x][y];
        }
    }
    for(int w=0;w<4;w++)
    {
        for(int v=0;v<5;v++)
        {
            C[w][v]=0;
            for(int m=0;m<5;m++)
            {
                C[w][v]=C[w][v]+(A[w][m]*B[m][v]);
            }
        }
    }
    cout<<"the matrix C is \n";
    for(int k=0;k<4;k++)
    {
        for(int l=0;l<3;l++)
        {
            cout<<C[k][l]<<'\t';
            if(l==2)
                cout<<endl;
        }
    }


    return 0;
}
