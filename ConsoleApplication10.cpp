#include <iostream>
using namespace std;

int firstTusk()
{
    int num;
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << "\n";
        }
    }
    cout << num << "\n";

    return 0;
}

int secondTusk()
{
    int num;
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            if (num != i)
            {
                cout << "chislo ne celoe\n";
            }

            else if (num == i)
            {
                cout << "chislo celoe\n";
            }
        }
    }

    return 0;
}


int thirdTusk()
{
    int num;
    int count = 0;
    cin >> num;

    while (num > 0)
    {
        int a = num % 10;
        int b = num / 10 % 10;

        if (a == b)
        {
            count++;
        }

        num /= 10;
    }

    if (count > 0)
    {
        cout << "Est' odinakovie chisla";
    }

    return 0;
}

int forthTusk()
{
    int num;
    int count = 0;
    cin >> num;

    while (num > 0)
    {
        int a = num % 10;
        int b = num / 10 % 10;

        if (a < b)
        {
            count++;
        }

        num /= 10;
    }

    if (count > 0)
    {
        cout << "ne sootvet usloviyu";
    }

    else
    {
        cout << "vse OK";
    }

    return 0;
}

int fivethTusk()
{
    int min = 0;
    int max = 1000;

    while (true)
    {
        int num = min + (max - min) / 2;

        cout << "num > " << num << " ? \n";
        string ans;
        cin >> ans;

        if (ans == "yes")
        {
            min = num + 1;
        }

        else if (ans == "no")
        {
            max = num;
        }

        else if (ans == "done")
        {
            cout << "your num is " << num;
            break;
        }
    }

    return 0;
}

int main()
{
    firstTusk();
    secondTusk();
    thirdTusk();
    forthTusk();
    fivethTusk();
}