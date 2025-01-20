all: UHTD UnitTests clean

UHTD: BasicGateLib.o BasicTestLib.o BasicGateLibTests.o Frontend.o UHTDClasses.o ATPG.o Input.o UHTD.o
	g++ BasicGateLib.o BasicTestLib.o BasicGateLibTests.o Frontend.o UHTDClasses.o ATPG.o Input.o UHTD.o -o UHTD.out

UnitTests: ATPGTests.o InputTests.o UHTDTests.o
	g++  BasicGateLib.o BasicTestLib.o BasicGateLibTests.o Frontend.o UHTDClasses.o ATPG.o ATPGTests.o Input.o InputTests.o UHTDTests.o -o RunUnitTests.out

BasicGateLib.o: BasicGateLib/BasicGateLib.cpp
	g++ -c BasicGateLib/BasicGateLib.cpp

BasicTestLib.o: BasicGateLib/BasicTestLib/BasicTestLib.cpp
	g++ -c BasicGateLib/BasicTestLib/BasicTestLib.cpp

BasicGateLibTests.o: BasicGateLib/BasicGateLibTests.cpp
	g++ -c BasicGateLib/BasicGateLibTests.cpp

Frontend.o: Frontend.cpp
	g++ -c Frontend.cpp

UHTDClasses.o: UHTDClasses.cpp
	g++ -c UHTDClasses.cpp

ATPG.o: ATPG.cpp
	g++ -c ATPG.cpp

ATPGTests.o: ATPGTests.cpp
	g++ -c ATPGTests.cpp

Input.o: Input.cpp
	g++ -c Input.cpp

InputTests.o: InputTests.cpp
	g++ -c InputTests.cpp

UHTD.o: UHTD.cpp
	g++ -c UHTD.cpp

UHTDTests.o: UHTDTests.cpp
	g++ -c UHTDTests.cpp

clean:
	rm *.o 