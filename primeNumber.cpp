#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n==2){
        cout<<1;
    }
    else{
        for(int i=2;i<n;i++){
        if((n%i)==0){
            cout<<0<<endl;
            break;
            return 0;
        }
        else if(i==n-1){
            cout<<1;
        }
    }
    }
    
}