 /* the problem statement is :
 * 	find the number of digits in the given input
 */

#include<iostream>
using namespace std;
int main(){

	int a,b,c;
	c=0;
	cout << "enter a number = " ;
	cin >> a;
	b = a ;
	while(b){
		c++;
		b = b/10;
	} 
	cout << "number of digit in this number is :=" << c << endl;
	return 0;
}
