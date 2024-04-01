#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr1[n];
    for(int k=0;k<n;k++)
    {
        cin>>arr1[k];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int k=0;k<m;k++)
    {
        cin>>arr2[k];
    }
    int k=0;
    int brr[m+n];
    for(int i=0,j=0;i<n||j<m;)
    {
        if(i==n){
            brr[k++]=arr2[j++];
        }
        else if(j==m){
            brr[k++]==arr1[i++];
        }
        else if(arr1[i]<=arr2[j]){
            brr[k++]=arr1[i++];
        }
        else {brr[k++]=arr2[j++];}
    }
   for(int i=0;i<k;i++)
   {
    cout<<brr[i]<<' ';
   }
    return 0;
}