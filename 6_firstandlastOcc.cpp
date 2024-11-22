#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int left=0, right=n-1;
    int mid=left + (right-left)/2;
    int ans=-1;
    while(left <= right){
        if(arr[mid]==key){
            ans=mid;
            right= mid-1;
        }
        else if(arr[mid] > key){
            right = mid-1;
        }
        else if(arr[mid] < key){
            left = mid+1;
        }
        mid = left + (right-left)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int left=0, right=n-1;
    int mid= left + (right - left)/2;
    int ans=-1;
    while(left<=right){
        if(arr[mid]==key){
            ans=mid;
            left=mid+1;
        }
        else if(key<arr[mid]){
            right=mid-1;
        }
        else if(key>arr[mid]){
            left=mid+1;
        }
        mid = left + (right-left)/2;
    }
    return ans;
}

int main(){
    int arr[8] = {0, 1,2,2,2,2, 4, 6};
    int k = 2;

    // pair<int,int> ans;
    int first = firstOcc(arr, 8, 2);
    int last = lastOcc(arr, 8, 2);
    cout << first << " " << last << endl;

    int count = last-first + 1;
    cout << "Its count is: " << count << endl;
    
    return 0;
}