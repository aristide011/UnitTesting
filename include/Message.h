

#ifndef PROJECTUNIT_MESSAGE_H
#define PROJECTUNIT_MESSAGE_H

#include <string>
#include "User.h"


class Message{
        public:
        Message( const User& Sender,  const User& Receiver,  const std::string& test);
        User getSender()const;
        User getReceiver()const;
        std::string getTest()const;

        private:
        User sender_;
        User receiver_;
        std::string test_;
};



#endif //PROJECTUNIT_MESSAGE_H
