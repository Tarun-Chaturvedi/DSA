/*	here is the pattern
*		x        x
*		xx      xx
*		xxx    xxx
*		xxxx  xxxx
*		xxxxxxxxxx
*		xxxx  xxxx
*		xxx    xxx
*		xx      xx
*		x        x
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << "enter a number:";
	cin >> b;
	if( b % 2 != 0 ){
		b++;
	}
	a = b/2 ;
	for(int i = 1 ; i <= b ; i++ ){
		if(i < b/2){
			for(int j = 1 ; j <= i ; j++ ){
				cout << "x";
			}
			for(int k = 1 ; k <= 2*(b/2-i) ; k++ ){
				cout << " ";
			}
			for(int l = 1 ; l <=i ; l++ ){
				cout << "x";
			}
		}
		else{
			for(int j = 1 ; j <= b-i ; j++ ){
				cout << "x";
			}
			for(int k = 1 ; k <= 2*(i-b/2) ; k++ ){
				cout << " ";
			}
			for(int l = 1 ; l <= b-i ; l++ ){
				cout << "x";
			}
		}
		cout << endl;
	}
	return 0;
}
