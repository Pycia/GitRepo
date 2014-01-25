#include<iostream>
#include "add.h"
#include "pow.h"
#include "multiply.h"

void areEquals(double expected, double got)
{
	if(expected != got)
	{
		std::cout << "Expected = " <<expected << " but value = " <<got <<"\n";
	} else
	{
		std::cout <<"Test passed! \n";
	}
}

int main()
{
	areEquals(4,add(2,2));
	areEquals(8,multiply(2,4));
	areEquals(64,pow(8,2));
	areEquals(1,pow(8,0));
	std::cout <<"End of tests! \n";
	return 0;
}