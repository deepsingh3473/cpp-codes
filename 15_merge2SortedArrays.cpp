#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }

    while(j>=0){
        nums1[k--] = nums2[j--];
    }
}

void printArray(vector<int> &arr){
    for(int item : arr){
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5, 0, 0, 0};
    vector<int> vec2 = {2, 5, 6};

    merge(vec1 , 5, vec2, 3);
    printArray(vec1);
    return 0;
}