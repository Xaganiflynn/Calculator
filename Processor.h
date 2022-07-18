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

	float Addies(float n1, float n2);
	float Subies(float n1, float n2);
	float Divies(float n1, float n2);
	float Multies(float n1, float n2);
	float Moddies(float n1, float n2);

	string ToBinaryString(float number);
	string ToHexaString(float number);
};

