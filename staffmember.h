#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H

#include <string>

using namespace std;

class StaffMember {
	public:
		StaffMember();
		StaffMember(const StaffMember& orig);
		StaffMember(string, string, int, int);

		string getName();
		string getTitle();
		int getID();
		int getBossID();
	private:
		string name, title;
		int ID, bossID;
};

#endif
