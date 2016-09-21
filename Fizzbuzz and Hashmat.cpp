#include <iostream>
using namespace std;

//FizzBuzz
int main () {
	int x;
	
	for (x=1; x<=100; x++){
			
		if ((x % 3 == 0) && (x % 5 == 0)){
			cout<<"FizzBuzz"<<endl;
			
		}
		else if (x % 3 == 0){
			cout<<"Fizz"<<endl;
			
		}
		else if (x % 5 == 0){
			cout<<"Buzz"<<endl;
			
		}
		else {
			cout<<x<<endl;
		}
		
	}
	return 0;
	
	
}
//Hashmat
/*
#include <iostream>
#include <cmath>
using namespace std;



int main (){
	int x, y, z;
	
	cout<<"Enter Hashmat's Army: ";
	cin>>x;
	cout<<"Enter Opponent's Army: ";
	cin>>y;
	z=x-y;
	cout<<"Difference: "<<abs(z);

	
	return 0;
}
*/


