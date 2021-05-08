#include <iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    int cnt=1;
    for (int i=1;i<k+1;i++){
        for(int j=1;j<=i;j++){
            cout<<cnt++<<" ";
        }cout<<'\n';
    }
    return 0;
}