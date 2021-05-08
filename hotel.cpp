#include <iostream>
using namespace std;

int main(){
    int h,w,n;
    cin>>h>>w>>n;
    if ((n%h)==0){
        ((n/h)<10)?(cout<<h<<0<<n/h):(cout<<h<<n/h);
    }
    else if (((n/h)+1)<=10){
        cout<<n%h<<0<<(n/h)+1;
    }else{
        cout<<n%h<<(n/h)+1;
    }
}