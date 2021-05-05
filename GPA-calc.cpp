include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int i;
    int courseNumber = 0;
    double creditHours = 0, creditHoursTotal = 0;
    double gradePoints = 0, gpa = 0, cgpa = 0;
    char choice, grade, gradePlus;
    string class;
    string cp;
    String honors;
    String ap;

int main(){
   fstream newfile;
   newfile.open("tpoint.txt",ios::out);
   if(newfile.is_open())
      newfile<<"Tutorials point \n";
      newfile.close();
   }
   newfile.open("tpoint.txt",ios::in);
   if (newfile.is_open()){
      string tp;
      while(getline(newfile, tp)){
         cout << tp << "\n";
      }
      newfile.close();
    do {

    cout << "\nHow many courses would you like to factor into your GPA? : ";
    cin >> courseNumber;

    for (i = 0; i < courseNumber; ++i)
    {

        cout << "Grade: ";
        cin >> grade;
        cin.get(gradePlus);
        cout << endl;
	cout << "Class: ";
	cin >> class;

        cout << "\nFor course number " << i+1 << " you entered the following: " << endl;
        cout << "\tGrade: " << grade << gradePlus << endl;

       if (class == 'cp')
		if (grade == 'A' && gradePlus != '-' && gradePlus != '+')
            	gradePoints += 4.00;
        	else if (grade == 'B' || grade == 'b' && gradePlus != '-' && gradePlus != '+')
            	gradePoints += 3.00;
        	else if (grade == 'C' || grade == 'c' && gradePlus != '-' && gradePlus != '+')
            	gradePoints += 2.00;
        	else if (grade == 'D' || grade == 'd' && gradePlus != '-' && gradePlus != '+')
            	gradePoints += 1.00;
        	else if (grade == 'F' || grade == 'f' && gradePlus != '-' && gradePlus != '+')
            	gradePoints += 0.00;
 else if (class == 'honors')
                if (grade == 'A' && gradePlus != '-' && gradePlus != '+')
                gradePoints += 4.00;
                else if (grade == 'B' || grade == 'b' && gradePlus != '-' && gradePlus != '+')
                gradePoints += 3.00;
                else if (grade == 'C' || grade == 'c' && gradePlus != '-' && gradePlus != '+')
                gradePoints += 2.00;
                else if (grade == 'D' || grade == 'd' && gradePlus != '-' && gradePlus != '+')
                gradePoints += 1.00;
                else if (grade == 'F' || grade == 'f' && gradePlus != '-' && gradePlus != '+')
                gradePoints += 0.00;

    }

    gpa = gradePoints / courseNumber;

    cout << "Total number of grade points --- " << gradePoints << endl;
    cout << "GPA: --------------------------- " << gpa << endl;

    cout << "\n\nWould you like to run the program again? (Y/N) ";
    cin >> choice; choice = toupper(choice);

    creditHours = 0, creditHoursTotal = 0;
    gradePoints = 0, gpa = 0, cgpa = 0;

    } while (choice == 'Y');

    cout << "\n\nSee you later alligator :(\n" << endl;

    return 0;
}


