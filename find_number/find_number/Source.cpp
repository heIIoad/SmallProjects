#include <iostream>
#include <string>
int FindMatchingNumber(unsigned int A, unsigned int B)
{
	std::string Astring = std::to_string(A);
	std::string Bstring = std::to_string(B);

	int position = Bstring.find(Astring);
	return position;
}

int main()
{

	unsigned int A;
	unsigned int B;

	std::cout << "enter initial number: ";
	std::cin >> B;
	std::cout << "\nenter number to be found: ";
	std::cin >> A;


	int result = FindMatchingNumber(A, B);

	if (result == -1)
	{
		std::cout << "didn't find such number." << std::endl;
	}
	else
	{
		std::cout << "position of the first number matching: " << ++result << std::endl;
	}

	std::cin.get();
}

