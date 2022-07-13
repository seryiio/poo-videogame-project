#include "MyForm.h"  
#include "LibreriaGeneral.h"
using namespace System;
using namespace System::Windows::Forms;  [STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);  Application::Run(gcnew
		TF_201916220_201816393::MyForm()); 
}
