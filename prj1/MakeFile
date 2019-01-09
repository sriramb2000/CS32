# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o Zombie.o Arena.o Game.o Player.o
	$(CXX) $(CXXFLAGS) -o main main.o Zombie.o Arena.o Game.o Player.o

# The main.o target can be written more simply

main.o: main.cpp Zombie.h Arena.h Game.h Player.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Zombie.o: Zombie.h Arena.h

Player.o: Player.h Arena.h

Arena.o: Arena.h Zombie.h Player.h utilities.cpp

Game.o: Game.h Arena.h utilities.cpp
