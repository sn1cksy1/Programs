#include <iostream>
#include <vector>
using namespace std;

class Human { 
	protected: string name, gender;
	protected: int birthday;

	public: Human( string n, string g, int year) {
		name = n;
		gender = g;
		birthday = year;
	} 

    public: Human() {
        init();
    }

	public: void init() {
		name = "";
		gender = "";
		birthday = 0;
	}

	public: void inputInfo() {
		cout << "Type name: ";
		cin >> name;
		cout << "Type gender: ";
		cin >> gender;
		cout << "Type birth year: ";
		cin >> birthday;
	}
	
	public: void showInfo() {
	    cout << name << " - " << gender << ", was born in " << birthday; 
	}
};

class Engineer : public Human {
	private: string university, speciality, diplomaType, educationForm, organization;
	private: int finishYear;
	private: float salary;
	private: vector <string> retraining;

	public: Engineer (string name, string gender, int birthday, string u, 
		string s, string dType, string eForm, string org, int fYear, float sal, string ret) : Human(name, gender, birthday) {
		university = u;
		speciality = s;
		diplomaType = dType;
		educationForm = eForm;
		organization = org;
		finishYear = fYear;
		salary = sal;
		retraining.push_back(ret);
	} 

    public: Engineer() : Human() {
        init();
    }
    
	public: void init() {
		university = "";
		speciality = "";
		diplomaType = "";
		educationForm = "";
		organization = "";
		finishYear = 0;
		salary = 0;	
		retraining.reserve(3);
	}
    
    public: void inputInfo() {
        Human::inputInfo();
        cout << "Type university name: ";
        cin >> university;
        cout << "Type speciality name: ";
        cin >> speciality;
        cout << "Type diploma type: ";
        cin >> diplomaType;
        cout << "Type education form: ";
        cin >> educationForm;
        cout << "Type finish year: ";
        cin >> finishYear;
        cout << "Type organization name: ";
        cin >> organization;
        cout << "Type salary per month: ";
        cin >> salary;
    }
    
    public: void showInfo() {
        Human::showInfo();
        cout << "\nGot " << diplomaType << " degree at " << university << " in " << finishYear;
        cout << " for speciality " << speciality << ", education form - " << educationForm << endl;
        cout << "And now working in " << organization << " for " << salary << " dollars per month" << endl;
        cout << "Retraining list: \n";
        showRetraining();
    }
    
    public: void showRetraining() {
        for(int i = 0; i < retraining.size(); i++ ) {
            cout << retraining.at(i) << "\n";
        }
    }

	public: float getYearSalary() {
		return salary * 12;
	}

	public: void addRetraining(string info) {
		retraining.push_back(info);
	}

};

int main() {
    
	Engineer h = Engineer("Jana Kyryliuk", "female", 1999, "IFNTUOG", "Computer engineering", "Bachelor", "distance", "SoftServe", 2020, 2400, "Tester");
    h.showInfo();
    
    h.init();
    h.inputInfo();
    h.addRetraining("Web-developer");
    h.addRetraining("Backend developer");
	h.showInfo();
}