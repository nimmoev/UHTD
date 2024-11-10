all: UHTD UHTDTests

UHTD: BasicGateLib.o BasicTestLib.o BasicGateLibTests.o UHTD.o
	g++ BasicGateLib.o BasicTestLib.o BasicGateLibTests.o UHTD.o -o UHTD.out

UHTDTests: UHTDTests.o
	g++ UHTDTests.o

BasicGateLib.o: BasicGateLib.cpp
	g++ -c BasicGateLib.cpp

BasicTestLib.o: BasicTestLib/BasicTestLib.cpp
	g++ -c BasicTestLib/BasicTestLib.cpp

BasicGateLibTests.o: BasicGateLibTests.cpp
	g++ -c BasicGateLibTests.cpp

UHTD.o: UHTD.cpp
	g++ -c UHTD.cpp

UHTDTests.o: UHTDTests.cpp
	g++ -c UHTDTests.cpp

clean:
	rm *.o 