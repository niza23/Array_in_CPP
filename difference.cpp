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

//copy those elements of Array 1 which arenot present in Array 2
struct array* difference(struct array *arr1, struct array *arr2 )
{
    int i,j,k;
    i=j=k=0;

    struct array *arr3=new array[sizeof(struct array)];

    while(i<arr1->len && j<arr2->len)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr2->a[j]<arr1->a[i])      //only copy element of first array  
        {
             j++;
        }
        else{ 
            i++;                        //if both are equal, skip both of them
            j++;
        }
    }
    for( ; i<arr1->len;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }
    
    arr3->len=k;
    arr3->size=10;
    return arr3;

}


int main()
{
    struct array arr1={{2,4,6,8,14},10,5};
    struct array arr2={{3,6,7,8,16},10,5};
    struct array *arr3;  //pointer

    arr3= difference(&arr1,&arr2);
    display(*arr3);
    return 0;
}