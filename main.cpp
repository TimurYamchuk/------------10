#include <iostream>
#include <cstring>

using namespace std;

class Person {
protected:
    char* name;
    int age;

public:
    Person() : name(nullptr), age(0) {}
    Person(const char* n, int a) : age(a) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void Print() {
        cout << "Name: " << name << "\tAge: " << age << "\t";
    }

    void Input() {
        char buff[20];
        cout << "Enter Name: ";
        cin.getline(buff, 20);
        delete[] name;
        name = new char[strlen(buff) + 1];
        strcpy(name, buff);
        cout << "Enter age: ";
        cin >> age;
    }

    const char* GetName() const {
        return name;
    }

    void SetName(const char* n) {
        delete[] name;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    int GetAge() const {
        return age;
    }

    void SetAge(int a) {
        age = a;
    }

    ~Person() {
        delete[] name;
        cout << "Person Destructor\n";
    }
};

class Student : public Person {
    char* university;

public:
    Student() : university(nullptr) {}
    Student(const char* n, int a, const char* Univer) : Person(n, a) {
        university = new char[strlen(Univer) + 1];
        strcpy(university, Univer);
    }

    ~Student() {
        delete[] university;
        cout << "Student Destructor\n";
    }

    const char* GetUniversity() const {
        return university;
    }

    void SetUniversity(const char* Univer) {
        delete[] university;
        university = new char[strlen(Univer) + 1];
        strcpy(university, Univer);
    }

    void Input(const char* Univer) {
        delete[] university;
        university = new char[strlen(Univer) + 1];
        strcpy(university, Univer);

        Person::Input();
    }

    void Print() {
        cout << "Name: " << GetName() << "\tAge: " << GetAge() << "\t";
        Person::Print();
        cout << "University: " << university << endl;
    }
};

class Teacher : public Person {
    char* school;
    char* subject;
    int salary;

public:
    Teacher() : school(nullptr), subject(nullptr), salary(0) {}
    Teacher(const char* n, int a, const char* School, const char* Subject, int sal) : Person(n, a), salary(sal) {
        school = new char[strlen(School) + 1];
        strcpy(school, School);
        subject = new char[strlen(Subject) + 1];
        strcpy(subject, Subject);
    }

    ~Teacher() {
        delete[] school;
        delete[] subject;
        cout << "Teacher Destructor\n";
    }

    const char* GetSchool() const {
        return school;
    }

    void SetSchool(const char* School) {
        delete[] school;
        school = new char[strlen(School) + 1];
        strcpy(school, School);
    }

    const char* GetSubject() const {
        return subject;
    }

    void SetSubject(const char* Subject) {
        delete[] subject;
        subject = new char[strlen(Subject) + 1];
        strcpy(subject, Subject);
    }

    int GetSalary() const {
        return salary;
    }

    void SetSalary(int sal) {
        salary = sal;
    }

    void Input(const char* School) {
        delete[] school;
        school = new char[strlen(School) + 1];
        strcpy(school, School);

        Person::Input();
    }

    void Input(const char* Subject) {
        delete[] subject;
        subject = new char[strlen(Subject) + 1];
        strcpy(subject, Subject);

        Person::Input();
    }

    void Print() {
        cout << "Name: " << GetName() << "\tAge: " << GetAge() << "\t";
        Person::Print();
        cout << "School: " << school << "\tSubject: " << subject << "\tSalary: " << salary << endl;
    }
};

class Driver : public Person {
    char* color;
    char* number;

public:
    Driver() : color(nullptr), number(nullptr) {}
    Driver(const char* n, int a, const char* Color, const char* Number) : Person(n, a) {
        color = new char[strlen(Color) + 1];
        strcpy(color, Color);
        number = new char[strlen(Number) + 1];
        strcpy(number, Number);
    }

    ~Driver() {
        delete[] color;
        delete[] number;
        cout << "Driver Destructor\n";
    }

    const char* GetColor() const {
        return color;
    }

    void SetColor(const char* Color) {
        delete[] color;
        color = new char[strlen(Color) + 1];
        strcpy(color, Color);
    }

    const char* GetNumber() const {
        return number;
    }

    void SetNumber(const char* Number) {
        delete[] number;
        number = new char[strlen(Number) + 1];
        strcpy(number, Number);
    }

    void Input(const char* Color) {
        delete[] color;
        color = new char[strlen(Color) + 1];
        strcpy(color, Color);

        Person::Input();
    }

    void Input(const char* Number) {
        delete[] number;
        number = new char[strlen(Number) + 1];
        strcpy(number, Number);

        Person::Input();
    }

    void Print() {
        cout << "Name: " << GetName() << "\tAge: " << GetAge() << "\t";
        Person::Print();
        cout << "Car color: " << color << "\tNumber license: " << number << endl;
    }
};

class Doctor : public Person {
    char* speciality;
    int experience;
    bool family;

public:
    Doctor() : speciality(nullptr), experience(0), family(false) {}
    Doctor(const char* n, int a, const char* Spec, int Exp, bool fam) : Person(n, a), experience(Exp), family(fam) {
        speciality = new char[strlen(Spec) + 1];
        strcpy(speciality, Spec);
    }

    ~Doctor() {
        delete[] speciality;
        cout << "Doctor Destructor\n";
    }

    const char* GetSpeciality() const {
        return speciality;
    }

    void SetSpeciality(const char* Spec) {
        delete[] speciality;
        speciality = new char[strlen(Spec) + 1];
        strcpy(speciality, Spec);
    }

    int GetExperience() const {
        return experience;
    }

    void SetExperience(int Exp) {
        experience = Exp;
    }

    bool GetFamily() const {
        return family;
    }

    void SetFamily(bool fam) {
        family = fam;
    }

    void Input(const char* Spec) {
        delete[] speciality;
        speciality = new char[strlen(Spec) + 1];
        strcpy(speciality, Spec);

        Person::Input();
    }

    void Print() {
        cout << "Name: " << GetName() << "\tAge: " << GetAge() << "\t";
        Person::Print();
        cout << "Speciality: " << speciality << "\tExperience: " << experience << "\tFamily: " << "Family Doctor:" << family << endl;
    }
};

int main() {
    Student obj("Irina", 18, "ITStep");
    obj.Print();
    obj.Input("Student");
    obj.Print();

    Teacher t("Kristina", 35, "High School", "Math", 2000);
    t.Print();
    t.Input("School");
    t.Print();

    Driver d("Denis", 30, "Black", "1243-4567-78910");
    d.Print();
    d.Input("Car");
    d.Print();

    Doctor doc("Dima", 40, "Surgeon", 10, true);
    doc.Print();
    doc.Input("Family Doctor");
    doc.Print();

    return 0;
}
