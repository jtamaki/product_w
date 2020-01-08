#/bin/bash
g++ test/*.cpp src/function.cpp ../core/src/*.cpp -Isrc -I../core/src -Igoogletest/include -Lgoogletest/lib -lgtest -lgtest_main -lpthread
