#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{

public:
	Window(); //constructor
	~Window(); //deconstructor

	int buttonsWidth = 11; //Amount of Buttons in a Row
	int buttonsHeight = 0; //Amount of Buttons in a Column

	wxTextCtrl* calcText = nullptr; //Text Box for Calculator Control

	wxButton** useButton; //Button Holder/Placer

	void OnButtonClicked(wxCommandEvent& evt);

};

