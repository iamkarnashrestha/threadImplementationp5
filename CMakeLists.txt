cmake_minimum_required(VERSION 3.26)
project(ThreadImplementation)

set(CMAKE_CXX_STANDARD 17)

add_executable(ThreadImplementation main.cpp
        Counter.h
        Counter.cpp
        IncCounter.h
        IncCounter.cpp
        CounterTest.h
        CounterTest.cpp
        Subject.cpp
        Subject.h
        Observer.cpp
        Observer.h
        Subject.cpp
        MyObserver.cpp
        MyObserver.h
        Subject.cpp
        Subject.cpp
        Subject.cpp
        Subject.cpp)
