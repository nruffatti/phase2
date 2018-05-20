#include "staffmember.h"
#include <string>

using namespace std;

StaffMember::StaffMember() {
	name = "";
	title = "";
	ID = 0;
	bossID = 0;
}

StaffMember::StaffMember(const StaffMember& orig) {
	name = orig.name;
	title = orig.title;
	ID = orig.ID;
	bossID = orig.bossID;
}

StaffMember::StaffMember(string name, string title, int ID, int bossID) {
	this->name = name;
	this->title = title;
	this->ID = ID;
	this->bossID = bossID;
}

string StaffMember::getName() {
	return name;
}

string StaffMember::getTitle() {
	return title;
}

int StaffMember::getID() {
	return ID;
}

int StaffMember::getBossID() {
	return bossID;
}
