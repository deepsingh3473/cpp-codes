#include<iostream>
using namespace std;

int getLength(char input[]){
    int i=0, count=0;
    while(input[i++]!='\0'){
        count++;
    }
    return count;
}

bool checkNormalPalindrome(char input[]){
    int i=0, j=getLength(input)-1;

    while(i<=j){
        if(input[i] != input[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;
}

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char input[]){
    int i=0, j=getLength(input)-1;

    while(i<=j){
        char ch = input[i], chi = input[j];
        if(!((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))){
            i++;
            continue;
        }
        else if(!((chi >= '0' && chi <= '9') || (chi >= 'A' && chi <= 'Z') || (chi >= 'a' && chi <= 'z'))){
            j--;
            continue;
        }
        else if(toLowerCase(ch) != toLowerCase(chi)){
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main(){
    char input[20];
    cout << "Enter your string: " << endl;
    cin >> input;


    if(checkNormalPalindrome(input)){
        cout << "Palindrome!!" << endl;
    }
    else{
        cout << "Not a palindrome!!" << endl;
    }


    // -- Not Case-Sensitive and also ignore whitespaces and other special characters --
    char secondInput[20];
    cout << "Enter your string: " << endl;
    cin >> secondInput;


    if(checkPalindrome(secondInput)){
        cout << "Palindrome!!" << endl;
    }
    else{
        cout << "Not a palindrome!!" << endl;
    }
    return 0;
}