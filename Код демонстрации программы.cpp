#include "LicCheck.h"

int main()
{
	std::string s, k;
	std::cout << "Input user name" << std::endl;
	std::cin >> s;
	std::cout << "Input key" << std::endl;
	std::cin >> k;
	KeyChecker q;
	if (q.keyCheck(s, k))
		std::cout << "Key is true" << std::endl;
	else std::cout << "Key is false" << std::endl;
}