#include <iostream>
using namespace std;

class Result
{
public:
	int rollNumber;
	int marks[5];

	Result()
	{
		rollNumber = 0;
		for (int i = 0; i < 5; i++) marks[i] = 0;
	}

	Result(int roll, int a, int b, int c, int d, int e)
	{
		rollNumber = roll;
		marks[0] = a; marks[1] = b; marks[2] = c;
		marks[3] = d; marks[4] = e;
	}

	int total() const
	{
		int sum = 0;
		for (int i = 0; i < 5; i++) sum += marks[i];
		return sum;
	}

	void compareTotal(const Result &other) const
	{
		if (total() > other.total())
			cout << "Roll number " << rollNumber << " has higher marks.\n";
		else if (total() < other.total())
			cout << "Roll number " << other.rollNumber << " has higher marks.\n";
		else
			cout << "Both students have equal marks.\n";
	}

	void display() const
	{
		cout << "Roll Number: " << rollNumber << "\n";
		cout << "Total Marks: " << total() << "\n";
	}
};

Result topper(Result first, Result second, Result third)
{
	Result best = first;
	if (second.total() > best.total()) best = second;
	if (third.total() > best.total()) best = third;
	return best;
}

Result applyGrace(Result student)
{
	int used = 0;
	for (int i = 0; i < 5; i++)
	{
		if (student.marks[i] < 40 && used < 20)
		{
			int grace = 40 - student.marks[i];
			if (grace > 5) grace = 5;
			if (grace > 20 - used) grace = 20 - used;
			student.marks[i] += grace;
			used += grace;
		}
	}
	return student;
}

int main()
{
	Result student1(101, 75, 82, 68, 90, 77);
	Result student2(102, 88, 70, 79, 85, 80);
	Result student3(103, 65, 72, 38, 76, 81);

	student1.compareTotal(student2);

	Result best = topper(student1, student2, student3);
	cout << "\nTopper:\n";
	best.display();

	Result updated = applyGrace(student3);
	cout << "\nAfter grace marks:\n";
	updated.display();
	return 0;
}
