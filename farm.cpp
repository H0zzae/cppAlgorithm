#include <iostream>
using namespace std;

int main(){
    int a,b,n,w;
    cin>>a>>b>>n>>w;
    int x,y;
    int cnt=0;
    int ans[2];
    for(int i=1;i<n-1;i++){
        x = i;
        y = n-x;
        if (((a*x)+(b*y))==w){
            cnt+=1;
            ans[0] = x;
            ans[1] = y;
        }
    }
    if ((a+b)==w){
        cnt=1;
        ans[0]=1;
        ans[1]=1;
    }
    if (cnt!=1){
        cout<<-1<<endl;
    }else{
        cout<<ans[0]<<" "<<ans[1];
    }
}