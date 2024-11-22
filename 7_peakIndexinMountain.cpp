#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1, 2, 5, 7, 9, 8, 2, 1};
    int low=0, high=7;
    int mid=low+(high-low)/2;
    while(low<high){
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
        mid = low+(high-low)/2;
    }
    cout << arr[mid] << endl;
    return 0;
}