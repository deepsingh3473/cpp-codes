#include<iostream>
#include<queue>

using namespace std;

int main(){
    // max-heap
    priority_queue<int> maxi;

    maxi.push(2);
    maxi.push(1);
    maxi.push(9);
    maxi.push(5);

    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << "Empty: " << maxi.empty() << endl;


    // min-heap
    priority_queue<int, vector<int>, greater<int> > mini;

    mini.push(1);
    mini.push(9);
    mini.push(8);
    mini.push(0);

    int m = mini.size();
    for(int i=0; i<m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty: " << mini.empty() << endl;
    return 0;
}