#include<iostream>
using namespace std;

struct array
{
    int a[20];
    int size;
    int len;
};
void display(struct array arr)
{
   for(int i=0;i<arr.len;i++)
    {
        cout<<arr.a[i]<<endl;
    } 
}

int main()
{
    struct array arr;
    int in,x;
    cout<<"enter index "<<endl;
    cin>>in;
    cout<<"enter number "<<endl;
    cin>>x;
    cout<<"insert in array "<<endl;
    cout<<"enter number of element "<<endl;
    cin>>arr.len;
    if(arr.len<in)
    {
                 cout<<"invLID POsition ";
    }
    else
    {
        cout<<"enter elements "<<endl;
         for(int i=0;i<arr.len;i++)
            {
                 cin>>arr.a[i];
             }

         for(int i=arr.len;i>=in;i--)
            {
                arr.a[i]=arr.a[i-1];
             }
         arr.a[in-1]=x;
         arr.len++;

         cout<<"new array ";
         display(arr);
    }
         
    
}