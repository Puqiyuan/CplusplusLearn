#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[])
{
	Sales_item item1, item2;

	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	
	return 0;
}

