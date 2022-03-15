#include <iostream>
#include <math.h>

using namespace std;

float tongCan( int n, int k)
{
   float S = 0;
   for (int i=1; i<= n; i++)
         S = sqrt(k + S)
   return S;
}

int main()
{
    int n, k;
    cout << " Nhap n = "; cin >> n;
    cout << " Nhap k = "; cin >> k;
    cout << " Tong day bang : " << tongCan(n,k) << endl;
    return 0;
}
