#include <iostream>
#include <string.h>

using namespace std;

int tongUoc(int n)
{
    int S = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			S = S + i;
		}
	}
    return S;
}

int main()
{
    int a, b;
    cout << "Nhap 2 so :" << endl;
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    if(tongUoc(a) == b && tongUoc(b) == a)
        cout << "Hai so ban be !" << endl;
    else
        cout << "Hai so khong phai ban be !" << endl;
    return 0;
}