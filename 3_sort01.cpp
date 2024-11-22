#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1,1,1, 0, 0,0, 1,0};
    int i=0, j=7;

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}