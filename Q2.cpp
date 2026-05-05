#include <iostream>
using namespace std;

template <typename T>
class SensorLog
{
private:
    T readings[100];
    int size;

public:
    // Constructor
    SensorLog(T arr[], int s)
    {
        size = s;

        for (int i = 0; i < size; i++)
        {
            readings[i] = arr[i];
        }
    }

    // Function to calculate average
    double getAverage()
    {
        double sum = 0;

        for (int i = 0; i < size; i++)
        {
            sum += readings[i];
        }

        return sum / size;
    }
};

int main()
{
    // Integer readings
    int temp[] = {30, 32, 31, 29};

    SensorLog<int> s1(temp, 4);

    cout << "Average Temperature: "
         << s1.getAverage() << endl;

    // Double readings
    double humidity[] = {45.5, 50.2, 48.7};

    SensorLog<double> s2(humidity, 3);

    cout << "Average Humidity: "
         << s2.getAverage() << endl;

    return 0;
}
