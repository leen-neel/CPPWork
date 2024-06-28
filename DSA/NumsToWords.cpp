#include <iostream>
#include <string>

std::string convertSentence(std::string sentence)
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

std::string convertToWords(int n)
{
    // Arrays to store words for single, double digits, and tens multiples
    std::string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    std::string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Handle the zero case
    if (n == 0)
        return "Zero";

    std::string result;

    // Handle billions
    if (n >= 1000000000)
    {
        result += convertToWords(n / 1000000000) + " Billion ";
        n %= 1000000000;
    }

    // Handle millions
    if (n >= 1000000)
    {
        result += convertToWords(n / 1000000) + " Million ";
        n %= 1000000;
    }

    // Handle thousands
    if (n >= 1000)
    {
        result += convertToWords(n / 1000) + " Thousand ";
        n %= 1000;
    }

    // Handle hundreds place
    if (n / 100 > 0)
    {
        result += convertToWords(n / 100) + " Hundred ";
        n %= 100;
    }

    // Process tens and ones place
    if (n >= 10 && n < 20)
    {
        result += teens[n - 10] + " ";
    }
    else
    {
        if (n / 10 > 0)
        {
            result += tens[n / 10] + " ";
        }
        if (n % 10 > 0)
        {
            result += ones[n % 10] + " ";
        }
    }

    return convertSentence(result);
}

int main()
{
    int amount;
    std::cout << "Enter amount in figures: ";
    std::cin >> amount;

    std::cout << "In words: " << convertToWords(amount) << std::endl;
    return 0;
}
