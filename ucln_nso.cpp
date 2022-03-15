#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int ucln(int i, int j){
	if(j==0)
		 return i;
	if(i%j == 0)
		return j;
	return ucln(j, i%j);
}
int main()
{
    int a, b, c;
	cout << "nhap a: ";
    cin >> a;
	cout << "nhap b: ";
    cin >> b;
	cout << "nhap c: ";
    cin >> c;
    cout << "Uoc chung lon nhat la : " << ucln(ucln(a,b),c) << endl;
    return 0;
}