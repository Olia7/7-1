#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
  Application::SetCompatibleTextRenderingDefault(false);
  Application::EnableVisualStyles();
  lab7_1::MyForm form;
  Application::Run(% form);
}