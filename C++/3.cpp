#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define N 100
int main(){
    int a,b,c;
    
    srand(time(0));
    a=rand()%N+1;
    b=rand()%N+1;
    c=rand()%N+1;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}