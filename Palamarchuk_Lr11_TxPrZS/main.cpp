//Palamarchuk_Lr11_TxPrZS
#include "FirstForm.h"
#include "SecondForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PalamarchukLr11TxPrZS::FirstForm firstForm;
	Application::Run(% firstForm);

	PalamarchukLr11TxPrZS::SecondForm secondForm;
	Application::Run(% secondForm);
}
