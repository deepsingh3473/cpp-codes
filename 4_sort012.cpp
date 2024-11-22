#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1,1,2,2,0,0,1,2};
    int low=0, mid=0, high=7;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}