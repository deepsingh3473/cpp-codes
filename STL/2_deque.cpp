#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();

    for(int i: d){
        cout << i << " ";
    }
    cout << endl;

    cout << "1st index element: " << d[1] << endl;
    cout << "front: " << d.front() << endl;
    cout << "back: " << d.back() << endl;


    d.push_back(3);
    d.push_front(4);
    for(int i: d){
        cout << i << " ";
    }cout << endl;

    cout << "Size-> " << d.size() << endl;
    cout << "Empty-> " << d.empty() << endl;

    d.erase(d.begin(), d.begin()+2);
    for(int i: d){
        cout << i << " ";
    }cout << endl;

    cout << "Size-> " << d.size() << endl;
    cout << "Empty-> " << d.empty() << endl;
    return 0;
}