#include <iostream>
using namespace std;

class Alphabet
{
    public :

    void comp(){
    char alpha;

    cout << "Enter Your alphabet (A-Z) : ";
    cin >> alpha;

    switch (alpha)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel";
        break;

    default:
        cout << "Consonant";
    }
}
};

int main (){
    Alphabet obj;
    obj.comp();

    return 0;
}
