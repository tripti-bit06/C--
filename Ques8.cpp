/*A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags */

#include <iostream>
using namespace std;

class Event_id{
    int id;

    public :

    void data(){
        cout << "Enter id : ";
        cin >> id;
    }

    void tags(){

        if (id % 3 == 0 && id % 5 == 0)
        cout << "Buzz\nFuzz";

         else if(id % 5 == 0)
        cout << "Fuzz";

        else if (id % 3 == 0)
        cout << "Buzz";
    }
};

int main() {
    Event_id obj;
    obj.data();
    obj.tags();

    return 0;
}