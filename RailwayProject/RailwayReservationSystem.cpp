#include "RailwayReservationSystem.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RailwayProject::RailwayReservationSystem form;
	Application::Run(%form);
}