/*	here is the pattern
*	4 4 4 4 4 4 4
*	4 3 3 3 3 3 4
*	4 3 2 2 2 3 4
*	4 3 2 1 2 3 4
*	4 3 2 2 2 3 4 
*	4 3 3 3 3 3 4
*	4 4 4 4 4 4 4
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	cout << "enter a number :";
	cin >> a ;
	for( int i = 1 ; i <= 2*a - 1 ; i++ ){
		for( int j = 1 ; j <= 2*a - 1 ; j++ ){
			int top = i-1 ;
			int bottom = j-1;
			int left = 2*a - 2 - top ;
			int right = 2*a -  2 - bottom ;
			b = a - min( min(top , bottom) , min(left , right)) ;
			cout<< b << " ";
		}
		cout << endl;
	}
	return 0;
}
