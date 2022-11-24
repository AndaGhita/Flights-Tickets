
ticket : Flights.hh Bookings.hh Tickets_functions.hh Flights.cpp Bookings.cpp Ticket_functions.cpp main.cpp
	g++ ticket.cpp flights.cpp bookings.cpp function.cpp -o ticket
	
check : ticket
	./ticket -f flights.csv -b bookings.csv

dist : ticket
	gzip ticket
	
distcheck : dist
	gunzip ticket.gz
