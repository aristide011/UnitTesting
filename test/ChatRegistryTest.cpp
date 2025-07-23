#include <gtest/gtest.h>
#include "ChatRegistry.h"

TEST(ChatRegistryTest, aggiuntaChat) { //test di aggiunta di una chat
    ChatRegistry registry;
    User user1("Utente1", "1234567890",  "utente1@example.com");
    User user2("Utente2", "0987654321",  "utente2@example.com");
    Chat chat(user1, user2);
    registry.addChat(chat);
    EXPECT_EQ(registry.getAllChats().size(), 1);
}

TEST(ChatRegistryTest, recuperoChats) {//verifica che getAllChats() restituisca correttamente la lista delle chat
    ChatRegistry registry;
    User user1("Utente1", "1234567890",  "utente1@example.com");
    User user2("Utente2", "0987654321",  "utente2@example.com");
    Chat chat1(user1, user2);
    Chat chat2(user1, user2);
    registry.addChat(chat1);
    registry.addChat(chat2);
    std::vector<Chat> chats = registry.getAllChats();
    EXPECT_EQ(chats.size(), 2);
}

TEST(ChatRegistryTest, aggiuntaPiuChats) {
    ChatRegistry registry;
    User user1("Utente1", "1234567890",  "utente1@example.com");
    User user2("Utente2", "0987654321",  "utente2@example.com");
    for (int i = 0; i < 10; i++) { // viene creato un oggetto  Chat che rappresenta una chat tra user1 e user2
        Chat chat(user1, user2); // poi l'oggetto chat appena creato viene aggiunto al registro chat
        registry.addChat(chat);
    }
    EXPECT_EQ(registry.getAllChats().size(), 10);// il risultato conterrà 10 chat tra user1 e user2
}

