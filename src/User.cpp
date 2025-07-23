
#include "../include/User.h"    // per indicare il percorso relativo
#include<string>
#include<stdexcept>

User::User(const std::string& name,const std::string& number, const std::string& email):name_(name),number_(number),email_(email){} // per dire che il costruttore è un membro di User

std::string User::getName() const {
    return name_;
}

std::string User::getNumber() const {
    return number_;
}



std::string User::getEmail() const{
    return email_;
};

void User::setName( const std::string& name) {
    name_ = name;
}

void User::setNumber(const std::string& number) {
    number_ = number;
}



void User::setEmail( const std::string& email){
    if(email.empty() || email.find('@') == std::string::npos){ //verifica se lastringa è vuota o contiene il carattere @ se non viene trovato restituisce std::string::npos(posizione non valida)
        throw std::invalid_argument("L'email non è valida");
    }

    email_ =email;
}



