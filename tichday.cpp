#include <iostream>
using namespace std;
int tich (int n)
{
    if(n==1)
        return 1;
    return     (2*n-1) *tich(n-1);
}
int main ()
{
    int i;
    cout<<"nhap i mong muon : ";cin>>i;
    cout<<"Tich P = "<<tich(i);
    return 0;
}