/*	here is the question
*		count from 1 to N
*/

#include<bits/stdc++.h>
using namespace std;

void rec(int i, int a){
	if(i==a+1) return;
	cout << i << endl ;
	rec(i+1,a);
}

int main(){
	int a;
	cout << "Enter a Number: " ;
	cin >> a ;
	rec(1,a);
	return 0;
}
