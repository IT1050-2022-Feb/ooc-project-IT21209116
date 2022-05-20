//IT21209116
# include "ParkingArea.h"
# include <cstring>
# include <iostream>
using namespace std;


ParkingArea::ParkingArea( char TYPE, int LEVEL, int SLOT_ID)
{
	Type=TYPE;
	Level=LEVEL;
	Slot_ID= SLOT_ID;
}
 
void getType (){
		
}

void assignLevel(){
		
}

void assignslot(){
		
}

ParkingArea::~ParkingArea()
{
    cout << "Destructor Runs";
}

