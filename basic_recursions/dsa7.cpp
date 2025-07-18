/*	here is the question
*		reversing an array
*/


#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
	int c = b;
	b = a ;
	a = c;
}

void rec(int start,int end,int a[]){
	if(start >= end) return;
	swap(a[start],a[end]);
	rec(start+1,end-1,a);
}

int main(){
	int n;
	cout << "Enter the number of element in an array: ";
	cin >> n ;
	int a[n];
	cout << "Enter the elements:" << endl;
	for(int i = 0; i < n ;i++){
		cin >> a[i];
	}
	rec(0,n-1,a);
	cout << "Reversed Array:" <<endl;
	for(int i=0;i<n;i++){ cout << a[i] << " ";}
	return 0;
}
