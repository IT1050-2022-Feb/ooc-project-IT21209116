//IT21209116
#pragma once
class ParkingArea
{
  private :
      string Type;
      int Level;
      int Slot_ID;
    
  public :
      ParkingArea();
      ParkingArea (char TYPE, int LEVEL, int SLOT_ID); 
      void getType ();
      void assignLevel();
      void assignSlot();
      void updateSlot();
      ~ParkingArea();

};
