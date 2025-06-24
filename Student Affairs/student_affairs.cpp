#include<iostream>
using namespace std;

struct Student {
	string fullName;
	float math, physics, chemistry;
};

float getTotal(const Student& student) {
	return student.chemistry + student.math + student.physics;
}


void main() {
	cout << "Enter number of Students: ";
	int numOfStudents;
	cin >> numOfStudents;

	Student* student = new Student[numOfStudents];

	for (int i = 0; i < numOfStudents; i++) {
		cout << "Enter full name for " << i + 1 << " student: ";
		cin >> student[i].fullName;
		cout << "Enter " << student[i].fullName << "\'s grade in Math:  ";
		cin >> student[i].math;
		cout << "Enter " << student[i].fullName << "\'s grade in Physics:  ";
		cin >> student[i].physics;
		cout << "Enter " << student[i].fullName << "\'s grade in Chemistry:  ";
		cin >> student[i].chemistry;
	}

	float highestTotal = getTotal(student[0]);
	int index = 0;

	for (int i = 1; i < numOfStudents; i++) {
		float total = getTotal(student[i]);
		if (total > highestTotal) {
			highestTotal = total;
			index = i;
		}
	}

	cout << "Top student is: " << student[index].fullName << " with total score: " << highestTotal << endl;

	float topMath = student[0].math;
	int indexMath = 0;

	float topPhysics = student[0].physics;
	int indexPhysics = 0;

	float topChemistry = student[0].chemistry;
	int indexChemistry = 0;

	for (int i = 1; i <= numOfStudents; i++) {
		float math = student[i].math;
		if (math > topMath) {
			topMath = math;
			indexMath = i;
		}
	}

	for (int i = 1; i <= numOfStudents; i++) {
		float physics = student[i].physics;
		if (physics > topPhysics) {
			topPhysics = physics;
			indexPhysics = i;
		}
	}
	for (int i = 1; i <= numOfStudents; i++) {
		float chemistry = student[i].chemistry;
		if (chemistry > topChemistry) {
			topChemistry = chemistry;
			indexChemistry = i;
		}
	}

	cout << "Top student in Math: " << student[indexMath].fullName << " with: " << student[indexMath].math << endl;
	cout << "Top student in Physics: " << student[indexPhysics].fullName << " with: " << student[indexPhysics].physics << endl;
	cout << "Top student in Chemistry: " << student[indexChemistry].fullName << " with: " << student[indexChemistry].chemistry << endl;



	delete[] student;
}