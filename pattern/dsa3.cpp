/* for pattern
* 	1
* 	1 2
* 	1 2 3
* 	1 2 3 4
* 	1 2 3 4 5
* 	. . . . . . .
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "enter the number:";
	cin >> x;
	for( int i = 1 ; i <= x ; i++ ){
		for(int j = 1 ; j <= i ; j++ ){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
