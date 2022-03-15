#include <iostream>

using namespace std;

void thap(int n, char x, char y, char z)
{
    if(n > 0)
    {
        thap(n-1, x, z, y);
        cout << x << " ----------> " << z << endl;
        thap(n-1, y, x, x); 
    }
}

int main()
{
    int n;
    cout << "Nhap so dia: " ; cin >> n;
    cout << "Cach chuyen: " << endl;
    thap(n, 'A', 'B', 'C');
    return 0;
}