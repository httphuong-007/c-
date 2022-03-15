#include <iostream>

using namespace std;

int sum (int n)
{
    if (n==0)
        return 0;
    return (n + sum(n-1));
}

int main ()
{
    int n;
    cout << "Nhap n = "; cin >> n;
    cout << "Tong day " << n << " = " << sum(n) << endl;
    return 0;
}