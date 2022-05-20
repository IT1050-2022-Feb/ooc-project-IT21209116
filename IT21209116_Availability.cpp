//IT21209116
# include "Availability.h"
# include <cstring>
# include <iostream>
using namespace std;


Availability::Availability(ParkingArea * aSlotId){
    slotId=aSlotId;
}

void displayAvailability(){
		
}      

Availability::~Availability()
{
    cout << "Destructor Runs";
}


