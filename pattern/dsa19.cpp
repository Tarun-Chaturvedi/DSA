/*	here is the pattern
*		xxxxxxxxxx
*		xxxx  xxxx
*		xxx    xxx
*		xx      xx
*		x        x
*		x        x
*		xx      xx
*		xxx    xxx
*		xxxx  xxxx
*		xxxxxxxxxx
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << "enter a number:";
	cin >> b ;
     	if( b % 2 == 0 ){ 
		b++; 
	}
	a=b/2;
	for( int i = 1 ; i < b ; i++ ){
		if( i <= b/2){
			for( int j = 1 ; j <= a ; j++ ){
				cout << "x";
	 		}
			for( int k = 2 ; k < 2*i ; k++ ){
				cout << " ";
			}
			for( int l = 1 ; l <= a ; l++ ){
				cout << "x";
			}
			if(a >= 1)
				{a--;
			}
	 		cout << endl;	
		}
		else{
			a++;
			for( int j = 1; j <=a ; j++){
				cout << "x";
			}
			for( int k = 2 ; k < 2*(b-i) ; k++ ){
				cout << " ";
			}
			for( int l = 1 ; l <= a ; l++ ){ 
				cout << "x" ;
			}
			cout << endl;
		}
	}
	return 0;
}
