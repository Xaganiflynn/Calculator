#include "Processor.h"

Processor* Processor::_processor = nullptr;

float Processor::Addies(float n1, float n2)
{
	return n1 + n2;
}

float Processor::Subies(float n1, float n2)
{
	return n1 - n2;
}

float Processor::Divies(float n1, float n2)
{
	return n1/n2;
}

float Processor::Multies(float n1, float n2)
{
	return n1*n2;
}

float Processor::Moddies(float n1, float n2)
{
	return ((int)n1 % (int)n2);
}

string Processor::ToBinaryString(float number)
{
	string result = "";

	for (int i = 0; i < 16; i++)
	{
		if ((int)number % 2 == 0)
			result = "0";
		else
			result = "1" + result;

		number = number / 2;
	}

	return result;
}

string Processor::ToHexaString(float number)
{
	string result = "";

	while(number > 0)
	{
		int remainder = (int)number % 16;
		if (remainder < 10)
			result = to_string(number) + result;
		else if (remainder == 10)
			result = "A" + result;
		else if (remainder == 11)
			result = "B" + result;
		else if (remainder == 12)
			result = "C" + result;
		else if (remainder == 13)
			result = "D" + result;
		else if (remainder == 14)
			result = "E" + result;
		else if (remainder == 15)
			result = "F" + result;

		number = number / 16;
	}

	return "0x" + result;
}
