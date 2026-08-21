#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int ans[n];
	int count=0;
	
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	} 
	
	for(int i=0; i<n; i++){
	    for(int j=i; j<n; j++){
	        if(arr[i]>arr[j]){
	            count++;
	        }
	    }
	     ans[i]=count;
	     count=0;
	}
	
	for(int i=0; i<n; i++){
	    cout<<ans[i]<<endl;
	}

}
