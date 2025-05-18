/* here is pattern
* 	x
* 	x x
* 	x x x 
* 	x x x x 
* 	x x x 
* 	x x 
* 	x
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "enter a number :";
	cin >> x;
	for(int i = 1; i<=x ; i++){
		if(i<=x/2){
			for( int j = 1; j <= i; j++ ){
				printf("x");
			}
		}
		else{
			for( int j = 1; j<=x-i+1; j++ ){
				printf("x");
			}
		}
		cout << endl;
	}
	return 0;
}
