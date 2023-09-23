#include <iostream>
#include <string>
using namespace std;

class Bus
{
private:
    string busNumber;
    string owner;
    int capacity;

public:
    Bus()
    {
        busNumber = "";
        owner = "";
        capacity = 0;
    }
    Bus(string bus_no, string name)
    {

        busNumber = bus_no;
        owner = name;
        capacity = 0;
    }

    Bus(Bus &obj)
    {
        busNumber = obj.busNumber;
        owner = obj.owner;
        capacity = obj.capacity;
    }
    ~Bus()
    {
        cout << "Destructor executed..." << endl;
    }

    void input(string bus_no, string name, int cpa)
    {

        busNumber = bus_no;
        owner = name;
        capacity = cpa;
    }

    void print()
    {

        cout << "License no. is : " << busNumber << endl;
        cout << "Owner name is : " << owner << endl;
        cout << "Capacity is " << capacity << endl;
    }

    void setbusNumber(string bus_no)
    {
        busNumber = bus_no;
    }

    void setOwner(string name)
    {
        owner = name;
    }
    void setCapacity(int cpa)
    {
        capacity = cpa;
    }

    string getbusNumber()
    {
        return busNumber;
    }
    string getOwner()
    {
        return owner;
    }
    int getCapacity()
    {
        return capacity;
    }

    void getBus()
    {
        string bus_no, name;
        int cpa;
        cout << "Enter license: ";
        getline(cin, bus_no);
        cout << "Enter owner: ";      
        getline(cin, name);
        cout << "Enter capacity: ";
        cin >> cpa;

        busNumber = bus_no;
        owner = name;
        capacity = cpa;
    }
    void setBus(string bus_no, string name, int cpa)
    {
        busNumber = bus_no;
        owner = name;
        capacity = cpa;
    }
    void putBus()
    {
        cout << busNumber;
        cout << " \t" << owner;
        cout << "\t " << capacity;
        cout << endl;
    }

    void book()
    {
        capacity++;
    }
    void cancel()
    {
        capacity--;
    }
};

int main()
{
    Bus b1;
    b1.print();
    b1.getBus();
    b1.print();


    return 0;
}