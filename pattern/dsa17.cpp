/*	here is the pattern
*		A
*	       ABA
*	      ABCBA
*	     ABCDCBA
*	    ABCDEDCBA
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	char r;
	cout << "enter a number";
	cin >> b;
	for(int i = 1; i <= b ; i++){
     		a = 65;
     		for(int k = 1; k <= b-i; k++){
     			cout << " ";
     		}
		for( int j = 1; j < 2*i; j++){
     			r = (char)a;
     			cout << r;
     			if( j < i){ a++; }
     			else{a--; }
     		}
		cout << endl;
	}
	return 0;
}
