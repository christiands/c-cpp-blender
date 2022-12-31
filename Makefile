C_EXNAME=c.out
CXX_EXNAME=cxx.out

C_MAIN=main.c
CC=clang
CC_FLAGS=-std=c99

CXX_MAIN=main.cpp
CCXX=clang++
CCXX_FLAGS=-std=c++11


cver:
	$(CC) $(CXX_FLAGS) -o $(C_EXNAME) lib.c $(C_MAIN)

cxxver:
	$(CCXX) $(CCXX_FLAGS) -o $(CXX_EXNAME) lib.cpp $(CXX_MAIN)

all: cver cxxver
