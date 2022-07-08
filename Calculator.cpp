#include "Calculator.h"
Calculator::Calculator() :wxFrame(nullptr, wxID_ANY, "Long KEKulator", wxPoint(0, 100), wxSize(540, 300))
{
	textBox = new wxTextCtrl(this, 1000, "", wxPoint(0,100), wxSize(521,50));

	WeW = new wxButton(this, 3121, "W\nk\ne\nK", wxPoint(250, 40), wxSize(20, 60));
	NumButton1 = new wxButton(this, 1001, "1", wxPoint(200, 50), wxSize(50, 50));
	NumButton2 = new wxButton(this, 1002, "2", wxPoint(150, 50), wxSize(50, 50));
	NumButton3 = new wxButton(this, 1003, "3", wxPoint(100, 50), wxSize(50, 50));
	NumButton4 = new wxButton(this, 1004, "4", wxPoint(50, 50), wxSize(50, 50));
	NumButton5 = new wxButton(this, 1005, "5", wxPoint(0, 50), wxSize(50, 50));
	
	NumButton6 = new wxButton(this, 1006, "6", wxPoint(0, 150), wxSize(50, 50));
	NumButton7 = new wxButton(this, 1007, "7", wxPoint(50, 150), wxSize(50, 50));
	NumButton8 = new wxButton(this, 1008, "8", wxPoint(100, 150), wxSize(50, 50));
	NumButton9 = new wxButton(this, 1009, "9", wxPoint(150, 150), wxSize(50, 50));
	NumButton10 = new wxButton(this, 1010, "0", wxPoint(200, 150), wxSize(50, 50));
	WEW = new wxButton(this, 8672, "K\nE\nK\nW", wxPoint(250, 150), wxSize(20, 60));

	Plus = new wxButton(this, 1011, "+", wxPoint(270, 50), wxSize(50, 50));
	Minus = new wxButton(this, 1012, "-", wxPoint(320, 50), wxSize(50, 50));	
	Multi = new wxButton(this, 1013, "*", wxPoint(370, 50), wxSize(50, 50));	
	Divide = new wxButton(this, 1014, "/", wxPoint(420, 50), wxSize(50, 50));	
	Equals = new wxButton(this, 1015, "=", wxPoint(470, 50), wxSize(50, 50));

	C = new wxButton(this, 1016, "C", wxPoint(270, 150), wxSize(50, 50));
	Binary = new wxButton(this, 1017, "Binary", wxPoint(320, 150), wxSize(50, 50));
	Hexi = new wxButton(this, 1018, "Hexi", wxPoint(370, 150), wxSize(50, 50));
	Mod = new wxButton(this, 1019, "Mod[%]", wxPoint(420, 150), wxSize(50, 50));
	Dec = new wxButton(this, 1020, "Decimal", wxPoint(470, 150), wxSize(50, 50));



}	