//IT21209116
#pragma once
class Availability
{
  private :
    ParkingArea *slotId;

  public :
    Availability(ParkingArea * aSlotId);
    void displayAvailability ();
    ~Availability();
};
