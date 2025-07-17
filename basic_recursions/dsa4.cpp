/*	here is the question
*		print the n to 1 number
*/

#include<bits/stdc++.h>
using namespace std;

void rec( int m){
	if(m==0) return;
	cout << m << endl;
	rec(m-1);
}

int main(){
	int n,m;
	cout << "Enter a Number: ";
	cin >> n ;
	m = n;
	rec(m);
	return 0;
}
