#include "Application.h"

int main()
{

	Maths::Vector2 a(1, 2);
	Maths::Vector2 b(2, 1);
	Maths::Vector2 c;

	c = a.AddScaledVector(b,5);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::getchar();

	return 0;
}