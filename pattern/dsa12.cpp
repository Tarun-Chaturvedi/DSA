/* here is pattern
* 	1             1
* 	1 2         2 1 
* 	1 2 3     3 2 1 
* 	1 2 3 4 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "enter a number: ";
	cin >> x;
	for(int i = 1; i<=x; i++ ){
		for(int j = 1; j<=i; j++){
			cout<<j<<" ";
		}
		for(int k = 2*(x-i); k>=1; k--){
			cout<<"  ";
		}
		for(int l = i; l>=1; l--){
			cout<<l<<" ";
		}
		cout << endl;
	}
	return 0;
}
