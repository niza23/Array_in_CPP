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
void reverse(struct array *arr)  //using two arrays
{
    int *b;
    b=new int(arr->len);

    for(int i=arr->len-1,j=0;i>=0;i--,j++)
    {
        b[j]=arr->a[i];
    }
    for(int i=0;i<=arr->len;i++)
    {
        arr->a[i]=b[i];
    }
}
void sreverse(struct array *arr)  //using swap method
{
    int j,i;

    for(i=0,j=arr->len-1;i<j; i++,j--)
    {
        swap(arr->a[i],arr->a[j]);
    }
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};

    reverse(&arr);
    display(arr);
    cout<<"another method "<<endl;
    sreverse(&arr);
    display(arr);
}
