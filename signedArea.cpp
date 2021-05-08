#include <iostream>
using namespace std;

int main(){
    int n,x[3],y[3];
    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    int area=0;
    area = (x[0]*y[1]+x[1]*y[2]+x[2]*y[0]) - (x[1]*y[0]+x[2]*y[1]+x[0]*y[2]);
    float m[2][3]={0}; 
    for (int i=0;i<2;i++){ 
        if ((y[i]-y[i+1])==0){
            m[i][0] = 1;
            m[i][1] = 0;
            m[i][2] = 0-y[i];
        }else if ((x[i]-x[i+1])==0){
            m[i][0] = 0;
            m[i][1] = 1;
            m[i][2] = x[i];
        }else {
            m[i][0] = 1;
            m[i][1] = double(y[i]-y[i+1])/double(x[i]-x[i+1]);
            m[i][2] = y[i] - m[i][1]*x[i];
        }
    }
    if ((m[0][0]==m[1][0])&&(m[0][1]==m[1][1])){
            cout<<"0 0";
        }
    else if (area<0){
        cout<<abs(area)<<" "<<-1;
    }else cout<<area<<" "<<1;
}