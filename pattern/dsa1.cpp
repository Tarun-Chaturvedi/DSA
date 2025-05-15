#include<iostream>
#include<string>
using namespace std;
int main(){

	int a=0;
	cout<< "enter the number of row x column:";
	cin >> a;
	for(int i = 0;i < a ; i++ ){
		for(int j = 0; j < a ; j++){
			cout << "x ";
		}
		cout << endl;
	}

	return 0;
}
