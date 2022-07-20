#include "Processor.h"
#include <string>

Processor* Processor::_processor = nullptr;


float Processor::AllPurpose(float n1, float n2, char operand)
{
	float ans = 0;
	switch (operand)
	{
	case '+':
		ans = n1 + n2;
		break;
	case '-':
		ans = n1 - n2;
		break;
	case '*':
		ans = n1 * n2;
		break;
	case '/':
		ans = n1 / n2;
		break;
	case '%':
		ans = ((int)n1 % (int)n2);
		break;
	default:
		break;
	}

	return ans;
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
