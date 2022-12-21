#include<iostream>
using namespace std;
int main () {
    char ch;
    cout<<"Enter value of ch : ";
    cin>>ch;

    if (ch>='a'&& ch<='z') {
      cout<<"This is lowercase";
    }
    else if (ch>='A'&& ch<='Z') {
      cout<<"This is uppercase";
    }
    else {
        cout<<"ch is numerical";
    }
}