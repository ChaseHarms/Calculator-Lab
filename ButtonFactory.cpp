#include "ButtonFactory.h"
#include "wx/wx.h"

ButtonFactory::ButtonFactory(main* etc) {
	frame = etc;
}
ButtonFactory::~ButtonFactory() {

}
wxButton* ButtonFactory::CreateAddButton(std::string sym, int xPos, int yPos) {
	btn = new wxButton(frame, nButtons, sym, wxPoint(xPos, yPos), wxSize(50, 50));
	nButtons++;
	return btn;
}