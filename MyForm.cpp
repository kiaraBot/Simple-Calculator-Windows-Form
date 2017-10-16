// Alix Field			afield@cnm.edu			FieldP5_CPP

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FieldP5_CPP::MyForm form;
	Application::Run(%form);

}
