#include<iostream>
using namespace std;

int main(){
    string s = "aaaab";
    bool found = true;
    while(s.length() != 0 && found){
        found = false;
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == s[i+1]){
                s.erase(i,2);
                found = true;
                break;
            }
        }
    }
    cout << s << endl;
    return 0;
}