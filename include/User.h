

#ifndef PROJECTUNIT_USER_H
#define PROJECTUNIT_USER_H

#include<string>
class User{

public:
    User(const std::string& name, const std::string& number ,const std::string& email);

    /* Definisco funzioni per restituire i diversi attribuiti*/
    std::string getName()const;// const per indicare che non modifica lo stato dell'oggetto
    std::string getNumber()const;

    std:: string getEmail() const;

    // funzioni per impostare i valori dell'attributi
    void setName(const std::string& name);
    void setNumber( const std::string& number);

    void setEmail( const std::string& email);

private:
    std::string name_;
    std::string number_;

    std::string email_;

};
#endif //PROJECTUNIT_USER_H
