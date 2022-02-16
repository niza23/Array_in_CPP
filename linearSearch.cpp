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
int l(struct array arr,int key)
{
    for(int i=0;i<arr.len;i++)
    {
        if(key==arr.a[i])
        {
            return i+1;
        }
    }

return -1; 
}
int t(struct array *arr,int key)  //transposition 
{ 
    for(int i=0;i<arr->len;i++)
    {
        if(key==arr->a[i])
        {
            swap(arr->a[i],arr->a[i-1]);
            //return i;
        }
    }

return -1; 
}

int m(struct array *arr,int key)  //move in front 
{ 
    for(int i=0;i<arr->len;i++)
    {
        if(key==arr->a[i])
        {
            swap(arr->a[i],arr->a[0]);
            //return i;
        }
    }

return -1; 
}


int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    cout<<l(arr, 4)<<endl;

    //cout<<"transposition "<<
    t(&arr,4);
    //<<endl;
    display(arr);
    cout<<"move to front method"<<endl;
    m(&arr,6);
    display(arr);
    return 0;
}