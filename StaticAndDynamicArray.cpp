#include<iostream>
using namespace std;

int main()
{
    //static
    int a[5]={2,3,4,5,6};

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"\n";

    //dynamic
    int *p;
    p=new int[5];   //inside of a heap
    p[0]=10;
    p[1]=11;
    p[2]=111;

    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }


}