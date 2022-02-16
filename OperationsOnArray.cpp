#include<iostream>
#include<stdlib.h>
using namespace std;
struct array
{
    int *a;
    int size;
    int length;
};

void show(struct array arr)
{
   for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<endl;
    } 
}
int main()
{
    struct array arr;
    int i,n;
    cout<<"enter size of an array "<<endl;
    cin>>arr.size;

    arr.a= new int(arr.size); //dynamic array

    arr.length=0;

    cout<<"enter number of numbers "<<endl;
    cin>>n;

    cout<<"enter elements "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
     arr.length=n;

    cout<<"display elements "<<endl;

    show(arr);

}