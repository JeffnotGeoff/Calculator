#include "ButtonFactory.h"
#include "Window.h"
#include "App.h"

ButtonFactory::ButtonFactory() {

}

wxButton CreateAButton(int modifier) {
	creationButton = new wxButton(App.window, 10000 + modifier);
}