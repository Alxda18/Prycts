bin/main : src/main.cpp include/*
	c++ src/main.cpp -o bin/main -lcurses -I include

run : bin/main

	./bin/main