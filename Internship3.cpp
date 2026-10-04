#include <iostream>
using namespace std;
int main()
{
    string user_inp;
    cout << "What kind of movie you want to watch today?";
    cin >> user_inp;
    if (user_inp == "Action")
    {
        cout << "You may like: " << endl;
        cout << "1. Mad Max: Fury Road" << endl;
        cout << "2. The Matrix" << endl;
        cout << "3. KGF" << endl;
        cout << "4. Animal" << endl;
    }
    else if (user_inp == "Science-Fiction")
    {
        cout << "You may like: " << endl;
        cout << "1. Arrival" << endl;
        cout << "2. Children of Men" << endl;
        cout << "3. Alien" << endl;
        cout << "4. Dune: Part Two" << endl;
    }
    else if (user_inp == "Adventure")
    {
        cout << "You may like: " << endl;
        cout << "1. Interstellar " << endl;
        cout << "2. Jurassic Park " << endl;
        cout << "3. Avatar " << endl;
        cout << "4. King Kong" << endl;
    }
    else if (user_inp == "Science-Fiction" || user_inp == "Action")
    {
        cout << "You may like: " << endl;
        cout << "1. Arrival" << endl;
        cout << "2. Children of Men" << endl;
        cout << "3. Animal" << endl;
        cout << "4. The matrix" << endl;
    }

    return 0;
}