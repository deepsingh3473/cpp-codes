#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] = {-2, 1, 2, 3, 5, 4, 9, 7};
    int target = 12;

    unordered_map<int, int> hash;
    for(int i=0; i<8; i++){
        int complement = target - arr[i];
        if(hash.count(complement)){
            cout << i << " " << hash[complement] << endl;
            break;
        }
        else{
            hash[arr[i]] = i;
        }
    }
    return 0;
}