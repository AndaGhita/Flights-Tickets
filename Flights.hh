/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Flights.hh
 * 
 * 
 */

#ifndef Flights_included

#define Flights_included

#include <iostream>
#include <string>



using namespace std;

class Flights
{
    private: 
       /*!flight data-file structure*/
       int flight_number; /**< an integer for number of flights*/
       string departure;  /**< a string for flights deparatures*/
       string destination; /**< a string for flights destinations */
       string date; /**< a string for date of flights*/
       string time; /**<a string for time of flights*/
       int fseats; /**< an integer for the maxim number of first class seats*/
       int f_seats; /**< an integer for first class seats */
       int bseats; /**< an integer for the maxim number of business class seats*/
       int b_seats;  /**< an integer for business class seats */
       int eseats; /**< an integer for the maxim number of economy class seats*/
       int e_seats;  /**< an integer for economy class seats */
       int select_Eseats;  /**< an integer for allocated economy class seats */
       int select_Bseats;  /**< an integer for allocated business class seats */
       int select_Fseats;   /**< an integer for allocated first class seats */

    public:
    
    Flights(){};  /*! Constructor */
        
        /**
         * Define setters for flight structure
         * */
        void setflight_number(int flight_number);
        void setdeparture(string departure);
        void setdestination(string destination);
        void setdate(string date);
        void settime(string time);
        void setfseats(int fseats);
        void setf_seats(int f_seats);
        void setbseats(int bseats);
        void setb_seats(int b_seats);
        void seteseats(int eseats);
        void sete_seats(int e_seats);
        void setSelectESeats(int select_Eseats);
        void setSelectBseats(int select_Bseats);
        void setSelectFseats(int select_Fseats);
        void setCurrentSeats();
        void increaseF();
        void increaseB();
        void increaseE();
  
        /**
         * Define getters for flight structure
         * */
         
        int getFlightNumber();
        
        string getDeparture();
        
        string getDestination();
        string getDate();
        
        string getTime();

        int getfSeat();
        int getf_seat();
        int geteSeat();
        int gete_seats();
        int getbSeat();
        int getb_seats();

        int getTotalFseats();
        int getTotalBseats();
        int getTotalEseats();
        int getSelectEseats();
        int getSelectBseats();
        int getSelectFseats();
        int getTotalSeats();
};
 
#endif