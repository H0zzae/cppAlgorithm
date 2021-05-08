#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = a;
    ans = (a>=b) ? a:b;
    int same = 0;
    same = (a==b) ? 1 : 0;
    int plus = 0;
    plus = a+b;
    cout<<a+b<<" "<<a-b<<" "<<abs(a-b)<<" "<<a*b<<" "<<a/b<<" "<<a%b<<" "<<ans<<" "<<same<<'\n';
    return 0;
}