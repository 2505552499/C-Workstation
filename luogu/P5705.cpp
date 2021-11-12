#include<iostream>
using namespace std;
int main(){
    float a;
    cin>>a;
    float ans;
    ans = (int)(a * 10) % 10 + (int)a % 10 / 10.0 + (int)a / 10 % 10 / 100.0 + (int)a / 100 / 1000.0 ;
    cout<<ans<<endl;
    return 0;
}