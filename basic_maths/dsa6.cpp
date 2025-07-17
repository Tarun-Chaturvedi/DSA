/* here is the question
* 	return the divisor of a Number
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,c;
	vector<int> b;
	cout << "Enter a Number :" ;
	cin >> a ;
	c = a ;
	for(int i = 1 ; i <= a ; i++){
		if( a % i == 0 ){ b.push_back(i);}
	}
	for(auto j : b){
		cout << j<<" " ;
	}

	return 0;
}
