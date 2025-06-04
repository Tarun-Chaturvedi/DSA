/*	here is the pattern
*	xxxxxxxxxx
*	x        x
*	x        x
*	x        x
*	x        x
*	x        x
*	x        x
*	x        x
*	x        x
*	xxxxxxxxxx
*/

#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "enter a number:";
	cin >> a;
	for(int i = 1 ; i <= a ; i++ ){
		if( i == 1 | i == a){
			for( int j = 1 ; j <=a ; j++ ){
				cout << "x";
			}
		}
		else{ 
			if( i % 2 != 0){
				for(int k = 1 ; k <= a ; k++){
					if(k == 1 | k == a ){
						cout << "x";
					}
					else{
						cout << " ";
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
