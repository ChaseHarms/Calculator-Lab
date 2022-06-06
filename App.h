#pragma once
#include "wx/wx.h"
#include "main.h"

class App : public wxApp
{
public:
	App();
	~App();
private:
	main* frame = nullptr;
public:
	virtual bool OnInit();
};

