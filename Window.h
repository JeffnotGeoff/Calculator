#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{

public:
	Window(); //constructor
	~Window(); //deconstructor

	int buttonsWidth = 11; //Amount of Buttons in a Row
	int buttonsHeight = 2; //Amount of Buttons in a Column


	wxButton** useButton;



};

