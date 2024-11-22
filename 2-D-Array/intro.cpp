#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(target == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

void printArray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void getRowSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << "Row " << (i+1) << " sum is: " << sum << endl;
    }
}

int main(){
    int arr[3][4] = {{1,2,3,4}, {4,5,8,9}, {11, 58, 2, 13}};

    printArray(arr, 3, 4);

    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element present" << endl;
    }
    else{
        cout << "Not present" << endl;
    }

    getRowSum(arr, 3, 4);
    return 0;
}