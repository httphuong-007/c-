#include<iostream>
using namespace std;

int main()

{
    int n, sodoi;
    cout << "Nhap n : "; cin >> n;
    sodoi = n%10;
    int i = 0;
    int n1 = n/10;
    while(n1 > 0)
    {
        i = n1%10;
        sodoi = sodoi*10+i;
        n1 = n1/10;
    }
    if(sodoi == n)
	    cout << n << " la so doi xung " << endl;
    else
	    cout << n << " khong la so doi xung " << endl;
    return 0;

}