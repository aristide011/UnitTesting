#include <gtest/gtest.h>
#include "Chat.h"

TEST(ChatTest, creazioneChat) {
    User user1("Utente1", "1234567890", "utente1@example.com");
    User user2("Utente2", "0987654321", "utente2@example.com");
    Chat chat(user1, user2);

}

TEST(ChatTest, aggiuntaMessaggio) { // per verificare se il messaggio è stato aggiunta correttamente
    User user1("Utente1", "1234567890", "utente1@example.com");
    User user2("Utente2", "0987654321", "utente2@example.com");
    Chat chat(user1, user2);
    Message message(user1, user2, "Ciao, come stai?tutto bene");
    chat.addMessage(message);
    EXPECT_EQ(chat.getMessages().size(), 1);// verifica che la dimensione della lista dei messaggi nella chat sia uguale a 1
    EXPECT_EQ(chat.getMessages()[0].getTest(), message.getTest());//verifica che il testo del primo messaggio nella lista dei messaggi sia uguale al testo del messaggio che è stato aggiunto alla chat.

}

TEST(ChatTest, recuperoMessaggi) {// verifica che il messaggio sia stato aggiunto correttamente alla chat
    User user1("Utente1", "1234567890",  "utente1@example.com");
    User user2("Utente2", "0987654321",  "utente2@example.com");
    Chat chat(user1, user2);
    Message message1(user1, user2, "Ciao, come stai?tutto bene?");
    Message message2(user2, user1, "Sto bene, grazie!");
    chat.addMessage(message1);
    chat.addMessage(message2);
    std::vector<Message> messages = chat.getMessages();
    EXPECT_EQ(messages.size(), 2);// verifica che la lunghezza dei messaggi sia uguale a 2
    EXPECT_EQ(messages[0].getTest(), message1.getTest());//verifica che il testo del primo messaggio nella lista dei messaggi sia uguale al testo del primo messaggio che è stato aggiunto alla chat
    EXPECT_EQ(messages[1].getTest(), message2.getTest());
}

TEST(ChatTest, aggiuntaPiuMessaggi) {
    User user1("Utente1", "1234567890",  "utente1@example.com");
    User user2("Utente2", "0987654321",  "utente2@example.com");
    Chat chat(user1, user2);
    for (int i = 0; i < 10; i++) {
        Message message(user1, user2, "Messaggio " + std::to_string(i));
        chat.addMessage(message);
    }
    EXPECT_EQ(chat.getMessages().size(), 10);
}
