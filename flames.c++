#include <iostream>
#include <strings.h>
using namespace std;
int main()
{
    int n, m;
    string f = "flames";
    string str1, str2;
    cout << "enter 1st string"; // 1st person name
    cin >> str1;

    cout << "enter 2nd string"; // 2nd person name
    cin >> str2;

    if (str1.length() > str2.length())
    {
        n = str1.length();
        m = str2.length();
    }
    else
    {
        n = str2.length();
        m = str1.length();
    }
    ////
    int i, j;

    for (i = 0; i <= n; i++)
    {

        for (j = 0; j <= m; j++)
        {
            if (str1[i] == str2[j])
            { // crossing the letters that r common for both the names
                if (i < n)
                {
                    str1[i] = 'X';
                    str2[j] = 'X';
                }
                else
                {
                    str1[i] = 'X';
                }
            }
        }
    }
    // for (i = 0, j = 0; i <= n, j <= m; i++, j++)/// printing to check the string
    // {
    //     cout << str2[i];
    // }
    int c = 0, d = 0;
    for (i = 0; i < n; i++)
    {
        if (str1[i] != 'X')
        {

            c = c + 1;
        }
    }
    for (j = 0; j < m; j++)
    {
        if (str2[j] != 'X')
        {

            d = d + 1;
        }
    }
    int sum = 0;
    sum = c + d;
    // cout << "\n"
    //      << sum;   (checking statemnts , u can use these statements to understand how the code flows )
    ///////
    int counter = 0, k = 0, g;
    for (i = 0; i < 6; i++)
    {
        // cout << "\n"<< i;

        if (k <= 5) //(flames has 6 letters , in the elimination process of the letters in "flames" at last
                    //   any one letter(ie at max 5 letters will be remaining( k<=5))
                    //    will be remaining so we initialize a counter variable so that
                   //    each time we delete a letter in "flames" the counter variable is incremented )//
        {
            if (k == 5)
            {
                break;
            }

            if (i == 5)
            {
                g = 5;
                i = -1;    // so that loops runs continuously
                if (f[5] == 'X')
                {
                    continue;
                }
            }
            else
            {

                g = 0;
            }
            if (f[i] == 'X')
            {

                continue;
            }

            counter = counter + 1;
            // cout << " " << counter;(checking statements)
            if (counter == sum)
            {
                // cout << " " << counter;
                counter = 0;
                if (g == 5)
                {

                    k = k + 1; // each time we r crossing that element  ,if this condition works

                    f[g] = 'X';
                }
                else
                {
                    k = k + 1;
                    // cout << f[i];
                    f[i] = 'X';
                }
            }
        }
    }
    cout << "\n";
    for (i = 0; i < 6; i++)
    {
        if (f[i] == 'f')
        {
            cout << "friends";
        }
        else if (f[i] == 'l')
        {
            cout << "lovers";
        }
        else if (f[i] == 'a')
        {
            cout << "affection";
        }
        else if (f[i] == 'm')
        {
            cout << "marriage";
        }
        else if (f[i] == 'e')
        {
            cout << "enemies";
        }
        else if (f[i] == 's')
        {
            cout << "sisters";
        }
    }
}

