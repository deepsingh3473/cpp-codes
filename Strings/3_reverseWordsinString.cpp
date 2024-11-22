#include<iostream>
using namespace std;

string reverseWords(string s){
    int n=s.length();
    int left=0, right=0, i=0;

    while(i<n){
        while(i<n && s[i] == ' '){
            i++;
        }
        if(i==n){
            break;
        }
        while(i<n && s[i] != ' '){
            s[right++] = s[i++];
        }
        reverse(s.begin() + left, s.begin() + right);
        s[right++] = ' ';
        left = right;
        i++; 
    }

    s.resize(right-1);
    return s;
}

int main(){
    string s="  the  sky is blue  is  ";
    string ans = reverseWords(s);
    cout << "Reversed words in the string are: " << ans << endl;
    return 0;
}