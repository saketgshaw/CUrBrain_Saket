#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter your number: ";
    cin>>n;
    while(n>0){
        n = n / 10;
        count++;
    }
        cout<<"total digit of your number = "<<count;
    return 0;
}
