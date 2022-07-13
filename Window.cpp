#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Bootleg Calculator", wxPoint(200, 200), wxSize(650, 650)) {

	useButton = new wxButton * [buttonsWidth * buttonsHeight]; //Setup Button Array

	wxGridSizer* grid = new wxGridSizer(buttonsHeight, buttonsWidth, 0, 0); //Setup Grid Sizer


	calcText = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 0), wxSize(400, 20));
	
	

	grid->Add(calcText, 11, wxEXPAND | wxALL);
	
	//grid->AddStretchSpacer(10);

	for(int i = 0; i < 10; i++)
		grid->AddSpacer(1);

	for (int y = 1; y < buttonsHeight; y++) {
		for (int x = 0; x < buttonsWidth; x++) {
			useButton[(y-1) * buttonsWidth + x] = new wxButton(this, 10000 + ((y-1) * buttonsWidth + x)); // Create a button

			//useButton[y * buttonsWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Window::OnButtonClicked, this);


			grid->Add(useButton[(y-1)*buttonsWidth+x], 1, wxEXPAND | wxALL);
		}
	}

	//Set Every Button Label Individually (Placeholder)

	useButton[0]->SetLabel("0");
	useButton[1]->SetLabel("1");
	useButton[2]->SetLabel("2");
	useButton[3]->SetLabel("3");
	useButton[4]->SetLabel("4");
	useButton[5]->SetLabel("5");
	useButton[6]->SetLabel("6");
	useButton[7]->SetLabel("7");
	useButton[8]->SetLabel("8");
	useButton[9]->SetLabel("9");
	useButton[10]->SetLabel(".");
	useButton[11]->SetLabel("+/-");
	useButton[12]->SetLabel("+");
	useButton[13]->SetLabel("-");
	useButton[14]->SetLabel("*");
	useButton[15]->SetLabel("/");
	useButton[16]->SetLabel("mod");
	useButton[17]->SetLabel("Binary");
	useButton[18]->SetLabel("Decimal");
	useButton[19]->SetLabel("Hex");
	useButton[20]->SetLabel("Clear");
	useButton[21]->SetLabel("=");

	//End Label Assignments


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

