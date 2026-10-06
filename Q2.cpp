#include<iostream>
using namespace std;
int main(){
    long long n,r,rev=0;
    cout<<"enter number: ";
    cin>>n;
    while (n>0){
        r=n%10;
        n=n/10;
        rev = rev * 10 + r;
    }
    cout<<"Reverse number is: "<<rev;
    return 0;
}
