#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    char firstStr[1024] = { 0 };
    char secondStr[1024] = { 0 };

    cout << "Введите строку: ";
    cin >> firstStr;

    cout << "Введите подстроку: ";
    cin >> secondStr;

    int lengthFirstStr = 0;
    for (;; lengthFirstStr++)
    {
        if (firstStr[lengthFirstStr] == '\0') break;
    }

    int lengthSecondStr = 0;
    for (;; lengthSecondStr++)
    {
        if (secondStr[lengthSecondStr] == '\0') break;
    }

    int ind = 0;
    int TimeG = 0;
    int TimeI;
    int i2 = 0;
    int i = lengthFirstStr;
    for (; i > 0; i--)
    {
        if (firstStr[i] == secondStr[0])
        {
            TimeG = 0;
            TimeI = i;
            ind = 0;
            for (int G = 0; G < lengthSecondStr; G++)
            {
                if (firstStr[TimeI] == secondStr[TimeG])
                {
                    ind = ind + 1;
                }
                TimeG = TimeG + 1;
                TimeI = TimeI + 1;

            }
            if (lengthSecondStr == ind) break;
        }
    }

    if (lengthSecondStr == ind)
    {
        cout << i;
    }
    else
    {
        cout << "-1";
    }

    system("pause");
}