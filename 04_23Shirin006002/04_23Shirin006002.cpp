#include <iostream>
using namespace std;

class person {
protected:
    int id;
    int dayofb;
    int numbpass;
    string firstname;
    string secondname;
    string inf;

public:
    person(int id, int dayofb, int numbpass, const string firstname, const string secondname, const string inf)
        : id(id), dayofb(dayofb), numbpass(numbpass), firstname(firstname), secondname(secondname), inf(inf) {}

    void set_id(int id) { this->id = id; }
    void set_day_of_birthday(int dayofb) { this->dayofb = dayofb; }
    void set_passport_number(int numbpass) { this->numbpass = numbpass; }
    void set_first_name(string firstname) { this->firstname = firstname; }
    void set_second_name(string secondname) { this->secondname = secondname; }
    void set_information(string inf) { this->inf = inf; }

    int get_id() const { return id; }
    int get_day_of_birthday() const { return dayofb; }
    int get_passport_number() const { return numbpass; }
    string get_first_name() const { return firstname; }
    string get_second_name() const { return secondname; }
    string get_information() const { return inf; }
};

class user2 : public person {
public:
    user2(int id, int dayofb, int numbpass, const string firstname, const string secondname, const string inf,
        const string school, const string spec, const string group)
        : person(id, dayofb, numbpass, firstname, secondname, inf), school(school), spec(spec), group(group) {}

    void Setschool(string newschool) {
        this->school = newschool;
    }
    void Setspec(string newspec) {
        this->spec = newspec;
    }
    void Setgroup(string newgroup) {
        this->group = newgroup;
    }

    string Getschool() const { return school; }
    string Getspec() const { return spec; }
    string Getgroup() const { return group; }

private:
    string school;
    string spec;
    string group;
};
int main() {
    user2 myUser(1, 10, 12345, "John", "Doe", "Additional Info", "SchoolName", "Specialization", "Group");

    cout << "User ID: " << myUser.get_id() << endl;
    cout << "User First Name: " << myUser.get_first_name() << endl;
    cout << "User School: " << myUser.Getschool() << endl;


    myUser.set_id(2);
    myUser.Setschool("NewSchoolName");

    cout << "Updated User ID: " << myUser.get_id() << endl;
    cout << "Updated User School: " << myUser.Getschool() << endl;
    return 0;
}





