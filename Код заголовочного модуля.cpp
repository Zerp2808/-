#pragma once
#include <string>
#include <iostream>
#include <cmath>

class KeyChecker
{
private:
	std::string to_hex(unsigned int value);
	unsigned int F(unsigned int X, unsigned int Y, unsigned int Z);
	unsigned int G(unsigned int X, unsigned int Y, unsigned int Z);
	unsigned int H(unsigned int X, unsigned int Y, unsigned int Z);
	unsigned int I(unsigned int X, unsigned int Y, unsigned int Z);
	unsigned int rotate_left(unsigned int value, int shift);
	std::string get_md5(std::string in);
	std::string secret="18PI1", hash;
	std::string keyMaker(std::string str);
public:
	bool keyCheck(std::string userName, std::string licKey);
};