#include <iostream>

using namespace std;

int main()
{
    int square [3][3],sum;
    int rsum[3],csum[3],d1sum=0,d2sum=0;
    cout<<"please enter the elements : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>square [i][j];
        }
    }
    for (int i=0;i<3;i++)
    {
        rsum[i]=0;
        csum[i]=0;
    }
    sum=3*(3*3+1)/2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            rsum[i]=rsum[i]+square [i][j];
        }
        if(rsum[i]!=sum)
        {
            cout<<"this is not magic square"<<endl; return 1;
        }
    }
    for (int j=0;j<3;j++)
    {
        for (int i=0;i<3;i++)
        {
            csum[j]=csum[j]+square [i][j];
        }
        if(csum[j]!=sum)
        {
            cout<<"this is not magic square"<<endl; return 1;
        }
    }
    for (int i=0;i<3;i++)
        d1sum=d1sum+square [i][i];
    for (int j=0;j<3;j++)
        d2sum=d2sum+square [j][3-j-1];
    if (d1sum!=sum)
    {
        cout<<"this not magic square"<<endl; return 1;
    }
    if(d2sum!=sum)
    {
        cout<<"this not magic square"<<endl; return 1;
    }
    cout<<"this is magic square"<<endl;
    return 0;
}
