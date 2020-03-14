#include <iostream>

int main()
{
	int a, b;
	char znak;
	for (int i = 0; std::cin >> znak >> a >> b; i++)
	{
		switch (znak)
		{
		case '+':
			std::cout << a + b << std::endl;
			break;
		case '-':
			std::cout << a - b << std::endl;
			break;
		case '*':
			std::cout << a * b << std::endl;
			break;
		case '/':
			std::cout << a / b << std::endl;
			break;
		case '%':
			std::cout << a % b << std::endl;
			break;
		}
	}
}