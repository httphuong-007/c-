#include <iostream>

using namespace std;

int gT (int n)
{
    if (n==0)
        return 1;
    return n*gT(n-1);
}

int main()
{
    int n, k;
    cout << "Nhap n = "; cin >> n;
    cout << "Nhap k = "; cin >> k;
    if(n < k)
        cout <<"Khong tinh !" << endl;
    else
        cout << "To hop chap " << k << " cua " << n << " la: " << gT(n) / (gT(k) * gT(n-k)) << endl;
    return 0;
}