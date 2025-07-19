/* here is the question
* 	finding palindrome 
*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome(int start,int end,string b){
	if( start >= end ){ return true; }
	if( b[start] != b[end] ){ return false; }
	return palindrome(start+1, end-1, b);
}

int main(){
	string a;
	cout << "Enter a String: ";
	cin >> a ;
	if( palindrome( 0, a.length()-1, a )){ cout << "A palindrome"; }
	else{ cout << "Not a palindrome"; }
	return 0;
}
