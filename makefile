output: main.o Plant.o Reminder.o Schedule.o LinkedList.o
	g++ -std=c++11 -o output main.o Plant.o Reminder.o Schedule.o LinkedList.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp


Reminder.o: Reminder.hpp Reminder.cpp
	g++ -std=c++11 -c Reminder.cpp
LinkedList.o: LinkedList.hpp LinkedList.cpp
	g++ -std=c++11 -c LinkedList.cpp
Schedule.o: Schedule.hpp Schedule.cpp
	g++ -std=c++11 -c Schedule.cpp
Plant.o: Plant.hpp Plant.cpp
	g++ -std=c++11 -c Plant.cpp

clean:
	rm output main.o Plant.o Reminder.o Schedule.o LinkedList.o