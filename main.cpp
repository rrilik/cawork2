#include <iostream>
#include "calculator.h"

int main(){
	Calculator * calculator = new Calculator();

	calculator->Mul(7, 6);
	std::cout<<"calculator multiplied 7 and 6"<<std::endl;
	calculator->Add(2, 4);
	std::cout<<"calculator added 2 and 4"<<std::endl;
	
	return 0;
}