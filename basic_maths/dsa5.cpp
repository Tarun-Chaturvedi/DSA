/* here is the question 
* 	find if the number is armstrong or not
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	cout << "Enter a Number:" ;
	cin >> a ;
	b = a;
	c = 0;
	while(b){
		d=b%10;
		b=b/10;
		c = c + d^3;
	}
	if(c == a){
		cout << a << " is an Armstrong Number" << endl;
	}
	else{
		cout << a << " is not an Armstrong Number" << endl;
	}
	return 0;
}
