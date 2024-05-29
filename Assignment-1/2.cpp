#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string convertSentence(string sentence)
{
    stringstream ss(sentence);
    string word;
    string newSentence;

    // Read words from the string stream
    while (getline(ss, word, ' '))
    {
        // Add the word with a single space
        cout << word << "\n";
    }

    // Remove the trailing space (if any)
    newSentence.pop_back();

    return "sex";
}

int main()
{
    string sentence = "hey  there partner!";

    string convertedSentence = convertSentence(sentence);

    cout << "Converted sentence: " << convertedSentence << endl;

    return 0;
}
