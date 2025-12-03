/* Algorithm Challenge & Problem Solving
 * 15 - Letter Pattern
 *
 * This program reads a positive number from the user and prints a
 * growing letter pattern using uppercase ASCII characters.
 *
 * The logic is based on ASCII values:
 *   - 'A' = 65
 *   - Each new line prints the next letter in sequence.
 *   - The number of repetitions corresponds to the row number.
 */

#include <iostream>
using namespace std;

// Reads a positive number (greater than 0)
int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;

        if (Number <= 0)
            cout << "Please enter a number greater than zero.\n";

    } while (Number <= 0);

    return Number;
}

// Prints a letter pattern using ASCII uppercase letters
void PrintLetterPattern(int Number)
{
    for (int i = 65; i <= 65 + Number - 1; i++) // 'A' = 65 → up to ('A' + Number - 1)
    {
        // Calculate how many times to print this letter:
        // j ≤ (i - 65 + 1)
        for (int j = 1; j <= i - 65 + 1; j++)
        {
            cout << char(i); // Convert ASCII code to character
        }

        cout << endl;
    }
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Enter a Positive Number:\n"));
    return 0;
}
