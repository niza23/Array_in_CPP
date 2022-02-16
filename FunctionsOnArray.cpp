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

int get(struct array arr,int index)
{
    if(index>=0 && index<arr.len)
    {
        return arr.a[index];
    }
    return -1;
}

int set(struct array *arr,int index,int key)
{
    if(index>=0 && index<arr->len)
    {
        arr->a[index]=key;
        return 1;
    }
    else{
        return -1;
    }
    

}

int max(struct array arr)
{
    int m=arr.a[0];
    for(int i=1;i<arr.len;i++)
    {
        if(m<arr.a[i])
        {
            m=arr.a[i];
        }    
    }
    return m;
}

int min(struct array arr)
{
    int mi=arr.a[0];
    for(int i=1;i<arr.len;i++)
    {
        if (mi>arr.a[i])
        {
            mi=arr.a[i];
        }    
    }
    return mi;
}

int suma(struct array arr)
{
    int sum=0;
    for(int i=0;i<arr.len;i++)
    {
        sum=sum+arr.a[i];
    }  
    return sum;

}

float average(struct array arr)
{
     int sum=0;
    for(int i=0;i<arr.len;i++)
    {
        sum=sum+arr.a[i];
    }  
    return (float)sum/arr.len; 
}

int main()
{
     struct array arr={{2,3,4,5,6},10,5};
    cout<<"get "<<get(arr,2)<<endl;
    cout<<"set "<<set(&arr,0,15)<<endl;
    display(arr);
    cout<<endl;
    cout<<"max is "<<max(arr)<<endl;
    cout<<"min is "<<min(arr)<<endl;
    cout<<"sum is "<<suma(arr)<<endl;
    cout<<"average is "<<average(arr);
    
    
}