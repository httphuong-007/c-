#include <iostream>

using namespace std;

int fibonacci (int n)
{
    if (n==1 || n==2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
    int n;
    cout << "Nhap n = "; cin >> n;
    cout << "So fibonacci thu " << n << " = " << fibonacci(n) << endl;
    return 0;
}