
/**
 * 
 * @date 2022-11-24
 * @author Anda Stefania Ghita (andastefania.ghita@gmail.com)
 * @file Read_files.hh
 * 
 * 
 */


#include "Flights.hh"
#include "Bookings.hh"
#include "Read_files.hh"


    list<Flights *>FlighInformations::getFlightList()
    {
        return this->FlightList;
    }

    void FlighInformations::readFlightInformations(string file)
    {
        /**< Open file to read from it */
        ifstream flightInformations(file); 
        string storeFlights;

        if(flightInformations.is_open())
        {
            /**< Get line from file to string */
            while(getline(flightInformations, storeFlights) && !flightInformations.eof())
            {
                cout << storeFlights << endl;
                /**< Stringstream string*/
                stringstream myFlightInformations(storeFlights);
                /**< Declare store string and a new object*/
                string store;
                Flights *f = new Flights;
                getline(myFlightInformations, store, ',');
                int flightStore = atoi(store.c_str());
                /**< Call method */ 
                f->setflight_number(flightStore);

                getline(myFlightInformations, store, ',');
                f->setdeparture(store);

                getline(myFlightInformations, store , ',');
                f->setdestination(store);

                getline(myFlightInformations, store , ',');
                f->setdate(store);

                getline(myFlightInformations, store , ',');
                f->settime(store);

                getline(myFlightInformations, store, ',');
                flightStore = atoi(store.c_str());
                f->setfseats(flightStore);

                getline(myFlightInformations, store, ',');
                flightStore = atoi(store.c_str());
                f->setbseats(flightStore);

                getline(myFlightInformations, store , ',');
                flightStore = atoi(store.c_str());
                f->seteseats(flightStore);

                getline(myFlightInformations, store, ',');
                flightStore = atoi (store.c_str());
                f->setSelectESeats(flightStore);

                getline(myFlightInformations, store, ',');
                flightStore = atoi(store.c_str());
                f->setSelectBseats(flightStore);

                getline(myFlightInformations, store , ',' );
                flightStore = atoi(store.c_str());
                f->setSelectFseats(flightStore);

                f->setCurrentSeats();
                
                /**< Add to list*/ 
                FlightList.push_back(f);

            }
            /**< Close file*/
            flightInformations.close();
            
        }
         
    
        else{
            std::cerr << "The file it's unable to open" << std::endl;
        }
    }

     



     list<Bookings *>BookingsInformations::getBookingsList()
    {
        return this->BookingsList;
    }
    void BookingsInformations::readBookingsInformations(string myfile)
    {
        /**< Open file to read from */
        ifstream bookingInformations(myfile);
        string storeBookings;

        if(bookingInformations.is_open())
        {
            /**< Get line from file to string */
           
            while(getline(bookingInformations, storeBookings) && !storeBookings.empty())
            {
                cout << storeBookings << endl;
                stringstream bookingInformations(storeBookings);
                string store;
                Bookings *b = new Bookings;
                int bookingStore = atoi(store.c_str());
                /**< Call method*/ 
                getline(bookingInformations, store, ',');
                b->setbooking_number(atoi(store.c_str()));
                
                getline(bookingInformations, store, ',');
                b->setdate(store);

                getline(bookingInformations, store , ',');
                b->settime(store);

                getline(bookingInformations, store , ',');
                b->setdeparture(store);

                getline(bookingInformations, store , ',');
                b->setdestination(store);

                getline(bookingInformations, store , ',');
                b->setSeatClass(store);

                getline(bookingInformations, store, ',');
                b->setFirstName(store);

                getline(bookingInformations, store);
                b->setLastName(store);
   
                /**< Add to list*/ 
                BookingsList.push_back(b);

                
            }

            /**< Close the file*/
            bookingInformations.close();
        }
        else{
            std::cerr << "The file it's unable to open" << std::endl;
        }
    }
   

