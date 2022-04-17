// Ryan Bieker, CS 3060 001, Chapter 10 Programming Challenges, due 4/19/2022, 
//Converts a word into morse code

#include <iostream>
#include <vector>

using namespace std;

void converter(string word);

int main()
{
    char word[50];

    //user input
    cout << "Enter a word and I will translate it to Morse code: ";
    cin.getline(word, 50);

    converter(word);
}

//converts word to morse code
void converter(string word)
{
    //checks for chars, could not think of a way to optimize it better than this as each char has specific morse code
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'a' || word[i] == 'A')
        {
            cout << ".-" << endl;
        }
        else if (word[i] == 'b' || word[i] == 'B')
        {
            cout << "-..." << endl;
        }
        else if (word[i] == 'c' || word[i] == 'C')
        {
            cout << "-.-." << endl;
        }
        else if (word[i] == 'd' || word[i] == 'D')
        {
            cout << "-.." << endl;
        }
        else if (word[i] == 'e' || word[i] == 'E')
        {
            cout << "." << endl;
        }
        else if (word[i] == 'f' || word[i] == 'F')
        {
            cout << "..-." << endl;
        }
        else if (word[i] == 'g' || word[i] == 'G')
        {
            cout << "--." << endl;
        }
        else if (word[i] == 'h' || word[i] == 'H')
        {
            cout << "...." << endl;
        }
        else if (word[i] == 'i' || word[i] == 'I')
        {
            cout << ".." << endl;
        }
        else if (word[i] == 'j' || word[i] == 'J')
        {
            cout << ".---" << endl;
        }
        else if (word[i] == 'k' || word[i] == 'K')
        {
            cout << "-.-" << endl;
        }
        else if (word[i] == 'l' || word[i] == 'L')
        {
            cout << ".-.." << endl;
        }
        else if (word[i] == 'm' || word[i] == 'M')
        {
            cout << "--" << endl;
        }
        else if (word[i] == 'n' || word[i] == 'N')
        {
            cout << "-." << endl;
        }
        else if (word[i] == 'o' || word[i] == 'O')
        {
            cout << "---" << endl;
        }
        else if (word[i] == 'p' || word[i] == 'P')
        {
            cout << ".--." << endl;
        }
        else if (word[i] == 'q' || word[i] == 'Q')
        {
            cout << "--.-" << endl;
        }
        else if (word[i] == 'r' || word[i] == 'R')
        {
            cout << ".-." << endl;
        }
        else if (word[i] == 's' || word[i] == 'S')
        {
            cout << "..." << endl;
        }
        else if (word[i] == 't' || word[i] == 'T')
        {
            cout << "-" << endl;
        }
        else if (word[i] == 'u' || word[i] == 'U')
        {
            cout << "..-" << endl;
        }
        else if (word[i] == 'v' || word[i] == 'V')
        {
            cout << "...-" << endl;
        }
        else if (word[i] == 'w' || word[i] == 'W')
        {
            cout << ".--" << endl;
        }
        else if (word[i] == 'x' || word[i] == 'X')
        {
            cout << "-..-" << endl;
        }
        else if (word[i] == 'y' || word[i] == 'Y')
        {
            cout << "-.--" << endl;
        }
        else if (word[i] == 'z' || word[i] == 'Z')
        {
            cout << "--.." << endl;
        }
        else if (word[i] == '?')
        {
            cout << "..--.." << endl;
        }
        else if (word[i] == ' ')
        {
            cout << ' ' << endl;
        }
    }
}