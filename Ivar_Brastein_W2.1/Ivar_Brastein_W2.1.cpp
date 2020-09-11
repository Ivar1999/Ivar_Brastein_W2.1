#include <iostream>
#include <string>
using namespace std;






int main() {
	int option;

	do
	{
		int n;
		int l = 5;
		int j = 1;
		int k = 5;
		cout << "Hello, welcome user!\nPlease select one of the options below by typing 0-10.\n\n";
		cout << "0: While-loop 1-100" << endl;
		cout << "1: While-loop 1 to X" << endl;
		cout << "2: For-loop 1-100" << endl;
		cout << "3: For-loop 1 to X" << endl;
		cout << "4: For-loop 100-1" << endl;
		cout << "5: For-loop X to 1" << endl;
		cout << "6: While-loop 5-50 in steps of 5" << endl;
		cout << "7: For-loop 5-50 in steps of 5" << endl;
		cout << "8: Do-While 5-50 in steps of 5" << endl;
		cout << "9: Programming grade" << endl;
		cout << "10: Exit program" << endl;
		cin >> option;
		system("cls");
		switch (option)
		{
		case 0:
			cout << "Hello, let me count 1-100 for you!\n";
			system("pause");
			while (j <= 100)
			{
				cout << j << " ";
				j++;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 1:
			cout << "Hello, how far would you like me to count?\n";
			cin >> n;
			while (j <= n)
			{
				cout << j << " ";
				j++;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 2:
			cout << "Hello, let me count 1-100 for you!\n";
			system("pause");
			for (int i = 1; i <= 100; i++)
			{
				cout << i << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 3:
			cout << "Hello, how far would you like me to count?\n";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{
				cout << i << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 4:
			cout << "Hello, let me count down from 100 for you!\n";
			system("pause");
			for (int j = 100; j > 0; j--)
			{
				cout << j << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 5:
			cout << "Hello, what number would you like me to count down from?\n";
			cin >> n;
			for (int j = n; j > 0; j--)
			{
				cout << j << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 6:
			cout << "Hello, let me count 5-50 in steps of 5 for you!\n";
			system("pause");
			while (l <= 50) {
				cout << l << " ";
				l = k * ++j;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 7:
			cout << "Hello, let me count 5-50 in steps of 5 for you!\n";
			system("pause");
			for (int l = k * j; l <= 50; l = k * ++j)
			{
				cout << l << " ";
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 8:
			cout << "Hello, let me count 5-50 in steps of 5 for you!\n";
			system("pause");
			do
			{
				cout << l << " ";
				l = k * ++j;
			} while (l <= 50);
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		case 9:
			char grade;
			cout << "Hello user.\nWhat grade do you want in Programming 1?\n";
			cin >> grade;
			switch (grade)
			{
			case 'A':
			case 'a':
				cout << "Outstanding\n";
				break;
			case 'B':
			case 'b':
				cout << "Very good\n";
				break;
			case 'C':
			case 'c':
				cout << "Good\n";
				break;
			case 'D':
			case 'd':
				cout << "Some flaws\n";
				break;
			case 'E':
			case 'e':
				cout << "Not very good\n";
				break;
			case 'F':
			case 'f':
				cout << "Fail\n";
				break;
			default:
				cout << "Thats not a grade!";
				break;
			}
			cout << "\n\nPress any button to get back to the meny\n\n";
			break;
		default:
			cout << "Thanks for using the program!\n\nGood bye!";
			break;
		}

		cout << "\n";
		system("pause");
		system("cls");
	} while (option < 10 && option >= 0);

	return 0;
}