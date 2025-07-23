

#ifndef PROJECTUNIT_CHATREGISTRY_H
#define PROJECTUNIT_CHATREGISTRY_H

#include <vector>
#include "Chat.h"

class ChatRegistry {
public:
    void addChat( const Chat& chat); // la classe chatRegistry non ha membro che richiede inizializzazione perche chat puo essere inizializzato automaticamente dal compilatore
    std::vector<Chat> getAllChats();

private:
    std::vector<Chat> chats_;
};

#endif  // PROJECTUNIT_CHATREGISTRY_H





