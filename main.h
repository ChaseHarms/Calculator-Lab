#pragma once
#include"wx/wx.h"
class main : public wxFrame
{
public:
	main();
	~main();

	wxButton* btn = nullptr;
	wxTextCtrl* txt = nullptr;

	wxDECLARE_EVENT_TABLE();
};

