#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=1;
    for(int i=n/2;i>0;i--){//윗부분
        for(int j=0;j<i;j++){//*
            cout<<"*";
        }
        for(int p=0;p<cnt;p++){//+
            cout<<"+";
        }cnt+=2;
        for(int j=i;j>0;j--){//*
            cout<<"*";
        }
        cout<<endl;
    }
    for(int p=0;p<cnt;p++){
        cout<<"+";
    }cout<<endl;
    cnt-=2;
    for(int i=0;i<n/2;i++){//아랫부분
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int p=cnt;p>0;p--){//+
            cout<<"+";
        }cnt-=2;
        for(int j=0;j<i+1;j++){//*
            cout<<"*";
        }
        cout<<endl;
    }
}