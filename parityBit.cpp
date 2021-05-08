#include <iostream>
using namespace std;

int main(){
    int n,ans;
    cin>>n;
    ans = n;
    unsigned int binaryValue[32];
    for(int i=0;i<31;i++){
        if (i==0){
            binaryValue[i] = 1;
        }
        else{
            binaryValue[i] = binaryValue[i-1]*2;
        }
    }
    binaryValue[31] = binaryValue[30]*2;
    int binary[32]={0,};
    int cnt = 0;
    while(n>0){
        for(int i=30;i>=0;i--){
            if ((n/binaryValue[i])==1) {
                binary[i] = 1;
                n-=binaryValue[i];
                cnt+=1;
            }
        }
    }
    if (cnt%2==0){
        cout<<ans;
    }else{
        cout<<ans+2147483648;
    }
}