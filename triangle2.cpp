#include <iostream>
using namespace std;
#include <algorithm>
#include <math.h>
bool same(int x[],int y[]);

int main(){
    int x[3]={0,};
    int y[3]={0,};
    cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
    int length[3];
    float m[2][3]={0}; //ny = mx+d => m[i][0] = n, m[i][1] = 기울기, m[i][2] = d 
    for (int i=0;i<2;i++){ //m, length값 구하기
        length[i] = pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2);
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
            m[i][1] = (y[i]-y[i+1])/(x[i]-x[i+1]);
            m[i][2] = y[i] - m[i][1]*x[i];
        }
    }

    length[2] = pow(x[2]-x[0],2)+pow(y[2]-y[0],2);
    sort(length,length+3);
    int a = length[0];
    int b = length[1];
    int c = length[2];
    

    // for(int i=0;i<3;i++){
    //     cout<<"x,y = "<<x[i]<<","<<y[i]<<endl;
    //     cout<<length[i]<<endl;
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //     cout<<m[i][j];
    //     }cout<<endl;
    // }

    if (same(x,y)){
        if ((m[0][0]==m[1][0])&&(m[0][1]==m[1][1])&&(m[0][2]==m[1][2])){
            cout<<0;
        }
        else{
            if (c==(a+b)){
                cout<<1;
            }else if(c>(a+b)){
                cout<<2;
            }else if(c<(a+b)){
                cout<<3;
            }else{
                cout<<0;
            }
        }
    }else{
        cout<<0;
    }
}

bool same(int x[],int y[])
{
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            // cout<<"x[i], y[i] = "<<x[i]<<", "<<y[i]<<" x[j], y[j] = "<<x[j]<<", "<<y[j]<<endl;
            if ((x[i]==x[j])&&(y[i]==y[j])){
                return false;
            };
        };
    };
    return true;
}