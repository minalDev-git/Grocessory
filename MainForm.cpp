#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
int main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Grocessory::MainForm form;
	Application::Run(% form);
}
