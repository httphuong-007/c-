#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
		}
		}
void tang(int a[],int n){
		int tg;
	   for(int i = 0; i < n - 1; i++){
		  	for(int j = i + 1; j < n; j++){
            	if(a[i] > a[j]){
                	tg = a[i];
                	a[i] = a[j];
                	a[j] = tg;        
            		}
   			}
    	}
}
 int main()
 {
     int a[100];
     int n;
     cout << "Nhap n "; cin >>n;
     nhap(a,n);
     tang(a,n);
 }