#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(4);
    s.push(9);

    cout << s.top() << endl;

    s.pop();
    
    cout << s.top() << endl;

    cout << "Size-> " << s.size() << endl;
    cout << "Empty-> " << s.empty() << endl;
    return 0;
}