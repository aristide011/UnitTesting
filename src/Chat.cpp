
#include "../include/Chat.h"

Chat::Chat(const User& user1,  const User& user2) : user1_(user1), user2_(user2) {}

void Chat::addMessage( const Message& message) {
    messages_.push_back(message);
}

std::vector<Message> Chat::getMessages()const {
    return messages_;
}



