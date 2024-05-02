#include "pch.h"
#include "MyForm.h"
#include "MesClasses.h"
#include "Accueil.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Solv::MyForm form;
	form.ShowDialog();
	Gerant^ gerant = form.gerant;
	Solv::Accueil accueil(gerant);


	if (true) {
		accueil.ShowDialog();
		MessageBox::Show("Sucess " + gerant->nom);
	}
	else {
		MessageBox::Show("Echec ");

	}

}

