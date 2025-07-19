/*	here is the question
*		Factorial of a Number
*/

#include<bits/stdc++.h>
using namespace std;

int rec(int a){
	if(a == 1){ return 1; } 
	return a*rec(a-1);
}

int main(){
	int a;
	cout << "Enter a Number:";
	cin >> a;
	cout<<"Factorial:" << rec(a)<<endl;
	return 0;
}
