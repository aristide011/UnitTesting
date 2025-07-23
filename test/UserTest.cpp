
#include <gtest/gtest.h>
#include "User.h"

TEST(UserTest, creazioneUtente) {
    User user("Sara Bicket", "1234567890", "sara.bicket@example.com");
    EXPECT_EQ(user.getName(), "Sara Bicket");
    EXPECT_EQ(user.getNumber(), "1234567890");
    EXPECT_EQ(user.getEmail(), "sara.bicket@example.com");
}

TEST(UserTest, attributiVuoti) {
    User user("","","") ;
    EXPECT_EQ(user.getName(), "");
    EXPECT_EQ(user.getNumber(), "");
    EXPECT_EQ(user.getEmail(), "");
}

TEST(UserTest, modificaAttributi) {
    User user("Sara Bicket", "1234567890",  "sara.bicket@example.com");
    user.setName("Jane Doe");
    user.setNumber("0987654321");
    user.setEmail("jane.doe@example.com");
    EXPECT_EQ(user.getName(), "Jane Doe");
    EXPECT_EQ(user.getNumber(), "0987654321");
    EXPECT_EQ(user.getEmail(), "jane.doe@example.com");
}

TEST(UserTest, validazioneEmail) {
    User user("", "",  "");
    EXPECT_THROW(user.setEmail("invalid_email"),std::invalid_argument);
}


