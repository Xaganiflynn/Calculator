#include "Calculator.h"
#include "ButtonFactory.h"
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

	WeW = ButtonFactory::WeW(this);
	NumButton1 = ButtonFactory::NumButton1(this);
	NumButton2 = ButtonFactory::NumButton2(this);
	NumButton3 = ButtonFactory::NumButton3(this);
	NumButton4 = ButtonFactory::NumButton4(this);
	NumButton5 = ButtonFactory::NumButton5(this);
	NumButton6 = ButtonFactory::NumButton6(this);
	NumButton7 = ButtonFactory::NumButton7(this);
	NumButton8 = ButtonFactory::NumButton8(this);
	NumButton9 = ButtonFactory::NumButton9(this);
	NumButton10 = ButtonFactory::NumButton10(this);
	WEW = ButtonFactory::WEW(this);

	Plus = ButtonFactory::Plus(this);
	Minus = ButtonFactory::Minus(this);
	Multi = ButtonFactory::Multi(this);
	Divide = ButtonFactory::Divide(this);
	Equals = ButtonFactory::Equals(this);

	C = ButtonFactory::C(this);
	Binary = ButtonFactory::Binary(this);
	Hexi = ButtonFactory::Hexi(this);
	Mod = ButtonFactory::Mod(this);
	Dec = ButtonFactory::Dec(this);

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

	func[19] = ButtonFactory::Dec(this);
	for (size_t i = 0; i < 20; i++)
	{
		func[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Calculator::OnButtonClicked, this);
	}

}