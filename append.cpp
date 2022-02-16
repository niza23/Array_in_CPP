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
void insert(struct array *arr,int index, int x)
{
    if(index>=0 && index<=arr->len)
    {
        for(int i=arr->len;i>index;i--)
        {
            arr->a[i]=arr->a[i-1];
        
        }
        arr->a[index]=x;
        arr->len++;
    }

}
void append(struct array *arr,int x)  //since we want to modify the array we should use call by address
{
    if(arr->len<arr->size)  //check for free space
    {
        arr->a[arr->len++]=x;
    }
}

int main()
{
    struct array arr={{2,3,4,5,5},10,5};
    append(&arr,20);

    insert(&arr,5,10);
    
    display(arr);
}