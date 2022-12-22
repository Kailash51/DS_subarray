#include<iostream>
#include<climits>

using namespace std;
 int main(){
    int n,sum = 0;
    cout<<"Enter the size of array \n";
    cin>>n;
    int arr[n];
     cout<<"Enter the element of array\n";
    for(int i=0; i<n; i++)
    {
     
      cin>>arr[i];
    }
 

     for(int i=0;i<n; i++){
        for(int j=i; j<n; j++){
           for(int k=i; k<=j; k++){
            sum+=arr[k];
             //cout<<arr[k] <<" ";
             
            }
            
            
            cout<<"\n";
         }
      }
    return 0;
   }