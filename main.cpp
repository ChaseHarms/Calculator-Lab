#include "main.h"
#include "ButtonFactory.h"
#include "Processor.h"
#include "BaseCommand.h"

wxBEGIN_EVENT_TABLE(main, wxFrame)
EVT_BUTTON(wxID_ANY, main::OnButtonClick)
wxEND_EVENT_TABLE()

int num1, num2;
	wxString _num1 = "";
	wxString _num2 = "";
	bool symbol = false;
	wxString sym = "";

main::main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(217, 450)) {
	/*btn = new wxButton(this, 0, "0", wxPoint(50, 350), wxSize(50, 50));
	btn = new wxButton(this, 1, "1", wxPoint(0, 300), wxSize(50, 50));
	btn = new wxButton(this, 2, "2", wxPoint(50, 300), wxSize(50, 50));
	btn = new wxButton(this, 3, "3", wxPoint(100, 300), wxSize(50, 50));
	btn = new wxButton(this, 4, "4", wxPoint(0, 250), wxSize(50, 50));
	btn = new wxButton(this, 5, "5", wxPoint(50, 250), wxSize(50, 50));
	btn = new wxButton(this, 6, "6", wxPoint(100, 250), wxSize(50, 50));
	btn = new wxButton(this, 7, "7", wxPoint(0, 200), wxSize(50, 50));
	btn = new wxButton(this, 8, "8", wxPoint(50, 200), wxSize(50, 50));
	btn = new wxButton(this, 9, "9", wxPoint(100, 200), wxSize(50, 50));
	btn = new wxButton(this, 10, "C", wxPoint(0, 350), wxSize(50, 50));
	btn = new wxButton(this, 11, "+/-", wxPoint(100, 350), wxSize(50, 50));
	btn = new wxButton(this, 12, "bin", wxPoint(0, 150), wxSize(50, 50));
	btn = new wxButton(this, 13, "hex", wxPoint(50, 150), wxSize(50, 50));
	btn = new wxButton(this, 14, "dec", wxPoint(100, 150), wxSize(50, 50));
	btn = new wxButton(this, 15, "=", wxPoint(150, 350), wxSize(50, 50));
	btn = new wxButton(this, 16, "+", wxPoint(150, 300), wxSize(50, 50));
	btn = new wxButton(this, 17, "-", wxPoint(150, 250), wxSize(50, 50));
	btn = new wxButton(this, 18, "x", wxPoint(150, 200), wxSize(50, 50));
	btn = new wxButton(this, 19, "/", wxPoint(150, 150), wxSize(50, 50));
	btn = new wxButton(this, 20, "mod", wxPoint(0, 100), wxSize(50, 50));*/
	txt = new wxTextCtrl(this, 21, "", wxPoint(0, 0), wxSize(200, 75));
	
	ButtonFactory factory = ButtonFactory(this);
	btn = factory.CreateAddButton("0", 50, 350);
	btn = factory.CreateAddButton("1", 0, 300);
	btn = factory.CreateAddButton("2", 50, 300);
	btn = factory.CreateAddButton("3", 100, 300);
	btn = factory.CreateAddButton("4", 0, 250);
	btn = factory.CreateAddButton("5", 50, 250);
	btn = factory.CreateAddButton("6", 100, 250);
	btn = factory.CreateAddButton("7", 0, 200);
	btn = factory.CreateAddButton("8", 50, 200);
	btn = factory.CreateAddButton("9", 100, 200);
	btn = factory.CreateAddButton("C", 0, 350);
	btn = factory.CreateAddButton("+/-", 100, 350);
	btn = factory.CreateAddButton("bin", 0, 150);
	btn = factory.CreateAddButton("hex", 50, 150);
	btn = factory.CreateAddButton("dec", 100, 150);
	btn = factory.CreateAddButton("=", 150, 350);
	btn = factory.CreateAddButton("+", 150, 300);
	btn = factory.CreateAddButton("-", 150, 250);
	btn = factory.CreateAddButton("x", 150, 200);
	btn = factory.CreateAddButton("/", 150, 150);
	btn = factory.CreateAddButton("mod", 0, 100);
}
main::~main() {

}

