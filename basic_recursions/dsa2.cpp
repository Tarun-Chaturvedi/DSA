/*	here is the question
*		print name n times
*/

#include<bits/stdc++.h>
using namespace std;

void rec(string b, int c){
	if(c==0) return;
	cout << b << endl ;
	rec(b, c-1);
}

int main(){
	int a,c;
	string b;
	cout << "Enter the name then the number of times it is needed to be print:" ;
	cin >> b >> a ;
	c = a ;
	rec(b,c);
	return 0;
}
