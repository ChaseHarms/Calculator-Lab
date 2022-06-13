#pragma once
#include "wx/wx.h"
#include <string>
#include "main.h"

class ButtonFactory
{
private:
	wxButton* btn = nullptr; // buttons themselves
	int nButtons = 0; //this will be the buttons ID number

	main* frame = nullptr;
public:
	ButtonFactory(main* etc);
	~ButtonFactory();

	wxButton* CreateAddButton(std::string sym,int xPos, int yPos); // makes buttons taking a string as the parameter
};

