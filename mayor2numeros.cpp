/*	
	mayor2numeros.cpp
	Gonzalo Maidán
	13/04/2016
*/

#include<iostream>

int main () {
	int a,b;
	
	std::cin>>a;
	std::cin>>b;
	
	if(a>b) {
		std::cout<<"El mayor es A\n";
	} else if(b>a) {
		std::cout<<"El mayor es B\n";
	} else {
		std::cout<<"Son iguales";
	}
}
