/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Read_files.hh
 * 
 * 
 */

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <iterator>
#include <cstdlib>
#include "Flights.hh"
#include "Bookings.hh"

using namespace std;

class FlighInformations
{     list<Flights *> FlightList;
      public:
      void readFlightInformations(string file);
      list<Flights *>getFlightList();
};
class BookingsInformations
{
     list<Bookings *> BookingsList;
     public:
     void readBookingsInformations(string myfile);
     list<Bookings *>getBookingsList();
};