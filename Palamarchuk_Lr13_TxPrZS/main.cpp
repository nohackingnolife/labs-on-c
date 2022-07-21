//Palamarchuk_Lr13_TxPrZS
#include "FirstForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PalamarchukLr13TxPrZS::FirstForm firstForm;
	Application::Run(% firstForm);
}
