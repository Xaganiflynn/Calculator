#pragma once
#include <string>

using namespace std;
class Processor
{
private:
	static Processor* _processor;

	Processor(){}

public:
	Processor(Processor& other) = delete; // makes it so there's no use of a copy constructor
	void operator = (Processor& other) = delete;


	static Processor* GetInstance()
	{
		if (_processor == nullptr)
			_processor = new Processor;
		return _processor;
	}

	float AllPurpose(float n1, float n2, char operrand);

	string ToBinaryString(float number);
	string ToHexaString(float number);
};

