//Palamarchuk_Lr12_TxPrZS
#include "FirstForm.h"
#include "SecondForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PalamarchukLr12TxPrZS::FirstForm firstForm;
	Application::Run(% firstForm);

	PalamarchukLr12TxPrZS::SecondForm secondForm;
	Application::Run(% secondForm);
}
