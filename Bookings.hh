
/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Bookings.hh
 * 
 * 
 */

#ifndef Bookings_included
#define Bookings_included


#include <iostream>
#include <string>

using namespace std;


class Bookings
{
    private:

    /*! booking data-file structure*/

    int booking_number; /**< an integer for number of bookings*/
    string date;  /**< a string for date of bookings*/
    string time; /**< a string for tame of bookings*/
    string departure; /**< a string for departure of bookings*/
    string destination; /**< a string for destination of bookings*/
    string seatclass; /**< a string for class of the seat*/
    string firstName; /**< a string for First Name from bookings*/
    string lastName; /**< a string for Last Name from bookings*/

    public:


      /**
      * Define setters for bookinngs structure
      * */

    void setbooking_number(int booking_number);
  
    void setdate(string date);

    void settime(string time);
   
    void setdeparture(string departure);
    
    void setdestination(string destination);
    
    void setSeatClass(string seatclass);
   
    void setFirstName(string firstName);
    
    void setLastName(string lastName);
   
    
      /**
       * Define getters for booking structure
       * */
         
    int getNumber();
   
    string getDate();
   
    string getTime();
   
    string getDeparture();
   
    string getDestination();
   
    string getSeatClass();
    
    string getFisrtName();
   
    string getLastName();
 

};

#endif
