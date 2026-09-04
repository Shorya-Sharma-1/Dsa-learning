#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
    vector<int>ans(n);
    int j=0;
	int count=0;
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	for(int i=0; i<n; i++){
	    if(arr[i]==0){
	        count++;
	    }
	    if(arr[i]!=0){
	        ans[j]=arr[i];
	        j++;
	    }
	    
	    
	}
	for(int i=0; i<count; i++){
	    ans.push_back(0);
	}
	
	for(int i=0 ; i<n; i++){
	    cout<<ans[i]<<" ";
	}
	
	
}
