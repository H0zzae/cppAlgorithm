#include <iostream>
using namespace std;

int main(){
    int k=0;
    cin>>k;
    string map[k][k];
    int mid = (k-k/2)-1;
    for (int i=0;i<k;i++){
        if (i==mid){
            for(int j=0;j<k;j++){
                if (j==mid){
                    map[i][j]="O";
                }else{
                    map[i][j] = "+";
                }
            }
        }
        else{
            for(int j=0;j<k;j++){
                if ((j==mid)&(i!=mid)){
                    map[i][j] = "I";
                }else{
                    map[i][j] = ".";
                }
                if (i+j==k-1){
                    map[i][j] = "*";
                }
            }
        }
    }
    for(int i=0;i<k;i++){
        for (int j=0;j<k;j++){
            cout<<map[i][j];
        }cout<<endl;
    }
    return 0;
}
