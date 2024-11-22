#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;
    m.insert({1, "love"});
    m[13] = "babbar";
    m[5] = "kumar";
    m[2] = "singh";

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    m.erase(13);
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "2 is present or not: " << m.count(2) << endl;
    cout << "7 is present or not: " << m.count(7) << endl;

    auto it = m.find(5);
    cout << (*it).first << " " << (*it).second << endl;

    return 0;
}