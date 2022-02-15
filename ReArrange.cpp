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

void Rearrange(struct array *arr)  //negative num to left side
{
    int i=0;
    int j=arr->len-1;
    while(arr->a[i]<0)
    {
        i++;
    }
    while(arr->a[j]>0)
    {
        j--;
    }
    if(arr->a[i]>arr->a[j])
    {
        swap(arr->a[i],arr->a[j]);
    }
}

int main()
{
    struct array arr={{2,-3,4,-1,6},10,5};

    Rearrange(&arr);
    display(arr);
}