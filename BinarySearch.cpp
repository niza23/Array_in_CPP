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

int binarysearch(struct array arr,int k)  //without recursion
{
    int l=0,h=arr.len-1,mid;
    while(h>=l)
    {
        mid=(l+h)/2;
        if(k==arr.a[mid])
        {
            return mid+1;
        }
        else if(k>arr.a[mid])
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }


    }
    return -1;
    
}

int rbinary(int a[],int l,int h,int k)   //with recursion
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(k==a[mid])
        {
            return mid;
        }        
        else if(k<a[mid])
        {
            return rbinary(a,l,mid-1,k);
        }
        else{
            return rbinary(a,mid+1,h,k);
        }

    }
    return -1;
    
}

int main()
{
    int key=5;
    //cin>>key;
    struct array arr={{2,3,4,5,6},10,5};

    cout<<"found at position "<<binarysearch(arr,key)<<endl;

    cout<<"using recursion "<<rbinary(arr.a,0,arr.len,4);

}