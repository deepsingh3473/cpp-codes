#include<iostream>
using namespace std;

int getLength(char name[]){
    int i=0, count=0;

    while(name[i++]!='\0'){
        count++;
    }

    return count;
}

void reverse(char name[]){
    int i=0, j=getLength(name)-1;
    while(i<=j){
        swap(name[i++],name[j--]);
    }
}

int main(){
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;

    // name[2] = '\0';
    cout << "Your name is: " << name << endl;

    cout << "Length of the string is: " << getLength(name) << endl;

    reverse(name);
    cout << "Reversed string is: " << name << endl;
    return 0;
}