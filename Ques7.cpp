#include <iostream>
using namespace std;

class Scores{
    int p1, p2, p3;

    public:
    void player()
    {
        cout << "Enter the score of 1st player : ";
        cin >> p1;
        cout << "Enter the score of 2nd player : ";
        cin >> p2;
        cout << "Enter the score of 3rd player : ";
        cin >> p3;
    }

    void comp(){
        if (p1 > p2 && p1 > p3) {
        cout << "Player 1 is the winner";
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "Player 2 is the winner";
    }
    else if (p3 > p1 && p3 > p2) {
        cout << "Player 3 is the winner";
    }
    else if (p1 == p2 && p1 > p3) {
        cout << "Player 1 and Player 2 are tied for the lead";
    }
    else if (p1 == p3 && p1 > p2) {
        cout << "Player 1 and Player 3 are tied for the lead";
    }
    else if (p2 == p3 && p2 > p1) {
        cout << "Player 2 and Player 3 are tied for the lead";
    }
    else {
        cout << "All three players are tied";
    }

    }
};

int main (){
    Scores obj;
    obj.player();
    obj.comp();

    return 0;
}