void main::OnButtonClick(wxCommandEvent& evt) {
	processor* processor = processor::GetInstance();
	int id = evt.GetId();
	switch (id)
	{
	case 0: {
		txt->AppendText("0");
		//in all the numbers
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 1: {
		txt->AppendText("1");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 2: {
		txt->AppendText("2");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 3: {
		txt->AppendText("3");
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 4: {
		txt->AppendText("4");
		if (symbol == true){
			if (num2 != 0){
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else{
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	case 5: {
		txt->AppendText("5");
		if (symbol == true) {
			if (num2 != 0) {
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 6: {
		txt->AppendText("6");
		if (symbol == true) {
			if (num2 != 0) {
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 7: {
		txt->AppendText("7");
		if (symbol == true) {
			if (num2 != 0) {
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 8: {
		txt->AppendText("8");
		if (symbol == true) {
			if (num2 != 0) {
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 9: {
		txt->AppendText("9");
		if (symbol == true) {
			if (num2 != 0) {
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else {
				_num2 += std::to_string(evt.GetId());
			}
		}
		break;
	}
	case 10: {
		txt->Clear();
		break;
	}
	case 11: { // basically does nothing
		txt->AppendText("-");
		break;
	}
	case 12: { // Binary
		processor->SetBaseNum(wxAtoi(txt->GetValue()));
		txt->Clear();
		txt->AppendText(processor->GetBinary());
		break;
	}
	case 13: { // hexadecimal
		processor->SetBaseNum(wxAtoi(txt->GetValue()));
		txt->Clear();
		txt->AppendText(processor->GetHexadecimal());

		break;
	}
	case 14: { // decimal
		processor->SetBaseNum(wxAtoi(txt->GetValue()));
		txt->Clear();
		txt->AppendText(processor->GetDecimal());
		
		break;
	}
	case 15: {
		symbol = false;
		if (sym == "+")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(processor->Add(num1, num2));
		}
		else if (sym == "-")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(processor->Sub(num1, num2));
		}
		else if (sym == "/")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(processor->Div(num1, num2));
		}
		else if (sym == "*")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(processor->Mult(num1, num2));
		}
		_num2.Clear();
		_num1.Clear();
		num1 = 0;
		num2 = 0;
		break;
	}
	case 16: {
		_num1 = txt->GetValue();
		txt->AppendText("+");
		sym = "+";
		symbol = true;
		break;
	}
	case 17: {
		_num1 = txt->GetValue();
		txt->AppendText("-");
		sym = "-";
		symbol = true;
		break;
	}
	case 18: {
		_num1 = txt->GetValue();
		txt->AppendText("*");
		sym = "*";
		symbol = true;
		break;
	}
	case 19: {
		_num1 = txt->GetValue();
		txt->AppendText("/");
		sym = "/";
		symbol = true;
		break;
	}
	case 20: {
		txt->AppendText("mod");
		break;
	}
	}
	}
}


//wxATOI grabs string and converts to int

/*
Ship.h (Command Example)

#pragma once
class Ship
{
private:
	int _heading;
	int _posX;
	int _posY;
	int _velocity;
	void PrintMessage(std::string message) {std::cout << message << std::endl;}
public:
	void SetHeading(int heading) {_heading = heading; PrintMessage("Heading set to " + std::to_string(heading));}
	void SetPosition(int x, int y) {_posX = x; _posY = y; PrintMessage("Position set to " + std::to_string(x) + ", " + std::to_string(y));}
	void SetVelocity(int velocity) {_velocity = velocity; PrintMessage("Velocity set to " + std::to_string(velocity));}
}
*/


/*
CommandExample.cpp

#include <iostream>
#include <string>
#include "Ship.h"
#include "BaseCommand"
#include "All the other command headers"

int getIntPrompt(std::string prompt);
void showMessage(std::string text);

int main(){
	Ship ship;
	std::vector<BaseCommand*> commands;

	while (true){
		showMessage("1. Set Heading");
		showMessage("2. Set Position");
		showMessage("3. Set Velocity");
		showMessage("4. Execute");
		int option = getIntPrompt("Enter selection");
		switch (option){
			case 1:{
				int heading = getIntPrompt("Enter Heading");
				//ship.SetHeading(heading);

				HeadingCommand heading(&ship, heading);
				commands.push_back((BaseCommand*)&heading);
				break;
			}
			case 2:{
				int x = getIntPrompt("Enter X position");
				int y = getIntPrompt("Enter Y position);
				//ship.SetPosition(x, y);

				PositionCommand position(&ship, x, y);
				commands.push_back(&heading);
				break;
			}
			case 3:{
				int velocity = getIntPrompt("Enter Velocity");
				//ship.SetVelocity(velocity);

				VelocityCommand velocity(&ship, velocity);
				commands.push_back(&velocity);
				break;
			}
			case 4:{
				for(int i = 0; i < commands.size(); i++) {
					commands[i]->Execute();
				}
				commands.clear();
			}
			default:
				break;
			}
		}
	}
}

void showMessage(std::string text) {
	std::cout << tet << std::endl;
}

int getIntPrompt(std::string prompt){
	int results = -1;
	while(true){
		std::cout <<prompt << std::endl;
		if(std::cin >> results) {
			std::cin.ignore(INT_MAX, '\n');
			break;
		}
		std::cin.clrea();
		std::cin.ignore(INT_MAX, ' \n');
	}
	return results;
}
*/


/*
BaseCommand.h

#pragma once

class BaseCommand{
public:
	virtual void Execute() = 0;
}
*/


/*
HeadingCommand.h

#pragma once
#include "BaseCommand.h"
#include "Ship.h"

class HeadingCommand : public BaseCommand{
private:
	Ship* _ship = nullptr;
	int _heading = 0;
public:
	HeadingCommand(Ship* ship, int heading) {_ship = ship;}
	void Execute() {_ship->SetHeading(_heading);}
}
*/


/*
VelocityCommand.h

#pragma once
#include "BaseCommand.h"
#include "Ship.h"

class VelocityCommand : public BaseCommand{
private:
	Ship* _ship = nullptr;
	int _velocity = 0;
public:
	velocityCommand(Ship* ship, int velocity) {_ship = ship;}
	void Execute() {_ship->SetVelocity(_velocity);}
}
*/


/*
PositionCommand.h

#pragma once
#include "BaseCommand.h"
#include "Ship.h"

class PositionCommand : public BaseCommand{
private:
	Ship* _ship = nullptr;
	int _posX = 0;
	int _posY = 0;
public:
	HeadingCommand(Ship* ship, int x, int y) {_ship = ship; _posX = x; _posY = y;}
	void Execute() {_ship->SetPosition(_posX, _posY);}
}
*/