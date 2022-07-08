#pragma once
#include "wx/wx.h"
#include "Calculator.h"


class App : public wxApp
{
public:
	App();
	~App();
private:
	Calculator* frame = nullptr;

public:
	virtual bool OnInit();
};

