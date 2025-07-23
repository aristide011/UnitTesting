cmake_minimum_required(VERSION 3.27)
project(ProjectUnit VERSION 1.0.0 LANGUAGES CXX )

set(CMAKE_CXX_STANDARD 17)

#includo la directory dove si trovano i file di intestazione(.h)
include_directories(include)


# Lista dei file sorgenti comuni
set(SRC_FILES
        src/User.cpp
        src/Message.cpp
        src/Chat.cpp
        src/ChatRegistry.cpp
)


add_subdirectory(googletest)

#Eseguibile principale
add_executable(ProjectUnit main.cpp
        ${SRC_FILES})


target_include_directories(ProjectUnit PRIVATE include)

#Eseguibile per i test
add_executable(ProjectUnitTest
              test/main_test.cpp
              test/UserTest.cpp
              test/MessageTest.cpp
              test/ChatRegistryTest.cpp
              test/ChatTest.cpp
              ${SRC_FILES} )

target_include_directories(ProjectUnitTest PRIVATE include)

# Linka le librerie di GoogleTest
target_link_libraries(ProjectUnitTest PRIVATE
        gtest
        gtest_main
        gmock
)



#Abilito CTest
enable_testing()
add_test(NAME ProjectUnitTest COMMAND ProjectUnitTest)


