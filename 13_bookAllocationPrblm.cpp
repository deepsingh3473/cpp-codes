#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}

int minInMaxBooks(int arr[], int n, int m){
    int start = 0;

    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int end = sum;

    int mid=start+(end-start)/2;

    int ans = -1;

    while(start<=end){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }

    return ans;
}

int main(){
    int arr[4] = {10,20,30,40};
    int m = 2;
    int ans = minInMaxBooks(arr, 4, 2);
    cout << ans << endl;
    return 0;
}