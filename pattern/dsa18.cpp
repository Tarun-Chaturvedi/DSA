/*	here is the pattern
*		E
*		E D
*		E D C
*		E D C B
*		E D C B A
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	char r;
	cout << "enter a number = ";
	cin >> b;
	for(int i = 1 ; i <= b ; i++ ){
		a = 64 + b;
		for(int j = 1 ; j <= i ; j++ ){
     			r = (char)a;
     			cout << r << " ";
     			a--;
     		}
	cout << endl;
	}

	return 0;
}
