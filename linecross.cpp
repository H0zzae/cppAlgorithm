#include <iostream>
using namespace std;
#include <algorithm>

int main(){
    int x[4],y[4];
    int m1,m2; //m1은 수평, m2는 수직
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
    }

    x[0]==x[1]?m2 = x[0] : m1 = y[0];
    x[2]==x[3]?m2 = x[2] : m1 = y[2];

    if (m2==x[0]){
        for(int i=min(x[2],x[3]);i<=max(x[2],x[3]);i++){
            if ((i==m2)&&((i==min(x[2],x[3]))||(i==max(x[2],x[3])))){
                if((m1>=min(y[0],y[1]))||(m1<=max(y[0],y[1]))){
                    cout<< 2;
                    return 2;
                }
            }
            else if ((i==m2)&&((m1>min(y[0],y[1]))&&(m1<max(y[0],y[1])))){
                    cout<< 1;
                    return 1;
                }
            }
    cout<<0; return 0;
    }else if(m2==x[2]){
        for(int i=min(x[0],x[1]);i<=max(x[0],x[1]);i++){
            if ((i==m2)&&((i==min(x[0],x[1]))||(i==max(x[0],x[1])))){
                if((m1>=min(y[2],y[3]))||(m1<=max(y[2],y[3]))){
                    cout<< 2;
                    return 2;
                }
            }
            else if ((i==m2)&&((m1>min(y[2],y[3]))&&(m1<max(y[2],y[3])))){
                    cout<< 1;
                    return 1;
            }
            else if ((i==m2)&&((m1==min(y[2],y[3]))||(m1==max(y[2],y[3])))){
                    cout<<2;
                    return 2;
            }
        }
    cout<<0; return 0;
    }

    
}