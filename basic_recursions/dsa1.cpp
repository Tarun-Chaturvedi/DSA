/* here is the pattern
* 	print something n times using recursions
*/


#include<bits/stdc++.h>
using namespace std;

void rec(string a,int b){
	if(b==0) return;
	cout << a << endl;
	rec(a,b-1);
}

int main(){
	string a="something";
	int n,b;
	cout << "Enter the n times for printing of something : " ;
	cin >> n ;
	b = n ;
	rec(a, b);

	return 0;
}
