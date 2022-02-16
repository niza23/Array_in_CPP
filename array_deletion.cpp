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
   for(int i=0;i<arr.len-1;i++)
    {
        cout<<arr.a[i]<<endl;
    } 
}

int del(struct array *arr,int index)
{
    if(index>=0 && index<arr->len)
    {
        int x=arr->a[index-1];
        for(int i=index-1; i<arr->len-1; i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        return x;
        arr->len--;
    }
    return 0;
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    cout<<del(&arr, 2)<<endl;
    display(arr);
    return 0;
}