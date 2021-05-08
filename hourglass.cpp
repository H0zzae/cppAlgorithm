#include <iostream>
using namespace std;

int main(){
    int k=0;
    cin>>k;
    int mid = k/2;
    string map[k][k];
    //fill(map[0],map[0]+k*k, 0);

    for(int i=0;i<mid;i++){
        for(int j=i;j<k-i;j++){
            map[i][j] = "*";
            if (j!=k-i-1){
                j++;
                map[i][j]="+";
            }
        }
        if (i!=0){
            for (int x = 0;x<i;x++){
                map[i][x] = "-";
                map[i][k-x-1] = "-";
            }
        }
    }
    for (int i=0;i<k;i++){
        if (i==mid){
            map[mid][i] = "*";
        }else{
            map[mid][i] = "-";
        }
    }
    for(int i=mid+1;i<k;i++){
        for(int j=k-i-1;j<i+1;j++){
            map[i][j] = "*";
            if (j!=i-1){
                j++;
                map[i][j]="+";
            }
        }
        if (i!=k-1){
            for (int x = k-i-1;x>0;x--){
                map[i][x-1] = "-";
                map[i][k-x] = "-";
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