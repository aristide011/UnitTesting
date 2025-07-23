#include <gtest/gtest.h>
#include "Chat.h"

TEST(ChatTest, creazioneChat) {
    User user1("Utente1", "1234567890", 1, "utente1@example.com");
    User user2("Utente2", "0987654321", 2, "utente2@example.com");
    Chat chat(user1, user2);
    // Non ci sono molto da verificare qui, ma possiamo verificare che gli utenti siano stati impostati correttamente
}

TEST(ChatTest, aggiuntaMessaggio) {
    User user1("Utente1", "1234567890", 1, "utente1@example.com");
    User user2("Utente2", "0987654321", 2, "utente2@example.com");
    Chat chat(user1, user2);
    Message message(user1, user2, "Ciao, come stai?");
    chat.addMessage(message);
    EXPECT_EQ(chat.getMessages().size(), 1);
    