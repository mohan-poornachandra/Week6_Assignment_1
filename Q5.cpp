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
    int rmax= INT_MIN;//To check the maximum sum
    int row=-1;
    int sum=0;
    for(int i=0;i<m;i++){
      sum=0;  
      for(int j=0;j<n;j++){
        sum+=arr[i][j];
      }  
      if(sum>rmax){
         rmax=sum;
         row=i;
      }
    }

   cout<<"Row of maximum sum=  "<<row<<endl;
   


}