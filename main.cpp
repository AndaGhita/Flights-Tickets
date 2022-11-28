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
    try {
    int option;
    FlighInformations myFlights;
    BookingsInformations myBookings;
    
    while((option = getopt(argc, argv, "f:b:")) != -1)
   {
        
    switch(option)
    {
    
       case 'f':{
               char *flightfile = optarg;
               myFlights.readFlightInformations(flightfile);
                }
               break;
      case 'b':{
               char *bookingfile = optarg;
               myBookings.readBookingsInformations(bookingfile);
               }
               break;

    }
   }
    createTickets(myFlights.getFlightList(), myBookings.getBookingsList());
   
    } catch(const char *what){
       
        cerr <<"I could not open the file!" << what <<endl;
    
    }
   
    return 0;

};
