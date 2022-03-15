#include <iostream>
using namespace std;

int main()
{
    int nam;
    cout << "Nhap nam = ";
    cin >> nam;
    if(nam%4 == 0 || nam%100 != 0)
        cout << nam << " la nam nhuan " << endl;
    else
        cout << nam << " khong la nam nhuan" << endl;
    return 0;
}