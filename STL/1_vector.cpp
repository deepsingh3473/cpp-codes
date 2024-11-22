#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    for(int i: a){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size-> " << a.size() << endl;
    cout << "Capacity-> " << a.capacity() << endl;

    cout << "front: " << a.front() << endl;
    cout << "back: " << a.back() << endl;

    a.pop_back();
    cout << "back: " << a.back() << endl;

    cout << "Size-> " << a.size() << endl;
    cout << "Capacity-> " << a.capacity() << endl;

    cout << a.empty() << endl;

    a.clear();
    cout << "Size-> " << a.size() << endl;
    cout << "Capacity-> " << a.capacity() << endl;

    cout << a.empty() << endl;
}