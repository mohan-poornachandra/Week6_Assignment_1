#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[10][10];
    int m,n;
    cout<<"Enter no of rows and columns "<<endl;
    cin>>m>>n;
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        cin>>arr[i][j];  
    int max= INT_MIN;
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++){
        if(arr[i][j]>max){  
            max=arr[i][j];
        }
        
      }  

   cout<<"max = "<<max<<endl;
   


}