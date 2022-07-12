#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Bootleg Calculator", wxPoint(200, 200), wxSize(650, 650)) {

	wxGridSizer* grid = new wxGridSizer(buttonsWidth, buttonsHeight, 0, 0); //Setup Grid Sizer

	calcText = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 0), wxSize(100, 20));
	grid->Add(calcText, 1, wxEXPAND | wxALL);


	for (int x = 0; x < buttonsWidth; x++) {
		for (int y = 0; y < buttonsHeight; y++) {
			useButton[y * buttonsWidth + x] = new wxButton(this, 10000 + (y * buttonsWidth + x)); // Create a button

			useButton[y * buttonsWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Window::OnButtonClicked, this);


			grid->Add(useButton[y * buttonsWidth + x], 1, wxEXPAND | wxALL);
		}
	}

	this->SetSizer(grid);
	grid->Layout();
}

Window::~Window() {
	delete calcText;

}

void Window::OnButtonClicked(wxCommandEvent& evt) {


	evt.Skip();
}
