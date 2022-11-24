/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Tickets_functions.hh
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


void allocateSeat(list<Flights *> fList);
void  createTickets (list<Flights *>flightsList , list<Bookings *>bookingsList);