output: main.o Plant.o Reminder.o Schedule.o ArrayList.o
	g++ -std=c++11 -o output main.o Plant.o Reminder.o Schedule.o ArrayList.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp


Reminder.o: Reminder.hpp Reminder.cpp
	g++ -std=c++11 -c Reminder.cpp
ArrayList.o: ArrayList.hpp ArrayList.cpp
	g++ -std=c++11 -c ArrayList.cpp
Schedule.o: Schedule.hpp Schedule.cpp
	g++ -std=c++11 -c Schedule.cpp
Plant.o: Plant.hpp Plant.cpp
	g++ -std=c++11 -c Plant.cpp

clean:
	rm output main.o Plant.o Reminder.o Schedule.o ArrayList.o