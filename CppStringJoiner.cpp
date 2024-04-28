//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector <std::string> a = { "this","is","an","example"};
    char delimiter = ' ';
    std::string result = "";
    for (int i = 0; i < a.size(); ++i)
    {
        if (i != 0)
            result += delimiter;
        result += a[i];
    }
    std::cout << result;

    return 0;
}

