#include <iostream>
using namespace std;
#include <algorithm>
#include <math.h>

int main(){
    int x[2];
    int y[2];
    int p,q;
    cin>>x[0]>>y[0]>>x[1]>>y[1]>>p>>q;

    int straight = 10000;
    int angle= pow(10000,2);

    if ((p>=x[0])&&(p<=x[1])&&((q>=y[0])&&(q<=y[1]))){
        cout<<0<<" "<<0;
    }
    else {
        if ((q>=y[0])&&(q<=y[1])){
            for(int i=0;i<2;i++){
                straight = straight>abs(p-x[i])?abs(p-x[i]):straight;
                angle = angle>pow(straight,2)?pow(straight,2):angle;
                
            }
        }
        else if ((p>=x[0])&&(p<=x[1])){
            for(int i=0;i<2;i++){
                straight = straight>abs(q-y[i])?abs(q-y[i]):straight;
                angle = angle>pow(straight,2)?pow(straight,2):angle;
            }
        }else{
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    straight = straight>abs(p-x[i])+abs(q-y[j])?abs(p-x[i])+abs(q-y[j]):straight;
                    angle = angle>pow(abs(p-x[i]),2)+pow(abs(q-y[j]),2)?pow(abs(p-x[i]),2)+pow(abs(q-y[j]),2):angle;

                }
            }
        }
        cout<<angle<<" "<<straight;
    }
}