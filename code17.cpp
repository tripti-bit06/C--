/* Alice and Bob, developers .f.
implementing an inventory management system for an upcoming C++ based RPG
(Role-Playing Game). The game features a dynamic inventory system that tracks
different categories of Armor collected by players.
In the game, Armor items are stored in two different storage zones, represented
as 2x2 matrices. Each zone tracks the quantity of Armor available across different
categories. As players complete missions, they earn additional Armor pieces,
which are also recorded in a 2x2 matrix representing rewards.
Your task as a developer is to help write code that manages the Armor inventory
by:

ame Architects, have been assigned the task of

1. Accepting input for the current Armor inventory in a 2x2 matrix
(representing the storage zone)
2. Accepting input for the armor rewards earned after completing missions,
stored in another 2x2 matrix
· 3. Calculating the updated inventory by adding both matrices
4. Displaying the final inventory in a structured format for the player*/

#include <iostream>
using namespace std;

class Inventory {
public:
    int a[2][2];

    // Input
    void input() {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }

    // Add
    Inventory add(Inventory b) {
        Inventory temp;

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                temp.a[i][j] = a[i][j] + b.a[i][j];
            }
        }

        return temp;
    }

    // Display in format [ x y ]
    void display() {
        for(int i = 0; i < 2; i++) {
            cout << "[ ";
            for(int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << "]" << endl;
        }
    }
};

int main() {

    Inventory A, B, C;

    cout << "Sample Output:\n\n";

    cout << "Enter Current Inventory:\n";
    A.input();

    cout << "Enter Mission Rewards:\n";
    B.input();

    // Add
    C = A.add(B);

    cout << "\nCurrent Inventory:\n";
    A.display();

    cout << "\nMission Rewards:\n";
    B.display();

    cout << "\nUpdated Inventory:\n";
    C.display();

    return 0;
}