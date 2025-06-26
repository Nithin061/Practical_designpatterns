#include<iostream>
#include "FindDiag.h"
#include "MainWindow.h"

int main()
{
	MainWindow win{};
	FindDiag dlg(&win);

	dlg.SetSearchText("breeze");
	dlg.Find();
}
