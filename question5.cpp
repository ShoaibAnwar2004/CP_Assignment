#include<bits/stdc++.h>
using namespace std;
string binary_search(int A[],int target,int size){
	int low=0;
	int high=size-1;
	while(low<=high){
		int mid;
		mid=(low+high)/2;
		if(A[mid]==target){
			return "Target number is present";
		}
		if(A[mid]<target){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return "Target number not present";
}
int lbound(int A[],int n,int size){
	int low=0;
	int high=size-1;
	int ans=size;
	int mid;
	while(low<=high){
		mid=(high+low)/2;
		if(A[mid]<n){
			low=mid+1;
		}
		else if(A[mid]>=n){
			high=mid-1;
			ans=mid;
		}
	}
	return ans;
}
int ubound(int A[], int n, int size){
    int low=0;
    int high=size-1;
    int ans=-1;
    int mid;
    while(low<=high){
        mid=(high+ low)/2;
        if(A[mid]<=n){
            low=mid+1;
            ans=mid;
        }else if(A[mid]>n){
            high=mid-1;
        }
    }
    return ans;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int tnum;
	cin >> tnum;
	int lower=lbound(arr,tnum,n);
	int upper=ubound(arr,tnum,n);
	string ispresent=binary_search(arr,tnum,n);
	cout << "lower bound is : " << lower << endl;
	cout << "Upper bound is : " << upper << endl;
	cout << ispresent << endl;
	
}