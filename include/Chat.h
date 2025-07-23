

#ifndef PROJECTUNIT_CHAT_H
#define PROJECTUNIT_CHAT_H

#include <vector>
#include "User.h"
#include "Message.h"

class Chat {
public:
    Chat( const User& user1,const User& user2);
    void addMessage( const Message& message);
    std::vector<Message> getMessages()const;

private:
    User user1_;
    User user2_;
    std::vector<Message> messages_;
};


#endif //PROJECTUNIT_CHAT_H
