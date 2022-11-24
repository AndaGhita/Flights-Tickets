/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Flights.cpp
 * 
 * 
 */

#include "Flights.hh"
using namespace std;

        /**
         * Define setters for flight structure
         * */
        void Flights::setflight_number(int flight_number)
        {
            this->flight_number = flight_number; 

        }
        
        void Flights::setdeparture(string departure)
        {
            this->departure = departure;
        }
        void Flights::setdestination(string destination)
        {
            this->destination = destination;
        }
        void Flights::setdate(string date)
        {
            this->date = date;
        }
        void Flights::settime(string time)
        {
            this->time = time;
        }
        void Flights::setfseats(int fseats)
        {
            this->fseats = fseats;
        }
        void Flights::setf_seats(int f_seats)
        {
            this->f_seats = f_seats;
        }
        void Flights::setbseats(int bseats)
        {
            this->bseats = bseats;
        }
        void Flights::setb_seats(int b_seats)
        {
            this->b_seats = b_seats;
        }
        void Flights::seteseats(int eseats)
        {
            this->eseats = eseats;
        }
        void Flights::sete_seats(int e_seats)
        {
            this->e_seats = e_seats;
        }
        void Flights::setSelectESeats(int select_Eseats)
        {
            this->select_Eseats = select_Eseats;
        }
        void Flights::setSelectBseats(int select_Bseats)
        {
            this->select_Bseats = select_Bseats;
        }
        void Flights::setSelectFseats(int select_Fseats)
        {
            this->select_Fseats = select_Fseats;
        }
        void Flights::setCurrentSeats()
        {
            this->f_seats = 1;
            this->b_seats = (this->fseats *(this->select_Eseats + this->select_Bseats + this->select_Fseats)) + 1;
            this->e_seats = (this->fseats *(this->select_Eseats + this->select_Bseats + this->select_Fseats)+(this->bseats *(this->select_Eseats + this->select_Bseats + this ->select_Fseats))) + 1;
        }
        void Flights::increaseF()
        {
            this->f_seats++;
        };
        void Flights::increaseB()
        {
            this->b_seats++;
        };
        void Flights::increaseE()
        {
            this->e_seats++;
    
        };
  
        /**
         * Define getters for flight structure
         * */
         
        int Flights::getFlightNumber()
        {
            return flight_number;
        }
        
        string Flights::getDeparture()
        {
            return departure;
        }
        
        string Flights::getDestination()
        {
            return destination;
        }
       
        string Flights::getDate()
        {
            return date;
        }
        
        string Flights::getTime()
        {
            return time;
        }

        int Flights::getfSeat()
        {
            return fseats;
        }
        int Flights::getf_seat()
        {
            return f_seats;
        }
        int Flights::geteSeat()
        {
            return eseats;
        }
        int Flights::gete_seats()
        {
            return e_seats;
        }
        int Flights::getbSeat()
        {
            return bseats;
        }
        int Flights::getb_seats()
        {
            return b_seats;
        }

        int Flights::getTotalFseats()
        {
            return fseats *(this->select_Eseats + this->select_Bseats + this->select_Fseats);
        }
        int Flights::getTotalBseats()
        {
            return bseats *(this->select_Eseats + this->select_Bseats + this->select_Fseats);
        }
        int Flights::getTotalEseats()
        {
            return eseats *(this->select_Eseats + this->select_Bseats + this->select_Fseats);
        }
        int Flights::getSelectEseats()
        {
            return select_Eseats;
        }
        int Flights::getSelectBseats()
        {
            return select_Bseats;
        }
        int Flights::getSelectFseats()
        {
            return select_Fseats;
        }
        int Flights::getTotalSeats()
        {
            return (this->select_Eseats + this->select_Bseats + this->select_Fseats);
        }