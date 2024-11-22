#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        total += arr[i];
    }
    int left=0, right=0;
    for(int i=0; i<n; i++){
        right = total - left - arr[i];
        if(left == right){
            return i;
        }
        left += arr[i];
    }
    return -1;
}

int main(){
    int arr[3] = {2,1,-1};
    int ans = pivotIndex(arr,3);
    cout << ans << endl;
    return 0;
}