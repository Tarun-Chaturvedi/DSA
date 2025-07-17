/* here is the question
* 	find the greatest common divisor

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d;
	cout << "Enter two numbers:=";
	cin >> a >> b;
	c = a > b ? a : b;
	for(int i = 1 ; i < c ; i++){
		if(a%i== 0 && b%i== 0){
			d=i; 
		}
	}
	cout << "Greatest Common Divisor is := " << d << endl;
	return 0;
}
