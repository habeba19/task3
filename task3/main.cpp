#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int classs;
    int marks;
    int roll_num;
public:
    student() {}
    student(string name,int classs,int marks,int roll_num)
    {
        this->classs= classs;
        this->marks= marks;
        this->roll_num= roll_num;
        this->name=name;
    }
    void cal_grade(int marks)
    {

        if (marks >= 90)
        {
            std::cout << "A" << std::endl;
        }
        else if (marks >= 80)
        {
            std::cout << "B" << std::endl;
        }
        else if (marks >= 70)
        {
            std::cout << "C" << std::endl;
        }
        else
        {
            std::cout << "F" << std::endl;
        }
    }

    void display()
    {
        string grade;
        cout<<"inf student : " <<endl;
        cout<<"name : "<<name<<endl;
        cout<<"class : "<<classs<<endl;
        cout<<"roll num : "<<roll_num<<endl;
        cout<<" grade : " << grade <<endl;
    }
};
//-------------------------------
class date
{
private:
    int day;
    int month;
    int year;

public:
    date() {}; // default constructor
    date(int day, int month, int year)   // constructor with arguments
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void set_day(int day)
    {
        this->day = day;
    }

    void set_month(int month)
    {
        this->month = month;
    }

    void set_year(int year)
    {
        this->year = year;
    }

    int get_day()
    {
        return day;
    }

    int get_month()
    {
        return month;
    }

    int get_year()
    {
        return year;
    }

    bool is_valid()
    {
        if (month < 1 || month > 12)
        {
            return false;
        }
        if (day < 1 || day > 31)
        {
            return false;
        }
        if (month == 2)
        {
            if (day > 28)
            {
                return false;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                return false;
            }
        }
        return true;
    }

    void display()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};
//-----------------------------
class Employee {
private:
    string name;
    int employeeID;
    float salary;

public:
    Employee(string name, int employee_ID, float salary) {
    this->name = name;
    this->employeeID = employee_ID;
    this->salary = salary;
}

    float get_Salary() {
        return salary;
    }

    void display() {
        cout << "Name: " << name << std::endl;
        cout << "Employee ID: " << employeeID << std::endl;
        cout << "Salary: " << salary << std::endl;
    }

    void cal_Salary(float performance) {
        if (performance >= 90) {
            salary *= 1.1;
        } else if (performance >= 80) {
            salary *= 1.05;
        } else if (performance >= 70) {
            salary *= 1.0;
        } else {
            salary *= 0.9;
        }
    }
};
//----------------------------
class Shape {
protected:
    int width;
    int height;
public:
    Shape(){};
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    virtual double area() = 0; // pure virtual function
};

class Triangle : public Shape {
public:
    Triangle(){};
    Triangle(int w, int h) : Shape(w, h) {}
    double area() {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(){};
    Rectangle(int w, int h) : Shape(w, h) {}
    double area() {
        return width * height;
    }
};
int main()
{
    student s1("ahmed", 12, 95, 888);
    s1.display();
    s1.cal_grade(95);
    cout<<"----------------"<<endl;
    date d1(6, 9, 2024);
    d1.display();
    cout<<"----------------"<<endl;
    Employee employee("hazoma", 1, 50000.0);
    employee.display();
    employee.cal_Salary(85.0);
    employee.display();
    cout<<"----------------"<<endl;
    Triangle t(5, 6);
    Rectangle r(4, 5);

    cout << "Triangle area: " << t.area() << endl;
    cout << "Rectangle area: " << r.area() << endl;

    return 0;
}

