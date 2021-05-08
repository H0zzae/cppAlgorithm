#include <iostream>
using namespace std;

int main(){
    int n,x[100],y[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int area=0;
    for(int i=0;i<n;i++){
        if (i==n-1){
            area+=x[i]*y[0]-x[0]*y[i];
        }else area+=x[i]*y[i+1]-x[i+1]*y[i];
    }
    if (area<0){
        cout<<abs(area)<<" "<<-1;
    }else cout<<area<<" "<<1;
}