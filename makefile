all: genmino.o tetris.o
	g++ -o tetris tetris.o genmino.o 

tetris.o: tetris.cpp genmino.h
	g++ -c tetris.cpp 

genmino.o: genmino.cpp genmino.h MinoI.h MinoL.h MinoS.h MinoJ.h MinoO.h MinoZ.h
	g++ -c genmino.cpp 
clean:
	rm tetris *.o