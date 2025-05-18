/* here is pattern
* 		x
* 	      x x x 
* 	    x x x x x 
* 	  x x x x x x x 
* 	    x x x x x 
* 	      x x x 
* 	        x
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	cout << " enter a number :";
	cin >> x ;
	for(int i = 1; i<=x ; i++){
		if(i<=x/2){
			for(int j = 1; j<=x/2-i; j++){
				printf(" ");
			}
			for(int k = 1; k<2*i; k++){
				printf("x");
			}
			cout << endl;
		}
		else{
			for(int j = x/2; j >x-i; j--){
				printf(" ");
			}
			for(int k = 2*(x-i); k>1; k-- ){
				printf("x");
			}
			cout << endl;
		}
	}
}
