/*	here is the question
*		sum of n number
*/


#include<bits/stdc++.h>
using namespace std;

int rec(int i,int a){
	if(a==0) return i;
	return rec(i+a,a-1);
}

int main(){
	int a;
	cout << "Enter a Number:" ;
	cin >> a ;
	cout << rec(0,a) << endl;
	return 0;
}
