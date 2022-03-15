#include <iostream>

using namespace std;

int x(int n)
{
    int s = 0;
    if(n==0)
        return 1;
    for( int i = 1; i <= n; i++)
        s = s + i*i*x(n-i);
    return s;
}

int main()
{
    int n;
    cout << "Nhap n = "; cin >> n;
    cout << "Day x(n) = " << x(n) << endl;
    return 0;
}

