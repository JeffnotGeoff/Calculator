#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Bootleg Calculator", wxPoint(200, 200), wxSize(650, 650)) {

	useButton = new wxButton * [buttonsWidth * buttonsHeight]; //Setup Button Array

	wxGridSizer* grid = new wxGridSizer(buttonsHeight, buttonsWidth, 0, 0); //Setup Grid Sizer


	calcText = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 0), wxSize(400, 20));

	grid->Add(calcText, 11, wxEXPAND | wxALL);

	//for(int i = 0; i < 10; i++)
		//grid->AddSpacer(1);

	for (int y = 0; y < buttonsHeight; y++) {
		for (int x = 0; x < buttonsWidth; x++) {
			useButton[y * buttonsWidth + x] = new wxButton(this, 10000 + (y * buttonsWidth + x)); // Create a button

			//useButton[y * buttonsWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Window::OnButtonClicked, this);


			grid->Add(useButton[y*buttonsWidth+x], 1, wxEXPAND | wxALL);
		}
	}

	this->SetSizer(grid);
	
	grid->Layout();
}

Window::~Window() {
	delete calcText;
	delete[] useButton;
}

void Window::OnButtonClicked(wxCommandEvent& evt) {


	evt.Skip();
}
