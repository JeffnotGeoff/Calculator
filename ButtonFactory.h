#pragma once
#include "wx/wx.h"

class ButtonFactory
{

public:

	wxButton creationButton;

	virtual wxButton CreateAButton(int modifier);
};

