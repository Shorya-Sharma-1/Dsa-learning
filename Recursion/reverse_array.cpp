#include<bits/stdc++.h>
using namespace std;

vector<int> rev_arr(vector<int>arr, int i, int j){
    if(i>=j){
        return arr;
    }

    swap(arr[i], arr[j]);
    return rev_arr(arr, i+1, j-1);

}

int main(){
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    arr= rev_arr(arr, 0, n-1);
    for(int x:arr){
        cout<<x<<" ";
    }
}