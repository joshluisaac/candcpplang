cmake_minimum_required(VERSION 3.16)
project(development_cpp)
set(CMAKE_CXX_STANDARD 20)
add_executable(transaction_processing main.cpp Person.cpp Tweeter.cpp BankAccount.cpp)

