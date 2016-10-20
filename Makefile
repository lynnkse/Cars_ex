CC = g++
CFLAGS = -g -c -ansi -pedantic -Werror -Wall

OBJS = Car_t.o Bus_t.o Private_t.o cars_test.o

cars_test : $(OBJS) 
	$(CC) -o cars_test $(OBJS)
	
cars_test.o : cars_test.cpp mu_test.h Car_t.h Bus_t.h Private_t.h
	$(CC) $(CFLAGS) cars_test.cpp
	
Car_t.o : Car_t.cpp Car_t.h
	$(CC) $(CFLAGS) Car_t.cpp
	
Bus_t.o : Bus_t.cpp Bus_t.h Car_t.h
	$(CC) $(CFLAGS) Bus_t.cpp
	
Private_t.o : Private_t.cpp Private_t.h Car_t.h
	$(CC) $(CFLAGS) Private_t.cpp
