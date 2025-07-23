#include <gtest/gtest.h>
#include "Message.h"

TEST (MessageTest,creazioneMessaggio){// test per la creazione del messaggio
    User sender("Mittente","1234567890","mittente@example.com");
    User receiver("Destinatario","074652972542","destinatario@example.com");
    std::string text = "Ciao ,come ti chiami ? tutto bene";
    Message message(sender,receiver,text)  ;

    EXPECT_EQ(message.getSender().getName(),sender.getName());
    EXPECT_EQ(message.getReceiver().getName(),receiver.getName());
    EXPECT_EQ(message.getTest(),text);
}


TEST(MessageTest ,getSender){ //verifica se getSender() restituisce corettamente l'oggetto User dell'utente
    User sender("Mittente","1234567890","mittente@example.com");
    User receiver("Destinatorio","074652972542","destinatario@example.com");
    std::string text = "Ciao,come ti chiami ? tutto bene";
    Message message(sender,receiver,text);
    EXPECT_EQ(message.getSender().getName(),sender.getName());
}

TEST(MessageTest, getReceiver) {
    User sender("Mittente", "1234567890",  "mittente@example.com");
    User receiver("Destinatario", "074652972542",  "destinatario@example.com");
    std::string text = "Ciao,come ti chiami ? tutto bene";
    Message message(sender, receiver, text);
    EXPECT_EQ(message.getReceiver().getName(), receiver.getName());
}


TEST(MessageTest, getTest) {
    User sender("Mittente", "1234567890",  "mittente@example.com");
    User receiver("Destinatario", "0987654321",  "destinatario@example.com");
    std::string text = "Ciao,come ti chiami ? tutto bene" ;
    Message message(sender, receiver, text);
    EXPECT_EQ(message.getTest(), text);
}

TEST(MessageTest, messaggioConMittenteEDestinatarioUguali) {
    User user("Utente", "1234567890",  "utente@example.com");
    std::string text = "Ciao,come ti chiami ? tutto bene" ;
    Message message(user, user, text);
    EXPECT_EQ(message.getSender().getName(), user.getName());
    EXPECT_EQ(message.getReceiver().getName(), user.getName());
}

TEST(MessageTest, messaggioConTestoVuoto) {
    User sender("Mittente", "1234567890",  "mittente@example.com");
    User receiver("Destinatario", "0987654321", "destinatario@example.com");
    std::string text = "";
    Message message(sender, receiver, text);
    EXPECT_EQ(message.getTest(), text);
}
