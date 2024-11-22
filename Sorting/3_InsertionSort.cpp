#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=0;
        for(j=i-1; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[8] = {2, 3, 9, 7, 1, 4, 5, 8};
    insertionSort(arr, 8);
    printArray(arr, 8);
    return 0;
}