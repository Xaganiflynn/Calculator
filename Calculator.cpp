#include "Calculator.h"
wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
wxEND_EVENT_TABLE()

void Calculator::OnButtonClicked(wxCommandEvent& _evt)
{
	int axe = _evt.GetId();
	switch (axe)
	{
	case 1001:
		textBox->AppendText("1");
		break;
	case 1002:
		textBox->AppendText("2");
		break;
	case 1003:
		textBox->AppendText("3");
		break;
	case 1004:
		textBox->AppendText("4");
		break;
	case 1005:
		textBox->AppendText("5");
		break;
	case 1006:
		textBox->AppendText("6");
		break;
	case 1007:
		textBox->AppendText("7");
		break;
	case 1008:
		textBox->AppendText("8");
		break;
	case 1009:
		textBox->AppendText("9");
		break;
	case 1010:
		textBox->AppendText("10");
		break;
	case 1011:
		textBox->AppendText("+");
		break;
	case 1012:
		textBox->AppendText("-");
		break;
	case 1013:
		textBox->AppendText("*");
		break;
	case 1014:
		textBox->AppendText("/");
		break;
	case 1015: //this is the equals sign. might get rid of later for functions
		textBox->AppendText("=");
		break;
	case 1016: //this is clear
		textBox->AppendText("C.. ocean Man");
		break;
	case 1017:
		textBox->AppendText("you're now BI");
		break;
	case 1018:
		textBox->AppendText("Hex.. or Polymorph");
		break;
	case 1019:
		textBox->AppendText("Mod..ed minecraft");
		break;
	case 1020:
		textBox->AppendText("Dec..ember");
		break;
	default:
		textBox->Clear();
		break;

	}
}

Calculator::Calculator() :wxFrame(nullptr, wxID_ANY, "Long KEKulator", wxPoint(0, 100), wxSize(540, 300))
{
	func = new wxButton * [20];
	textBox = new wxTextCtrl(this, 1000, "", wxPoint(0, 100), wxSize(521, 50));

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

	func[0] = NumButton1;
	func[1] = NumButton2;
	func[2] = NumButton3;
	func[3] = NumButton4;
	func[4] = NumButton5;
	func[5] = NumButton6;
	func[6] = NumButton7;
	func[7] = NumButton8;
	func[8] = NumButton9;
	func[9] = NumButton10;
	func[10] = Plus;
	func[11] = Minus;
	func[12] = Multi;
	func[13] = Divide;
	func[14] = Equals;
	func[15] = C;
	func[16] = Binary;
	func[17] = Hexi;
	func[18] = Mod;
	func[19] = Dec;
	for (size_t i = 0; i < 20; i++)
	{
		func[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Calculator::OnButtonClicked, this);
	}

}