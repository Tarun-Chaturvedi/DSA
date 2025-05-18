/* here is the pattern
* 	1
* 	0 1
* 	1 0 1
* 	0 1 0 1
* 	1 0 1 0 1
*/

#include<iostream>
using namespace std;
int main(){
	int x,a,b;
	cout << "enter a number:";
	cin >> x;
	for(int i = 1; i<=x; i++){
		if(i%2==0){
			a=0;
			b=1;}
		else{
			a=1;
			b=0;
		}
		for(int j = 1; j<=i; j++){
			if(j%2==0)
				cout << b << " ";
			else
				cout << a << " ";
		}
		cout << endl;
	}
	return 0;
}
