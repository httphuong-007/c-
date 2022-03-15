#include <iostream>
#include <math.h>
using namespace std;
int tongmu (int n)
{
    if(n==1)
        return 1;
    return  pow(n,2) +tongmu(n-1);
}
int main()
{
    int n;
    cout << "Nhap n : "; cin >> n;
    cout << "Tong S = " << tongmu(n);
    return 0;
}