#pragma once
#include "wx/wx.h"
class ButtonFactory : public wxFrame
{
public:
	/*wxDECLARE_EVENT_TABLE();*/
public:
static wxButton* NumButton1(wxWindow* window);
static wxButton* NumButton2(wxWindow* window);
static wxButton* NumButton3(wxWindow* window);
static wxButton* NumButton4(wxWindow* window);
static wxButton* NumButton5(wxWindow* window);
static wxButton* WeW(wxWindow* window);
static wxButton* NumButton6(wxWindow* window);
static wxButton* NumButton7(wxWindow* window);
static wxButton* NumButton8(wxWindow* window);
static wxButton* NumButton9(wxWindow* window);
static wxButton* NumButton10(wxWindow* window);
static wxButton* WEW(wxWindow* window);
static wxButton* Plus(wxWindow* window);
static wxButton* Minus(wxWindow* window);
static wxButton* Multi(wxWindow* window);
static wxButton* Divide(wxWindow* window);
static wxButton* Equals(wxWindow* window);
static wxButton* C(wxWindow* window);
static wxButton* Binary(wxWindow* window);
static wxButton* Hexi(wxWindow* window);
static wxButton* Mod(wxWindow* window);
static wxButton* Dec(wxWindow* window);
};

