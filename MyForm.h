#pragma once
#include "MesClasses.h"



namespace Solv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private: Object con;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 524);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 144);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(295, 300);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Solv\'event";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(360, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 61);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Connexion";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(320, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(410, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 26);
			this->textBox1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(284, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 34);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(410, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 26);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 46);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(462, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 46);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 524);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Solv\'Event";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

public: Gerant^ gerant;

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	// Récupération des entrées utilisateur
	String^ email = textBox1->Text;
	String^ password = textBox2->Text;

	// Validation des entrées
	if (String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password)) {
		MessageBox::Show("Veuillez entrer votre email et votre mot de passe.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Tentative de connexion à la base de données
	try {
		// Configurez la connexion SQL ici
		String^ connString = "Data Source=MBANGUE\\SQLEXPRESS;Initial Catalog=Solvevent;Integrated Security=True";
		SqlConnection^ dbConn = gcnew SqlConnection(connString);
		dbConn->Open();

		// Préparation de la requête SQL
		String^ sqlQuery = "SELECT * FROM gerant WHERE email = @Email AND password = @Password";
		SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, dbConn);
		sqlCmd->Parameters->AddWithValue("@Email", email);
		sqlCmd->Parameters->AddWithValue("@Password", password);

		// Exécution de la requête
		SqlDataReader^ reader = sqlCmd->ExecuteReader();
		if (reader->Read()) {
			gerant = gcnew Gerant;
			gerant->nom = reader->GetString(1);
			gerant->adresse = reader->GetString(2);
			gerant->email = reader->GetString(3);

			// Informations correctes, fermeture de la fenêtre
			dbConn->Close();
			this->Hide();

		}
		else {
			// Informations incorrectes
			dbConn->Close();
			MessageBox::Show("Email ou mot de passe incorrect.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		// Gérer les exceptions ici
		MessageBox::Show("Une erreur est survenue lors de la connexion à la base de données : " + ex->Message, "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
