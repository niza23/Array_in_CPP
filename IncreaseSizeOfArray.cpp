#include<iostream>
using namespace std;

int main()
{
    int *p, *q;
    p=new int[5];
    q=new int[10];  //make another pointer and store the value of p in it
    p[0]=10;
    p[1]=11;
    p[2]=111;
    p[3]=10;
    p[4]=11;

    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
        
    }
    p=q;  //point p to q
    q=NULL;  
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<endl;
        
    }



}