/*

*************************************
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*************************************

*/

#include<iostream>
#include<math.h>

using namespace std;

/***********************************/



int main(){
	long long int n, factor = 2, lastFactor = 1;
	cout<<endl<<"Enter the number: ";
	cin>>n;

	while(n>1){
		if(n%factor == 0){
			lastFactor = factor;
			n = n/factor;

			while(n%factor == 0)
				n = n/factor;
		}
		factor = factor + 1;
	}

	cout<<"THe largest prime Factor: "<<lastFactor<<endl;

	return 0;	
}
