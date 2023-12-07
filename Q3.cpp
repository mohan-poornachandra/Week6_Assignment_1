#include<iostream>
using namespace std;

int main()
{
    int m,n,l1,l2,r1,r2,sum=0;
    cout<<"Enter no of rows and col: ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter matrix: "<<endl;
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        cin>>arr[i][j];

    cout<<"l1= "; cin>>l1;
    cout<<"r1= "; cin>>r1;
    cout<<"l2= "; cin>>l2;
    cout<<"r2= "; cin>>r2;

    for(int i=min(l1,l2);i<=max(l1,l2);i++)
       for(int j=min(r1,r2);j<=max(r1,r2);j++)
         sum+=arr[i][j];

    cout<<sum<<endl;
}