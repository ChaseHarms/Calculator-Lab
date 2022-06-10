#include "main.h"

wxBEGIN_EVENT_TABLE(main, wxFrame)
EVT_BUTTON(wxID_ANY, main::OnButtonClick)
wxEND_EVENT_TABLE()

main::main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(217, 450)) {
	btn = new wxButton(this, 0, "0", wxPoint(50, 350), wxSize(50, 50));
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
	btn = new wxButton(this, 20, "mod", wxPoint(0, 100), wxSize(50, 50));
	txt = new wxTextCtrl(this, 21, "", wxPoint(0, 0), wxSize(200, 75));
}
main::~main() {

}

void main::OnButtonClick(wxCommandEvent& evt) {
	int id = evt.GetId();
	switch (id)
	{
	case 0: {
		txt->AppendText("0");
		break;
	}
	case 1: {
		txt->AppendText("1");
		break;
	}
	case 2: {
		txt->AppendText("2");
		break;
	}
	case 3: {
		txt->AppendText("3");
		break;
	}
	case 4: {
		txt->AppendText("4");
		break;
	case 5: {
		txt->AppendText("5");
		break;
	}
	case 6: {
		txt->AppendText("6");
		break;
	}
	case 7: {
		txt->AppendText("7");
		break;
	}
	case 8: {
		txt->AppendText("8");
		break;
	}
	case 9: {
		txt->AppendText("9");
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
		txt->AppendText("=");
		break;
	}
	case 16: {
		txt->AppendText("+");
		break;
	}
	case 17: {
		txt->AppendText("-");
		break;
	}
	case 18: {
		txt->AppendText("*");
		break;
	}
	case 19: {
		txt->AppendText("/");
		break;
	}
	case 20: {
		txt->AppendText("mod");
		break;
	}
	}
	}
}