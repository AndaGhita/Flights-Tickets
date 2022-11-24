
ticket : Flights.hh Bookings.hh Tickets_functions.hh Flights.cpp Bookings.cpp Ticket_functions.cpp main.cpp
	g++ main.cpp Flights.cpp Bookings.cpp Ticket_functions.cpp -o ticket
	
check : ticket
	./ticket -f flights.csv -b bookings.csv

dist : ticket
	gzip ticket
	
distcheck : dist
	gunzip ticket.gz
