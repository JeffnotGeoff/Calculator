#pragma once
#include "wx/wx.h"

class ButtonFactory
{
	virtual wxButton CreateButtons(int modifier);
};

