#include "main.h"
#include "ButtonFactory.h"
#include "Processor.h"

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
	case 11: {
		txt->AppendText("-");
		break;
	}
	case 12: {
		txt->AppendText("bin");
		
		break;
	}
	case 13: {
		txt->AppendText("hex");

		break;
	}
	case 14: {
		txt->AppendText("dec");
		
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