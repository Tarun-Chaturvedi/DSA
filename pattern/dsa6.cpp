/* here is the pattern 
* 	1 2 3 4 5
* 	1 2 3 4
* 	1 2 3 
* 	1 2 
* 	1
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "enter a number: ";
	cin >> x;
	for( int i = x ; i >= 1 ; i--){
		for(int j = 1 ; j <= i ; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
