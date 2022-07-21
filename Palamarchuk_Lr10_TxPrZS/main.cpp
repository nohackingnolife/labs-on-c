//Palamarchuk_Lr10_TxPrZS
#include "FirstForm.h"
#include "SecondForm.h"
#include "ThirdForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PalamarchukLr10TxPrZS::FirstForm first_form;
	Application::Run(% first_form);

	PalamarchukLr10TxPrZS::SecondForm second_form;
	Application::Run(% second_form);

	PalamarchukLr10TxPrZS::ThirdForm third_form;
	Application::Run(% third_form);
}
