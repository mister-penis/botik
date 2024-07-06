#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int SIZE = 12;
string genres_global[SIZE] = {"adventures", "action", "comedy", "everyday life", "romance", "drama", "fiction", "fantasy", "mysticism", "detective", "thriller", "psychology"};
                             // 0 пригоди 1 бойовик 2 комедія 3 повсякдненість 4 романтика 5 драма 6 фантастика 7 феттезі 8 містика 9 детектив 10 трілер 11 психологія 
int vibor;

struct anime {
	set<string> genres;
	string name;
	string author;
	int year_of_release;

	bool operator<(const anime& other) const {
		return name < other.name;
	}
};


anime pot1() {
	anime inp;
	inp.genres = { genres_global[6],  genres_global[5], genres_global[1] };
	inp.name = "Naruto";
	inp.author = "Masasi_Kishimoto";
	inp.year_of_release = 2002;
	return inp;
}
anime pot2() {
	anime inp;
	inp.genres = { genres_global[0],  genres_global[2], genres_global[7] };
	inp.name = "KonoSuba";
	inp.author = "Natsume_Akatsuki";
	inp.year_of_release = 2017;
	return inp;
}
anime pot3() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[7]};
	inp.name = "Kaguya_sama_Love_is_War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}
anime pot4() {
	anime inp;
	inp.genres = { genres_global[0],  genres_global[5], genres_global[4], genres_global[11] };
	inp.name = "Attack_on_Titan";
	inp.author = "Isayama Hajime";
	inp.year_of_release = 2013;
	return inp;
}
anime pot5() {
	anime inp;
	inp.genres = { genres_global[11],  genres_global[10], genres_global[9], genres_global[5] };
	inp.name = "Death_note";
	inp.author = "Tsugumi Oba";
	inp.year_of_release = 2006;
	return inp;
}
anime pot6() {
	anime inp;
	inp.genres = { genres_global[1],  genres_global[7], genres_global[5]};
	inp.name = "Jujutsu_Kaisen";
	inp.author = "Gage Akutami";
	inp.year_of_release = 2019;
	return inp;
}
anime pot7() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3]};
	inp.name = "Grand_Blue_Dreaming";
	inp.author = "Kenji Inoue";
	inp.year_of_release = 2018;
	return inp;
}
anime pot8() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[6], genres_global[9], genres_global[8] };
	inp.name = "Suzumiya_Haruhi";
	inp.author = "Tanigawa Nagaru";
	inp.year_of_release = 2006;
	return inp;
}
anime pot9() {
	anime inp;
	inp.genres = { genres_global[0], genres_global[1], genres_global[2], genres_global[7]};
	inp.name = "One_Piece";
	inp.author = "Eiichiro Oda";
	inp.year_of_release = 1999;
	return inp;
}
anime pot10() {
	anime inp;
	inp.genres = {genres_global[3], genres_global[4], genres_global[2]};
	inp.name = "Love_Chunibyo_&_Other_Delusions";
	inp.author = "Thoraco";
	inp.year_of_release = 2012;
	return inp;
}

anime pot11() {
	anime inp;
	inp.genres = { genres_global[8],  genres_global[10], genres_global[11]};
	inp.name = "Another";
	inp.author = "Yukito_Ayatsuza";
	inp.year_of_release = 2012;
	return inp;
}
/*anime pot12() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}*/
anime pot12() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[1], genres_global[6]};
	inp.name = "My_Hero_Academia";
	inp.author = "Kohei_Horikosa";
	inp.year_of_release = 2016;
	return inp;
}
anime pot13() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Sama_Taimu_Renda";
	inp.author = "Yasuki Tanaka";
	inp.year_of_release = 2021;
	return inp;
}
/*anime pot15() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}
anime pot16() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}
anime pot17() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}
anime pot18() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}
anime pot19() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}
anime pot20() {
	anime inp;
	inp.genres = { genres_global[2],  genres_global[3], genres_global[4], genres_global[11] };
	inp.name = "Kaguya-sama: Love is War";
	inp.author = "Shinta Sakayama";
	inp.year_of_release = 2019;
	return inp;
}*/




