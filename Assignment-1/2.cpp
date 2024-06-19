#include <iostream>
#include <string>

using namespace std;

std::string convertSentence(string sentence)
{
    std::string newSentence = "";
    bool isLastSpace = false;

    for (char &c : sentence)
    {

        if (c == ' ')
        {
            if (!isLastSpace)
            {
                newSentence += c;
                isLastSpace = true;
            }
        }
        else
        {
            newSentence += c;
            isLastSpace = false;
        }
    }

    return newSentence;
}

int main()
{
    string sentence = "hey  there partner!";

    string convertedSentence = convertSentence(sentence);

    cout << "Converted sentence: " << convertedSentence << endl;

    return 0;
}
