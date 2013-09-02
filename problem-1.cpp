/*
******************************************


If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.


******************************************
*/



#include<iostream>


int main(){
	int range, i, sum=0;
	std::cout<<"Enter the range: "<<std::endl;
	std::cin>>range;
	for(i=1; i<range; i++){
		if(i%3 == 0 || i%5 == 0){
			sum = sum+i;
		}
	}
	std::cout<<"The sum of multiples: "<<sum<<std::endl;
	return 0;
}
