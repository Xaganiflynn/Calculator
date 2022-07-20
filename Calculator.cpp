#include "Calculator.h"
#include "ButtonFactory.h"
#include "Processor.h"
#include <string>

wxBEGIN_EVENT_TABLE(Calculator, wxFrame)
wxEND_EVENT_TABLE()



void Calculator::OnButtonClicked(wxCommandEvent& _evt)
{
	int axe = _evt.GetId();
	Processor* process = Processor::GetInstance();

	switch (axe)
	{
	case 1001:
		textBox->AppendText("1");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 1;
		}
		else
		{
			n2 =  (n2 * 10) + 1;
		}
		break;
	case 1002:
		textBox->AppendText("2");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 2;
		}
		else
		{
			n2 = (n2 * 10) + 2;
		}
		break;
	case 1003:
		textBox->AppendText("3");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 3;
		}
		else
		{
			n2 = (n2 * 10) + 3;
		}
		break;
	case 1004:
		textBox->AppendText("4");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 4;
		}
		else
		{
			n2 = (n2 * 10) + 4;
		}
		break;
	case 1005:
		textBox->AppendText("5");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 5;
		}
		else
		{
			n2 = (n2 * 10) + 5;
		}
		break;
	case 1006:
		textBox->AppendText("6");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 6;
		}
		else
		{
			n2 = (n2 * 10) + 6;
		}
		break;
	case 1007:
		textBox->AppendText("7");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 7;
		}
		else
		{
			n2 = (n2 * 10) + 7;
		}
		break;
	case 1008:
		textBox->AppendText("8");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 8;
		}
		else
		{
			n2 = (n2 * 10) + 8;
		}
		break;
	case 1009:
		textBox->AppendText("9");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 9;
		}
		else
		{
			n2 = (n2 * 10) + 9;
		}
		break;
	case 1010:
		textBox->AppendText("0");
		if (operand == ' ')
		{
			n1 = (n1 * 10) + 0;
		}
		else
		{
			n2 = (n2 * 10) + 0;
		}
		break;
	case 1011: // Addition
		helper;
		textBox->AppendText("+");
		operand = '+';
		break;
	case 1012: // subtraction
		helper;
		textBox->AppendText("-");
		operand = '-';
		break;
	case 1013: // multiplication
		helper;
		textBox->AppendText("*");
		operand = '*';
		break;
	case 1014: // division
		helper;
		textBox->AppendText("/");
		operand = '/';
		break;
	case 1015: // equals sign. 
		textBox->Clear();
		ActResult= process->AllPurpose(n1, n2, operand);
		textBox->AppendText(to_string(ActResult));
		operand = ' ';
		n1 = ActResult;
		n2 = 0;
		helper = true;
		break;
	case 1016: // C - clear
		helper;
		textBox->Clear();
		operand = ' ';
		n1 = 0;
		n2 = 0;
		break;
	case 1017: // Binary
		helper;
		resulta = process->ToBinaryString(ActResult);
		textBox->AppendText(resulta);
		break;
	case 1018: // hexidecimal
		helper;
		resulta = process->ToHexaString(ActResult);
		textBox->AppendText(resulta); 
		break;
	case 1019: // Moddulos
		helper;
		textBox->AppendText("%");
		operand = '%';
		break;
	case 1020: // Decimal
		helper;
		textBox->AppendText(".");
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
	func[19] = Dec;
	for (size_t i = 0; i < 20; i++)
	{
		func[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Calculator::OnButtonClicked, this);
	}

}