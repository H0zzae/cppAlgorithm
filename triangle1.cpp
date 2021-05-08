#include <iostream>
using namespace std;
#include <algorithm>
#include <math.h>

int main(){
    int length[3]={0,};
    cin>>length[0]>>length[1]>>length[2];
    sort(length,length+3);
    int a = length[0];
    int b = length[1];
    int c = length[2];

    if (c>=(a+b)){
        cout<<0;
    }
    else{
        if ((a==b)&&(a==c)){
            cout<<1;
        }else if(pow(c,2)==(pow(a,2)+pow(b,2))){
            cout<<2;
        }else if(((a==b)&&(b!=c))||((b==c)&&(a!=c))||((a==c)&&(b!=c))){
            cout<<3;
        }else{
            cout<<4;
        }
    }
}