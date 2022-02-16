#include<iostream>
using namespace std;

int main()
{
    int A[3][4]={{1,2,3,4},{1,3,3,4}};  //array inside a stack
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
        
        
    }
    //array inside a heap -- for each location create an array inside a heap and assign it
    int *B[3];     //for rows
    B[0]=new int[4];  //for columns
    B[1]=new int[4];
    B[2]=new int[4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j];
        }
        cout<<endl;
        
        
    }


    int **C;    //using double pointer
    C= new int *[3];
    C[0]=new int[4];  
    C[1]=new int[4];
    C[2]=new int[4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
        
        
    }
}