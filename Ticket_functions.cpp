/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Tickets_functions.hh
 * 
 * 
 */

#include "Tickets_functions.hh"

void allocateSeat(list<Flights *> fList)
{
    list<Flights *>::iterator it;

    ofstream seating("ticket.txt");
    for(it = fList.begin(); it !=fList.end(); it++)
    {
        int row = 0;
        int seat = 0;
        Flights *f = *it;

        seating << "Flight" << f->getFlightNumber() << "Departure" << f->getDeparture() << "Destination" << f-> getDestination() << "Date" <<f->getDate() << "Time" <<f->getTime() <<  "\n";
        seating << "first class";

        for(seat = 0 ; seat <= f->getfSeat(); seat++)
        {
            if(seat > (f->getTotalSeats() * row))
            {
                row++;
                seating << "\n";
            }
        }

        seating << "business class";

        for(seat = f->getfSeat() + 1 ; seat <= f->getfSeat() ; seat++)
        {
            if(seat > (f->getTotalSeats() * row))
            {
                 row++;
                seating << "\n";

            }
        }

        seating << "economy class";

        for(seat = f->getfSeat() + f->getbSeat() +1 ; seat <= f->getfSeat() + f->getbSeat() + f->geteSeat(); seat++)
        {
            if (seat > (f->getTotalSeats() * row))
            {
                row++;
                seating << "\n";
               
            }
    }

    seating.close();
    }
};


/**< Make a function for create the tickets*/

void  createTickets (list<Flights *>flightsList , list<Bookings *>bookingsList)
{
        /**<Declare iterators */
        list<Bookings *>::iterator it_bookings;
        list<Flights *>::iterator it_flights;
       
    
       /**< Loop though both lists */ 
        for(it_bookings = bookingsList.begin(); it_bookings != bookingsList.end(); it_bookings++)
        {
           
            for(it_flights = flightsList.begin(); it_flights != flightsList.end(); it_flights++)
            {
                
               Flights *flight = *it_flights;
               Bookings *booking = *it_bookings;
              

               /**< Check if conditions  matching*/ 
    
               if(flight->getDate() == booking->getDate() && flight->getTime() == booking->getTime() && flight->getDeparture() == booking->getDeparture() && flight->getDestination() == booking-> getDestination())
               {
               
                char ticket_name[20];
                snprintf(ticket_name, sizeof(ticket_name), "ticket-%d.txt", booking->getNumber());

                int seat;
                int rows = 1;

                ofstream ticketFile(ticket_name);

                if(booking->getSeatClass() == "first")
                {
                    seat = flight->getfSeat();
                    flight->increaseF();
                }
                 else if (booking->getSeatClass() == "business")
                {
                    seat = flight->getbSeat();
                    flight->increaseB();
                }
                else if (booking->getSeatClass() == "economy")
                {
                    seat = flight->geteSeat();
                    flight->increaseE();
                }
                
                while (seat > (flight->getTotalSeats() * rows))
                {
                    rows++;
                }

                if (ticketFile.is_open())
                {

                    /**< Write info into ticket */
                   
                    ticketFile << "BOOKING: " << booking->getNumber() << "\nFLIGHT: " << flight->getFlightNumber() << " \nDEPARTURE: " << booking->getDeparture() << " \nDESTINATION: " << booking->getDestination() << " " << booking->getDate() << " " << booking->getTime() << "\nPASSENGER: " << booking->getFisrtName() << " " << booking->getLastName() << "\nCLASS: " << booking->getSeatClass() << "\nROW: " << rows << " SEAT: " << seat;
                }
                else
                {
                    std::cerr << "Unable to open file" << std::endl;
                }
                
                /**< Close file */
                ticketFile.close();
               }
            }
        }

};
