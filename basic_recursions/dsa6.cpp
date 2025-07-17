/*	here is the question
*		factorial
*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int i, int a){
	if(a==0) return i;
	return factorial(i*a,a-1);
}

int main(){
	int a;
	cout << "Enter a Number:=";
	cin >> a;
	cout << factorial(1,a) << endl;
	return 0;
}
