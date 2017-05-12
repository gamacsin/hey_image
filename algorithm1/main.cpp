#include <iostream>
#include "algorithm1\hey_math.h"

int main()
{
	int x, y;
	while (std::cin >> x && std::cin >> y)
		if ( x > 0 && y > 0) 
			std::cout << x << ' ' << y << ' ' <<
			gcd (x , y) << std::endl;

}
		