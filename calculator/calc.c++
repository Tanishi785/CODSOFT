#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the first number : ";
    int n1;
    cin>>n1;

    cout<<"Enter the operation you want to perform : ";
    char op;
    cin>>op;

    cout<<"Enter the next number : ";
    int n2;
    cin>>n2;
    if(op =='+') cout<<n1+n2;
    if(op =='-') cout<<n1-n2;
    if(op =='*') cout<<n1*n2;
    if(op == '/') cout<<n1/n2;
}