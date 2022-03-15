#include <iostream>
using namespace std;

float sum(int n)
{
    if (n==1)
        return 1;
    return (float) 1/n + sum(n-1);
}

int main ()
{
    int n;
    cout << "Nhap so n = "; cin >> n;
    cout << "Tong day tu 1 den 1/" << n << " = " << sum(n) << endl;
    return 0;
}