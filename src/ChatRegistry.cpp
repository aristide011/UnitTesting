#include "../include/ChatRegistry.h"

void ChatRegistry::addChat( const Chat& chat) {
    chats_.push_back(chat);
}

std::vector<Chat> ChatRegistry::getAllChats() {
    return chats_;
}

