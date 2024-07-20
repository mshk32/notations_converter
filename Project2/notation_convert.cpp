#include "notation_convert.h"


string f10_t2(const string& snum) {
	string res;
	for (int i = 0; i < snum.length(); ++i) {
		if (!isdigit(snum[i])) {
			return "Caught Invalid Argument Exception\n";
		}
	}
	int number = stoi(snum); 
	while (number > 0) {
		res += to_string(number % 2);
		number -= number % 2;
		number /= 2;
	}
	reverse(res.begin(), res.end());
	
	return res;
}

string f10_t8(const string& snum) {
	string res;
	for (int i = 0; i < snum.length(); ++i) {
		if (!isdigit(snum[i])) {
			return "Caught Invalid Argument Exception\n";
		}
	}
	int number = stoi(snum);
	while (number > 0) {
		res += to_string(number % 8);
		number -= number % 8;
		number /= 8;
	}
	reverse(res.begin(), res.end());

	return res;
}

string f10_t16(const string& snum) {
	string res;
	for (int i = 0; i < snum.length(); ++i) {
		if (!isdigit(snum[i])) {
			return "Caught Invalid Argument Exception\n";
		}
	}
	int number = stoi(snum);
	while (number > 0) {
		if (number % 16 < 10) {
			res += to_string(number % 16);
		}
		else {
			res += static_cast<char>(number % 16 + 55);
		}
		number -= number % 16;
		number /= 16;
	}
	reverse(res.begin(), res.end());

	return res;
}

string f2_t10(const string& snum) {
	int res = 0;

	for (int i = 0; i < snum.length(); ++i){
		if (snum[i] != '0' && snum[i] != '1') {
			return "Caught Invalid Argument Exception\n";
		}
	}

	for (int i = snum.length() - 1, j = 0; i >= 0; --i, ++j) {
		int digit = snum[i] - '0';
		res += digit * pow(2, j);
	}

	return to_string(res);
}

string f8_t10(const string& snum) {
	int res = 0;

	for (int i = 0; i < snum.length(); ++i) {
		if (snum[i] > 55 || snum[i] < 48) {
			return "Caught Invalid Argument Exception\n";
		}
	}

	for (int i = snum.length() - 1, j = 0; i >= 0; --i, ++j) {
		int digit = snum[i] - '0';
		res += digit * pow(8, j);
	}

	return to_string(res);
}

string f16_t10(const string& snum) {
	int res = 0;

	for (int i = 0; i < snum.length(); ++i) {
		if (snum[i] > 70 || snum[i] < 48 || (snum[i] > 57 && snum[i] < 65)) {
			return "Caught Invalid Argument Exception\n";
		}
	}

	for (int i = snum.length() - 1, j = 0; i >= 0; --i, ++j) {
		int digit;
		if (!isdigit(snum[i])) {
			digit = snum[i] - 55;
		}
		else {
			digit = snum[i] - '0';
		}
		res += digit * pow(16, j);
	}

	return to_string(res);
}

