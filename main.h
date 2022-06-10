#pragma once
#include"wx/wx.h"
class main : public wxFrame
{
public:
	main();
	~main();
	
private:
	wxButton* btn = nullptr;
	wxTextCtrl* txt = nullptr;

public:
	wxDECLARE_EVENT_TABLE();

	void OnButtonClick(wxCommandEvent& evt);
};

