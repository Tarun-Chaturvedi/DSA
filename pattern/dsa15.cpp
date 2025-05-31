/*	here is the pattern
*		A
*		AB
*		ABC
*		ABCD
*		ABCDE
*/

#include<iostream>
using namespace std;

int main(){
	int a,b;
	char r;
	cout << "enter a number:=";
	cin >> b;
	for(int i = 1 ; i <= b ; i++ ){
		a = 65;
		for(int j = 1 ; j <= i ; j++ ){
			r = (char)a;
			cout << r;
			a++;
		}
		cout << endl;
	}
	return 0;
}
