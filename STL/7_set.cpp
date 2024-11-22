#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    s.insert(12);
    s.insert(12);
    s.insert(12);
    s.insert(12);
    s.insert(4);
    s.insert(8);
    s.insert(8);
    s.insert(7);
    s.insert(1);
    s.insert(5);
    s.insert(5);

    for(int i : s){
        cout << i << " ";
    }
    cout << endl;

    cout << "12 is present or not: " << s.count(12) << endl;
    cout << "10 is present or not: " << s.count(10) << endl;

    set<int>::iterator it = s.find(8);
    cout << "Value at iterator it: " << *it << endl;

    set<int>::iterator itr = s.begin();
    itr++;
    s.erase(itr);

    cout << "Size: " << s.size() << endl;
    return 0;
}