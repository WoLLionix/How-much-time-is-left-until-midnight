#include <iostream>

int main()
{
    int inputSecond;
    std::cout << "Enter the time: ";
    std::cin >> inputSecond;

    if (inputSecond < 0)
    {
        std::cout << "Error. Time cannot be less than zero";
    }

    int second, minute, hour, day;
    day = inputSecond / 86400;
    inputSecond %= 86400;

    hour = inputSecond / 3600;  
    inputSecond %= 3600;

    minute = inputSecond / 60;
    second = inputSecond % 60;

    std::cout << "Days: " << day << ", Hours: " << hour << ", Minutes: " << minute << ", Seconds: " << second << std::endl;

    hour = 24 - hour;
    minute = 60 - minute;
    second = 60 - second;

    std::cout << std::endl << "How much time is left until midnight ?\n";
    std::cout <<"Hours: " << hour << ", Minutes: " << minute << ", Seconds: " << second;
}