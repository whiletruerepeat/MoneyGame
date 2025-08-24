all : testlinux testwindows

testwindows : obj/testjoueur.o obj/player.o
	g++ obj/testjoueur.o obj/player.o -o bin/test.exe


testlinux : obj/testjoueur.o obj/player.o
	g++ obj/testjoueur.o obj/player.o -o bin/test

obj/testjoueur.o: src/test.cpp 
	g++ -Wall -c src/test.cpp -o obj/testjoueur.o

obj/player.o: src/player.cpp src/player.h
	g++ -Wall -c src/player.cpp -o obj/player.o