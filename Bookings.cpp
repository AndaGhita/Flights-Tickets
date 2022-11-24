
/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Bookings.cpp
 * 
 * 
 */


#include "Bookings.hh"

using namespace std;


    /**
     * Define setters for bookinngs structure
     * */

    void Bookings::setbooking_number(int booking_number)
    {
        this->booking_number = booking_number;
    }
    void Bookings::setdate(string date)
    {
        this->date = date;
    }
    void Bookings::settime(string time)
    {
        this->time = time;
    }
    void Bookings::setdeparture(string departure)
    {
        this->departure = departure;
    }
    void Bookings::setdestination(string destination)
    {
        this->destination = destination;
    }
    void Bookings::setSeatClass(string seatclass)
    {
        this->seatclass = seatclass;
    }
    void Bookings::setFirstName(string firstName)
    {
        this->firstName = firstName;
    }
    void Bookings::setLastName(string lastName)
    {
        this->lastName = lastName;
    }
    
      /**
       * Define getters for booking structure
       * */
         
    int Bookings::getNumber()
    {
        return this->booking_number;
    }
    string Bookings::getDate()
    {
        return this->date;
    }
    string Bookings::getTime()
    {
        return this->time;
    }
    string Bookings::getDeparture()
    {
        return this->departure;
    }
    string Bookings::getDestination()
    {
        return this->destination;
    }
    string Bookings::getSeatClass()
    {
        return this->seatclass;
    }
    string Bookings::getFisrtName()
    {
        return this->firstName;
    }
    string Bookings::getLastName()
    {
        return this->lastName;
    }

