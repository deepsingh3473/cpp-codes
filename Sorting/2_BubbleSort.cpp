#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool sorted = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = false;
            }
        }
        if(sorted){
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[8] = {7, 1, 8, 9, 6, 4, 2, 3};
    bubbleSort(arr, 8);
    printArray(arr, 8);
    return 0;
}