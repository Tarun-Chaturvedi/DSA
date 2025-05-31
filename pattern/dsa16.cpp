/*	here is 
*	A
*	BB
*	CCC
*	DDDD
*	EEEEE
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	char r;
	cout << "enter a number = ";
	cin >> b;
	a = 65;
	for(int i = 1; i <= b ; i++ ){
		r = (char)a;
     		for(int j = 1 ; j <= i ; j++ ){
			cout << r;	
		}
		a++;
		cout << endl;
	}
	return 0;
}
