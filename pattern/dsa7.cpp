/* here is the pattern
*		x
*	      x x x
*	    x x x x x
*	  x x x x x x x
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << " enter a number : ";
	cin >> x ;
	for( int i = 1; i <= x ; i++ ){
		for( int j = x-i; j >=1; j-- ){
			printf(" ");
		}
		for( int k = 1; k <2*i ; k++ ){
			printf("x");
		}
		cout << endl;
	}
	return 0;
}
