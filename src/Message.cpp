

#include "../include/Message.h"
#include <string>

Message::Message( const User& sender,const User& receiver, const std::string& test)
        : sender_(sender), receiver_(receiver), test_(test) {}

User Message::getSender()const {
    return sender_;
}

User Message::getReceiver()const {  // User è il tipo di ritorno della funzione getRecipient
    return receiver_;
}

std::string Message::getTest()const {
    return test_;
}

