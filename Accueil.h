#pragma once
#include "MesClasses.h"
#include "AjoutClient.h"
#include "AjouterSalle.h"

namespace Solv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Accueil
	/// </summary>
	public ref class Accueil : public System::Windows::Forms::Form
	{
	private:
		Gerant^ gerant;
	public:
		Accueil(Gerant^ gerant1)
		{
			InitializeComponent();
			gerant = gerant1;

			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Accueil()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;







	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fichierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quitterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionEquipementToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionSalleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionReservationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionPaiementToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modifierUnClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nouvelleReservationToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ToolStripMenuItem^ ajouterUneSalleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sallesDisponibleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sallesIToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fichierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modifierUnClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionEquipementToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionSalleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterUneSalleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sallesDisponibleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sallesIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionReservationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouvelleReservationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionPaiementToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fichierToolStripMenuItem,
					this->gestionClientToolStripMenuItem, this->gestionEquipementToolStripMenuItem, this->gestionSalleToolStripMenuItem, this->gestionReservationToolStripMenuItem,
					this->gestionPaiementToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(957, 33);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fichierToolStripMenuItem
			// 
			this->fichierToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->quitterToolStripMenuItem });
			this->fichierToolStripMenuItem->Name = L"fichierToolStripMenuItem";
			this->fichierToolStripMenuItem->Size = System::Drawing::Size(78, 29);
			this->fichierToolStripMenuItem->Text = L"Fichier";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(169, 34);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			this->quitterToolStripMenuItem->Click += gcnew System::EventHandler(this, &Accueil::quitterToolStripMenuItem_Click);
			// 
			// gestionClientToolStripMenuItem
			// 
			this->gestionClientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ajouterUnClientToolStripMenuItem,
					this->modifierUnClientToolStripMenuItem
			});
			this->gestionClientToolStripMenuItem->Name = L"gestionClientToolStripMenuItem";
			this->gestionClientToolStripMenuItem->Size = System::Drawing::Size(137, 29);
			this->gestionClientToolStripMenuItem->Text = L"Gestion Client";
			// 
			// ajouterUnClientToolStripMenuItem
			// 
			this->ajouterUnClientToolStripMenuItem->Name = L"ajouterUnClientToolStripMenuItem";
			this->ajouterUnClientToolStripMenuItem->Size = System::Drawing::Size(255, 34);
			this->ajouterUnClientToolStripMenuItem->Text = L"Ajouter un Client";
			this->ajouterUnClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &Accueil::ajouterUnClientToolStripMenuItem_Click);
			// 
			// modifierUnClientToolStripMenuItem
			// 
			this->modifierUnClientToolStripMenuItem->Name = L"modifierUnClientToolStripMenuItem";
			this->modifierUnClientToolStripMenuItem->Size = System::Drawing::Size(255, 34);
			this->modifierUnClientToolStripMenuItem->Text = L"Modifier un Client";
			// 
			// gestionEquipementToolStripMenuItem
			// 
			this->gestionEquipementToolStripMenuItem->Name = L"gestionEquipementToolStripMenuItem";
			this->gestionEquipementToolStripMenuItem->Size = System::Drawing::Size(188, 29);
			this->gestionEquipementToolStripMenuItem->Text = L"Gestion equipement";
			// 
			// gestionSalleToolStripMenuItem
			// 
			this->gestionSalleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ajouterUneSalleToolStripMenuItem,
					this->sallesDisponibleToolStripMenuItem, this->sallesIToolStripMenuItem
			});
			this->gestionSalleToolStripMenuItem->Name = L"gestionSalleToolStripMenuItem";
			this->gestionSalleToolStripMenuItem->Size = System::Drawing::Size(129, 29);
			this->gestionSalleToolStripMenuItem->Text = L"Gestion Salle";
			// 
			// ajouterUneSalleToolStripMenuItem
			// 
			this->ajouterUneSalleToolStripMenuItem->Name = L"ajouterUneSalleToolStripMenuItem";
			this->ajouterUneSalleToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->ajouterUneSalleToolStripMenuItem->Text = L"Ajouter une salle";
			this->ajouterUneSalleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Accueil::ajouterUneSalleToolStripMenuItem_Click);
			// 
			// sallesDisponibleToolStripMenuItem
			// 
			this->sallesDisponibleToolStripMenuItem->Name = L"sallesDisponibleToolStripMenuItem";
			this->sallesDisponibleToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->sallesDisponibleToolStripMenuItem->Text = L"Salles disponible";
			// 
			// sallesIToolStripMenuItem
			// 
			this->sallesIToolStripMenuItem->Name = L"sallesIToolStripMenuItem";
			this->sallesIToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->sallesIToolStripMenuItem->Text = L"Salles indisponible";
			// 
			// gestionReservationToolStripMenuItem
			// 
			this->gestionReservationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nouvelleReservationToolStripMenuItem });
			this->gestionReservationToolStripMenuItem->Name = L"gestionReservationToolStripMenuItem";
			this->gestionReservationToolStripMenuItem->Size = System::Drawing::Size(180, 29);
			this->gestionReservationToolStripMenuItem->Text = L"Gestion reservation";
			// 
			// nouvelleReservationToolStripMenuItem
			// 
			this->nouvelleReservationToolStripMenuItem->Name = L"nouvelleReservationToolStripMenuItem";
			this->nouvelleReservationToolStripMenuItem->Size = System::Drawing::Size(275, 34);
			this->nouvelleReservationToolStripMenuItem->Text = L"Nouvelle reservation";
			// 
			// gestionPaiementToolStripMenuItem
			// 
			this->gestionPaiementToolStripMenuItem->Name = L"gestionPaiementToolStripMenuItem";
			this->gestionPaiementToolStripMenuItem->Size = System::Drawing::Size(165, 29);
			this->gestionPaiementToolStripMenuItem->Text = L"Gestion Paiement";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(44, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(743, 220);
			this->dataGridView1->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(26, 74);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(919, 297);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(365, 42);
			this->label1->TabIndex = 9;
			this->label1->Text = L"-Reservation en cours";
			// 
			// Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 598);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Accueil";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Accueil";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void quitterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ajouterUnClientToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Solv::AjoutClient ajc;
	ajc.ShowDialog();


}
private: System::Void ajouterUneSalleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Solv::AjouterSalle ajs;
	ajs.ShowDialog();

}
};
}
