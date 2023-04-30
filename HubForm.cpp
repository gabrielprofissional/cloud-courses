#include "HubForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cloud::HubForm form;
	Application::Run(% form);
}