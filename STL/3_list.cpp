#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l(5,100);
    for(int i: l){
        cout << i << " ";
    }cout << endl;

    list<int> n(l);
    for(int i: l){
        cout << i << " ";
    }cout << endl;

    l.push_back(12);
    l.push_front(1);
    for(int i: l){
        cout << i << " ";
    }cout << endl;

    l.pop_back();
    l.pop_front();
    for(int i: l){
        cout << i << " ";
    }cout << endl;

    cout << "Size-> " << l.size() << endl;
    cout << "front: " << l.front() << endl;
    cout << "back: " << l.back() << endl;

    l.erase(l.end());
    for(int i: l){
        cout << i << " ";
    }cout << endl;
    return 0;
}