#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
	int x, total;

	ifstream read("input.txt");
	read>>x;
	cout<<x<<endl;
		for(int y=0; y<x; y++){
			if(y % 3 == 0||y % 5 == 0){
				total += y;
			}
		}
	
	cout << total;
	return 0;
}
