#include <iostream>
#include <algorithm>
#include<vector>
#include<string>




using namespace std;

int main(){

	cout << "Enter your Password to check Strength:\n";
	string password;
	getline(cin, password);

	//Step3 (LENGTH)
	if (password.length() < 8) { cout << "Password is too short\n"; }
	else if (password.length() <= 12) { cout << "Password length is okay but could be longer\n"; }
	else { cout << "Passowrd is Strong.\n"; }

	//step4 (CHECK CHRACTER TYPES)

	bool hasLower = false;
	bool hasUpper = false;
	bool hasDigit = false;
	bool hasSymbol = false;


	for (char c : password) {
		if (islower(c)) hasLower = true;
		else if (isupper(c))hasUpper = true;
		else if (isdigit(c))hasDigit = true;
		else hasSymbol = true;

	}

	cout << "\nCharacter Analysis:\n" << endl;
	cout << "Contains Lower Case:" << (hasLower ? "Yes" : "No") << "\n";
	cout << "Contains Upper Case:" << (hasUpper ? "Yes" : "No") << "\n";
	cout << "Contains Digits:" << (hasDigit ? "Yes" : "No") << "\n";
	cout << "Contains Symbols:" << (hasSymbol ? "Yes" : "No") << "\n";

	//

	int typeCount = 0;
	if (hasLower)typeCount++;
	if (hasUpper)typeCount++;
	if (hasDigit)typeCount++;
	if (hasSymbol)typeCount++;

	cout << "\nOverall Password Strength\n";
	if (password.length() < 8 || typeCount < 2)cout << "Weak\n";
	else if (typeCount == 2 || typeCount == 3)cout << "Medium\n";
	else if (typeCount==4) cout << "Strong\n";


	vector<string> commonPassword = {
		"password","Pass123","123456789","admin","welcome","mom"
		,"123123","1111111"
	};
	string passwordLower = password;
	transform(passwordLower.begin(), passwordLower.end(), passwordLower._Unchecked_begin(),
		[](unsigned char c) {return tolower(c); });

	bool containCommon = false;
	for (string word : commonPassword) {
		if (passwordLower.find(word) != string::npos) {
			cout << "Warning Password contains common word '" << word << "!\n";
			containCommon = true;
		}
	}
	if (!containCommon) {
		cout << "No common weak words found in password\n";

	}

	cout << "\nSuggestion to improve password:\n";
	if (!hasLower)cout << "-Add lower case letters\n";
	if (!hasUpper)cout << "-Add Upper case letters\n";
	if (!hasDigit)cout << "-Add numbers\n";
	if (!hasSymbol)cout << "-Add Symbols e.g (&,%,#,@,etc)\n";
	if (password.length() < 12)cout << "-Increase Password Length to atleast 12 characters\n";
	if (containCommon)cout << "-Avoid using Common words\n";



	return 0;

	
	
}


