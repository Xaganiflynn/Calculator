#pragma once
#include "wx/wx.h"

class Calculator : public wxFrame
{
public:
	wxDECLARE_EVENT_TABLE();

public:
	Calculator();
	wxButton** func;

	void OnButtonClicked(wxCommandEvent& _evt);

	wxButton* NumButton1;
	wxButton* NumButton2;
	wxButton* NumButton3;
	wxButton* NumButton4;
	wxButton* NumButton5;
	wxButton* WeW;
	wxButton* NumButton6;
	wxButton* NumButton7;
	wxButton* NumButton8;
	wxButton* NumButton9;
	wxButton* NumButton10;
	wxButton* WEW;

	wxButton* Plus;
	wxButton* Minus;
	wxButton* Multi;
	wxButton* Divide;
	wxButton* Equals;
	wxButton* C;
	wxButton* Binary;
	wxButton* Hexi;
	wxButton* Mod;
	wxButton* Dec;



	wxTextCtrl* textBox;
private:

};	

