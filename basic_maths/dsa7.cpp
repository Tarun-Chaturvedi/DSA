/* here is the question
* 		check for prime number
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,flag;
	flag=1;
	cout << "Enter a Number:" ;
	cin >> a ;
	for(int i = 2 ; i <= a/2 ; i++ ){
		if(a%i == 0){
			cout << a << " is not a prime." ;
			flag--;
			break;
		}
	}
	if(flag){
		cout << a << " is a prime." ;
	}
	return 0;
}
