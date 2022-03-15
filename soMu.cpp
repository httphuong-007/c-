#include <iostream>
#include <math.h>

using namespace std;

int P(int x,int y){
    return pow(x,y);
}
int main(){
    int a;
    int n;
    cout<<"nhap a: ";cin>>a;
    cout<<"nhap n: ";cin>>n;
    cout<<P(a,n)<<endl;
    return 0;
}