/*	here is the question
*		reverse the number and skip the 0 in the end of the number
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

	int a ,b ,c ,d ,e ;
	d = 0 ;
	vector<int> v ;
	cout << " Enter a Number " ;
	cin >> a ;
	b = a ;
	while( b ){
		if( b % 10 != 0 ){
			c = b % 10 ;
			b = b / 10 ;
			v.push_back( c ) ;
		}
		else{ 
			b = b / 10 ; 
		}
	}
	e = v.size() - 1 ;
	for( int i = e ; i >= 0 ; i-- ){
		d = d + (pow(10 , i ) )*v[e - i ];
	}
	cout << d<< endl ;
	return 0;
}
