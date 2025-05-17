/* here is the pattern
* 	x x x x x
* 	x x x x
* 	x x x 
* 	x x 
* 	x 
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "enter a number : ";
	cin >> x;
	for(int i = x; i >= 1 ; i--){
	for(int j = 1; j <= i ; j++){
		cout << "x ";
		}
	cout << endl;
	}
	return 0;
}
