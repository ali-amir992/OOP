#include <string>
#include <iostream>
using namespace std;

class Faculty
{

private:
    int id;
    string firstName;
    string lastName;
    string qualification;
    float salary;

public:
    //***********Accessors and Mutators****************

    void setId(int n)
    {
        if (n >= 1001 && n <= 1065)
            id = n;
        else
            id = 0;
    }
    int getId()
    {
        return id;
    }
    void setfirstName(string s)
    {
        firstName = s;
    }
    string getfirstName()
    {

        return firstName;
    }
    void setlastName(string s)
    {
        lastName = s;
    }
    string getlastName()
    {

        return lastName;
    }
    void setQualification(string s)
    {
        qualification = s;
    }
    string getQualification()
    {
        return qualification;
    }
    void setSalary(float s)
    {
        if (s >= 20000.00 && s <= 100000.00)
            salary = s;
        else
            salary = -1;
    }
    float getSalary()
    {
        return salary;
    }
    //**************Constructors*******************88

    Faculty(int id, string f_name, string l_name, string ql)
    {
        setId(id);
        setfirstName(f_name);
        setlastName(l_name);
        setQualification(ql);
        salary = -1;
    }

    Faculty(int id, string f_name, string ql)
    {
        setId(id);
        setfirstName(f_name);
        setQualification(ql);
        lastName = "";
        salary = -1;
    }
    Faculty(int id, string f_name, string l_name, string ql, float s)
    {
        setId(id);
        setfirstName(f_name);
        setlastName(l_name);
        setQualification(ql);
        setSalary(s);
    }
    Faculty(const Faculty &obj)
    {

        id = obj.id;
        firstName = obj.firstName;
        lastName = obj.lastName;
        qualification = obj.qualification;
        salary = obj.salary;
    }
//***********Destructors*************
    ~Faculty()
    {
        cout << "Destructor executed...." << endl;
    }

    void set(int id, string f_name, string l_name, string ql, float s)
    {
        setId(id);
        setfirstName(f_name);
        setlastName(l_name);
        setQualification(ql);
        setSalary(s);
    }

//*************Member Functions*******************
    void read()
    {
        int id;
        string f_name, l_name, ql;
        float s;
        cout << "Enter id : ";
        cin >> id;
        cout << "Enter first name : ";
        cin >> f_name;
        cout << "Enter last name : ";
        cin >> l_name;
        cin.ignore();
        cout << "Enter Qualification: ";
        getline(cin, ql);
        cout << "Enter salary: ";
        cin >> s;

        setId(id);
        setfirstName(f_name);
        setlastName(l_name);
        setQualification(ql);
        setSalary(s);
    }
    void write()
    {
        cout<<endl;
        cout << "Id No: " << id << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name : " << lastName << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Salary: " << salary << endl;
        cout<<endl;
    }

    bool isPostGraduate()
    {
        if (qualification == "MS" || qualification == "Phd")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    float getTakeHomeSalary()
    {
        if (salary >= 20000.00)
        {
            float takeSalary;
            takeSalary = salary - (salary * 7 / 100);
            return takeSalary;
        }
        else
            return -1;
    }

    bool isJoined()
    {
        if (salary >= 20000)
            return true;
        else
            return false;
    }
};

int main()
{
    Faculty f1(1011, "Ali", "Amir", "BS", 30000);
    Faculty f2(1012,"Ali","Phd");
    // f2.read();


    f2.write();

    cout<<f2.getTakeHomeSalary()<<endl;
    cout<<f2.isJoined()<<endl;
    cout<<f1.isPostGraduate()<<endl;

 

    
    return 0;
}