#include <iostream>

using namespace std;

int main()
{
    float sales [28],sum1=0,sum2=0,sum3=0,sum4=0,sum5;
    for (int i=0;i<28;i++)
    {
        cout<<"the sales of the day "<<i+1<<" : ";
        cin>>sales[i];
        if (i<7)
        {
            sum1+=sales[i];
        }
        else
            if (i<14)
        {
            sum2+=sales [i];
        }
        else
            if(i<21)
        {
            sum3+=sales [i];
        }
        else  sum4+=sales[i];
    }
    sum5=sum1+sum2+sum3+sum4;
    cout<<"the sum and average of week 1 : "<<sum1<<'\t'<<sum1/7<<endl;
    cout<<"the sum and average of week 2 : "<<sum2<<'\t'<<sum2/7<<endl;
    cout<<"the sum and average of week 3 : "<<sum3<<'\t'<<sum3/7<<endl;
    cout<<"the sum and average of week 4 : "<<sum4<<'\t'<<sum4/7<<endl;
    cout<<"the sum and average of the month : "<<sum5<<'\t'<<sum5/28<<endl;

    return 0;
}
