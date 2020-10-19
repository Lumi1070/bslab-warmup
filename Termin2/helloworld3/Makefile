helloworld: helloworld.o printhelloworld.o ente.o
	g++ helloworld.o printhelloworld.o ente.o -o helloworld
	
helloworld.o: helloworld.cc
	g++ -c helloworld.cc
	
printhelloworld.o: printhelloworld.cc
	g++ -c printhelloworld.cc

ente.o: ente.cc
	g++ -c ente.cc

clean:
	rm -f helloworld *.o