#include <iostream>
#include <cstring>
#include <cstdio>
#include <fstream>
using namespace std;
void input (int a[100][5])
{
    cout <<"please enter header's names but you must make first header's name,second count,third buy price ,forth sell price,fifth notes  ";
    for (int i=0;i<5;i++)
        cin>>a[0][i];
        cout <<"please enter varible of salles ";

    for(int i=0;i<100;i++)
    {
          char ch;
        ch =a[i][0];
        gets (ch);
    }
    cout <<"count";
    for(int i=0;i<100;i++)
    cin>>a[i][1];
    cout<<"buy price";
    for(int i=0;i<100;i++)
        cin>>a[i][2];
        cout<<"sell price";
        for(int i=0;i<100;i++)
            cin>>a[i][3];
        cout<<"notes";
        for(int i=0;i<100;i++)
        {
        char ch;
        ch=a[i][4];
        gets (ch);
        }
}
void display (int a[100][5])
{
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<5;j++)
            cout<<a[i][j]<<"  ";
    }
    cout<<endl;
}
struct pro{
    string name,notes;
           float buy price ,sell price;
           int numb;
};
int main()
{
    pro a[100][5];
input (a[100][5]);
display(a[100][5]);

    return 0;
}
