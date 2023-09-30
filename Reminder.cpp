#include <string>

class Reminder {
    int day;
    int minutes;

public:
    Reminder(int day, int minutes) {
        this->day = day;
        this->minutes = minutes;
    }

    Reminder(int day, int hour, int minutes) {
        this->day = day;
        this->minutes = hour * 60 + minutes;
    }


    std::string getDayString() {
        switch (day) {
        case 1:
            return "Sunday";
            break;

        case 2:
            return "Monday";
            break;

        case 3:
            return "Tuesday";
            break;

        case 4:
            return "Wednesday";
            break;

        case 5:
            return "Thursday";
            break;

        case 6:
            return "Friday";
            break;

        case 7:
            return "Saturday";
            break;

        default:
            return"";
            break;
        }
    }

    int getDay() {
        return day;
    }

    int getHour() {
        return (minutes - getReducedMinutes()) / 60;
    }

    int getReducedMinutes() {
        return minutes % 60;
    }
};

struct dayTime {
    int day;
    int minutes;
}