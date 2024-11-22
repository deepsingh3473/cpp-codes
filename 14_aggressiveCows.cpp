#include<bits/stdc++.h>
using namespace std;

bool isPossible(int stalls[], int n, int k, int mid){
    sort(stalls, stalls+n);
    int cowCount = 1;
    int lastPos = 0;

    for(int i=1; i<n; i++){
        if(stalls[i]-stalls[lastPos] >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = i;
        }
    }

    return false;
}

int aggressiveCows(int stalls[], int n, int k)
{
    int start = 0;
    int maxi = -1;
    for(int i=0; i<n; i++){
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;

    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(isPossible(stalls, n, k, mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=start+(end-start)/2;
    }

    return ans;
}

int main(){
    int arr[6] = {0,3,4,7,10,9};
    int k = 4;
    cout << aggressiveCows(arr, 6, k) << endl;
    return 0;
}