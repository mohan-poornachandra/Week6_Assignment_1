#include<iostream>
using namespace std;

int main()
{
    int arr[10][10],brr[10][10];
    int m,n;
    cout<<"Enter no of rows and columns of matrices"<<endl;
    cin>>m>>n;
    cout<<"Enter matrix 1"<<endl;
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        cin>>arr[i][j];
    cout<<"Enter matrix 2"<<endl;
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        cin>>brr[i][j];

    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
         arr[i][j] +=brr[i][j];

    cout<<"sum of 2 matrices is "<<endl;
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++)
        cout<<arr[i][j]<<"\t";  
     cout<<endl;         
    }  
}