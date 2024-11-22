#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool found = true;
    while(n>2){
        int rem = n%2;
        if(rem != 0){
            found = false;
            cout << "Not a power of 2"<< endl;
            break;
        }
        n = n/2;
    }
    if(found){
        cout << "Power of 2" << endl;
    }
    return 0;
}