void poshuk(vector<anime> a) {
	string user_name;
	cout << "replace ' ' with '_'";
	cout << "enter name: ";
	cin >> user_name;

	bool found = false;
	for (const anime& i : a) {
		if (i.name == user_name) {
			found = true;
			cout << i.name <<"\n" << "author: " << i.author << " year of release : " << i.year_of_release << "\n";
			break;
		}
	}
	if (!found) {
		cout << "can't find :(\n";
	}
}
void vihod(vector<anime> a) {
	int user_ganer;
	cout << "enter year of release: ";
	cin >> user_ganer;

	bool found = false;
	for (const anime& i : a) {
		if (i.year_of_release == user_ganer) {
			found = true;
			cout << i.name << "\n" << "author: " << i.author << " year of release : " << i.year_of_release << "\n";
		}
	}
	if (!found) {
		cout << "can't find :(\n";
	}
}


int main()
{
	vector<anime> animes;
	animes.push_back(pot1());
	animes.push_back(pot2());
	animes.push_back(pot3());
	animes.push_back(pot4());
	animes.push_back(pot5());
	animes.push_back(pot6());
	animes.push_back(pot7());
	animes.push_back(pot8());
	animes.push_back(pot9());
	animes.push_back(pot10());
	animes.push_back(pot11());
	animes.push_back(pot12());
	animes.push_back(pot13());
	//animes.push_back(pot14());
/*	animes.push_back(pot15());
	animes.push_back(pot16());
	animes.push_back(pot17());
	animes.push_back(pot18());
	animes.push_back(pot19());
	animes.push_back(pot20());*/





	cout << "I'm a dumb anime search bot\n";
	cout << "enter the desired search method\n";
	cout << "1 genres\n";
	cout << "2 name\n";
	cout << "3 year of release\n";
	cout << ": ";
	cin >> vibor;
	if (vibor == 1) {
		set<string>* tim_chas = new set<string>;


		cout << "1 " << genres_global[0] << "\n";
		cout << "2 " << genres_global[1] << "\n";
		cout << "3 " << genres_global[2] << "\n";
		cout << "4 " << genres_global[3] << "\n";
		cout << "5 " << genres_global[4] << "\n";
		cout << "6 " << genres_global[5] << "\n";
		cout << "7 " << genres_global[6] << "\n";
		cout << "8 " << genres_global[7] << "\n";
		cout << "9 " << genres_global[8] << "\n";
		cout << "10 " << genres_global[9] << "\n";
		cout << "11 " << genres_global[10] << "\n";
		cout << "12 " << genres_global[11] << "\n";
		cout << "0 exsit" << "\n";

		for ( ; ; ) {
			cout << "enter the desired genre : ";
			cin >> vibor;
			if (vibor == 0) {
				break;
			}
			if (vibor > 0 && vibor <= SIZE) {
				tim_chas->insert(genres_global[vibor - 1]);
			}
			else {
				cout << "error\n";
			}
		}

		cout << "save recommendations in.txt format ?\n";
		cout << "1 yes\n";
		cout << "2 no\n";
		cin >> vibor;
		if (vibor == 1) {
			string name_fale;
			cout << "enter name fail: ";
			cin >> name_fale;
			ofstream fail(name_fale + ".txt");

			for (const anime& i : animes) {
				for (const string& k : *tim_chas) {
					if (i.genres.find(k) != i.genres.end()) {
						cout << "I can recommend: " << i.name << " author: " << i.author << " year of release : " << i.year_of_release << "\n";
						fail << "I can recommend: " << i.name << " author: " << i.author << " year of release : " << i.year_of_release << "\n";
					}
				}
			}

		}

		else if(vibor == 2) {
			for (const anime& i : animes) {
				for (const string& k : *tim_chas) {
					if (i.genres.find(k) != i.genres.end()) {
						cout << "I can recommend: " << i.name << " author: " << i.author << " year of release : " << i.year_of_release << "\n";
					}
				}
			}
		}

		else {
			cout << "error";
		}
	}

	else if (vibor == 2) {
		poshuk(animes);
	}
	else if (vibor == 3) {
		vihod(animes);
	}
	else {
		cout << "error";
	}
}

