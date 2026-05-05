#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Record
{
private:
    T1 data1;
    T2 data2;

public:
    void setData(T1 d1, T2 d2)
    {
        data1 = d1;
        data2 = d2;
    }

    void display()
    {
        cout << "First Value: " << data1 << endl;
        cout << "Second Value: " << data2 << endl;
    }
};

int main()
{
    // int + double
    Record<int, double> student1;

    student1.setData(101, 3.75);

    cout << "Student Record 1:" << endl;
    student1.display();

    cout << endl;

    // string + int
    Record<string, int> student2;

    student2.setData("Ahsen", 20);

    cout << "Student Record 2:" << endl;
    student2.display();

    return 0;
}
