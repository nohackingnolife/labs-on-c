//Palamarchuk_Lr9_TxPrZS
#include "TaskFirst.h"
#include "TaskThree.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PalamarchukLr9TxPrZS::TaskFirst first;
	Application::Run(% first);

	PalamarchukLr9TxPrZS::TaskThree third;
	Application::Run(% third);
}
