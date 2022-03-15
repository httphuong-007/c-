#include <iostream>
#include <string.h>
using namespace std;

void nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat_mang(int a[], int n)
{
    for(int i = 0; i < n; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

void gtri_am(int a[], int n)
{
    for (int i = 0; i < n; i++){
        if(a[i] < 0){
            cout << "a[" << i << "] = " << a[i] << "\t";
        }
    }
}

void tang_dan(int a[], int n)
{
    int tg;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
}
int main()
{
    int a[100];
    int n;
    cout << "Nhap so phan tu mang n = ";
    cin >> n;
    nhap_mang(a,n);
    cout << "Mang :" << endl;
    xuat_mang(a,n);
    cout << endl;
    cout << "Cac gia tri am trong mang :" << endl;
    gtri_am(a,n);
    cout << endl;
    cout << "Mang tang dan :" << endl;
    tang_dan(a,n);
    xuat_mang(a,n);
    cout << endl;
    return 0;
}