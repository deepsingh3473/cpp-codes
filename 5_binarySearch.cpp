#include<iostream>
using namespace std;

int main(){
    int arr[8] = {2, 5, 7, 9, 23, 45, 88, 89};
    int key = 1;

    int low=0, high=7;
    int mid= low + (high-low)/2;

    bool found = false;

    while(low<=high){
        if(arr[mid]==key){
            cout << "Index is " << mid << endl;
            found = true;
            break;
        }
        else if(key<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
        mid = low + (high-low)/2;
    }

    if(found == false){
        cout << "Element not found!!" << endl;
    }

    return 0;
}