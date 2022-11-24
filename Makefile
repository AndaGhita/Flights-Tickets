
main : Flights.hh Bookings.hh Read_files.hh Tickets_functions.hh  Flights.cpp Bookings.cpp Read_files.cpp Ticket_functions.cpp main.cpp
	g++ main.cpp Flights.cpp Bookings.cpp Read_files.cpp Ticket_functions.cpp -o ticket
	
check : main
	./main -f flights.csv -b bookings.csv

