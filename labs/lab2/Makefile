CFLAGS = -Wall -Wextra -pedantic
CC = g++
all:	driver.o Country.o
	$(CC) $(CFLAGS) -o main driver.o Country.o
driver.o:	driver.cpp
	$(CC) $(CFLAGS) -c driver.cpp
Country.o:	Country.cpp
	$(CC) $(CFLAGS) -c Country.cpp
clean:
	rm driver.o Country.o main
