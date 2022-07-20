#include "ButtonFactory.h"
//#include "pch.h"


wxButton* ButtonFactory::NumButton1(wxWindow* window)
{
    return new wxButton(window, 1001, "1", wxPoint(200, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::NumButton2(wxWindow* window)
{
    return  new wxButton(window, 1002, "2", wxPoint(150, 50), wxSize(50, 50));;
}

wxButton* ButtonFactory::NumButton3(wxWindow* window)
{
    return new wxButton(window, 1003, "3", wxPoint(100, 50), wxSize(50, 50));;
}

wxButton* ButtonFactory::NumButton4(wxWindow* window)
{
    return new wxButton(window, 1004, "4", wxPoint(50, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::NumButton5(wxWindow* window)
{
    return new wxButton(window, 1005, "5", wxPoint(0, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::WeW(wxWindow* window)
{
    return new wxButton(window, 3121, "W\nk\ne\nK", wxPoint(250, 40), wxSize(20, 60));
}

wxButton* ButtonFactory::NumButton6(wxWindow* window)
{
    return new wxButton(window, 1006, "6", wxPoint(0, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::NumButton7(wxWindow* window)
{
    return new wxButton(window, 1007, "7", wxPoint(50, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::NumButton8(wxWindow* window)
{
    return new wxButton(window, 1008, "8", wxPoint(100, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::NumButton9(wxWindow* window)
{
    return new wxButton(window, 1009, "9", wxPoint(150, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::NumButton10(wxWindow* window)
{
    return new wxButton(window, 1010, "0", wxPoint(200, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::WEW(wxWindow* window)
{
    return new wxButton(window, 8672, "K\nE\nK\nW", wxPoint(250, 150), wxSize(20, 60));
}

wxButton* ButtonFactory::Plus(wxWindow* window)
{
    return new wxButton(window, 1011, "+", wxPoint(270, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::Minus(wxWindow* window)
{
    return new wxButton(window, 1012, "-", wxPoint(320, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::Multi(wxWindow* window)
{
    return new wxButton(window, 1013, "*", wxPoint(370, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::Divide(wxWindow* window)
{
    return new wxButton(window, 1014, "/", wxPoint(420, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::Equals(wxWindow* window)
{
    return new wxButton(window, 1015, "=", wxPoint(470, 50), wxSize(50, 50));
}

wxButton* ButtonFactory::C(wxWindow* window)
{
    return new wxButton(window, 1016, "C", wxPoint(270, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::Binary(wxWindow* window)
{
    return new wxButton(window, 1017, "Binary", wxPoint(320, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::Hexi(wxWindow* window)
{
    return new wxButton(window, 1018, "Hexi", wxPoint(370, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::Mod(wxWindow* window)
{
    return new wxButton(window, 1019, "Mod[%]", wxPoint(420, 150), wxSize(50, 50));
}

wxButton* ButtonFactory::Dec(wxWindow* window)
{
    return new wxButton(window, 1020, "Decimal", wxPoint(470, 150), wxSize(50, 50));
}
