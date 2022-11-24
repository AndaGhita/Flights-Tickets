/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file main.cpp
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
#include "Bookings.hh"
#include "Flights.hh"
#include "Read_files.hh"
#include "Tickets_functions.hh"

using namespace std;


int main(int argc , char **argv)
{
    string flightfile = argv[2];
    FlighInformations myFlights;
    myFlights.readFlightInformations(flightfile);

    string bookingfile = argv[3];
    BookingsInformations myBookings;
    myBookings.readBookingsInformations(bookingfile);


    createTickets(myFlights.getFlightList(), myBookings.getBookingsList());
   

   
    return 0;

};
