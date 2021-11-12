#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a;
    int n;
    cin>>a>>n;
    float ans = a / n;
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<ans<<endl;
    cout<<2 * n;

}