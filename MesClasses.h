#pragma once
using namespace System;

// Gestionnaire.h

#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include <string>
#include <vector>

public ref class Client {
public:
    int id;
    String^ nom;
    String^ prenom;
    DateTime dateNaissance;
    String^ genre;
    String^ contact;
    String^ adresse;
    String^ email;

public:
    Client(String^ nom1, String^ prenom1, String^ contact1, String^ adresse1, String^ email1) {
        id = 0;
        nom = nom1;
        prenom = prenom1;
        contact = contact1;
        adresse = adresse1;
        email = email1;

    
    };
    void afficherDetails() {  };

    // Autres m�thodes comme les getters et setters
};
public ref class Gerant {
public:
    int id;
    String^ nom;
    String^ contact;
    String^ adresse;
    String^ email;

    // Convertisseurs de std::string � System::String^ peuvent �tre n�cessaires
    void SetNom(std::string nomStd) {
        nom = gcnew System::String(nomStd.c_str());
    }
    String^ GetNom() {
        return nom;
    }

    // Autres m�thodes comme les getters et setters
};

class Reservation {
private:
    int id;
    int clientId;
    std::vector<int> equipementIds;
    int salleId;
    std::string dateDebut;
    std::string dateFin;
    std::string status;
public:
    Reservation(int id, int clientId, const std::vector<int>& equipementIds, int salleId, const std::string& dateDebut, const std::string& dateFin, const std::string& status);
    void validerReservation();
    void annulerReservation();
    // Autres m�thodes n�cessaires
};



class Paiement {
private:
    int id;
    float montant;
    std::string type; // Peut �tre "CarteBancaire", "Mobile", "Espece"
public:
    Paiement(int id, float montant, const std::string& type);
    virtual void effectuerPaiement() = 0; // M�thode purement virtuelle pour l'h�ritage
    // M�thodes de paiement sp�cifiques � chaque sous-classe
};

class PaiementCarteBancaire : public Paiement {
public:
    using Paiement::Paiement; // Utilisation du constructeur de la classe de base
    void effectuerPaiement() override;
};

class PaiementMobile : public Paiement {
public:
    using Paiement::Paiement;
    void effectuerPaiement() override;
};

class PaiementEspece : public Paiement {
public:
    using Paiement::Paiement;
    void effectuerPaiement() override;
};

class Service {
public:
    virtual bool verifierDisponibilite() const = 0;
    virtual void reserverService() = 0;
    virtual void libererService() = 0;
    // Destructeur virtuel n�cessaire si on a des m�thodes virtuelles
    virtual ~Service() {}
};

class Salle : public Service {
private:
    int id;
    int capacite;
    bool disponible;
public:
    Salle(int id, int capacite, bool disponible);
    bool verifierDisponibilite() const override;
    void reserverService() override;
    void libererService() override;
    // Autres m�thodes sp�cifiques aux salles
};

class Equipement : public Service {
private:
    int id;
    std::string nom;
    int quantiteDisponible;
public:
    Equipement(int id, const std::string& nom, int quantiteDisponible);
    bool verifierDisponibilite() const override;
    void reserverService() override;
    void libererService() override;
    // Autres m�thodes sp�cifiques aux �quipements
};




#endif // GESTIONNAIRE_H