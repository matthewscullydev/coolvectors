#include<string>
#include<iostream>
#include<vector>

using namespace std;

class NoodleReview {
private:
	int reviewnum;
	string brand;
	string variety;
	string style;
	string country;
	string topten;
	double stars;


public:
	void display_noodle_reviews(std::vector<NoodleReview> obj);
	friend string assemble_noodle_review(NoodleReview& noodle_r);
	int get_review_number();
	string get_brand();
	string get_style();
	string get_country();
	double get_stars();
	string get_top_ten();

};


class FileIO {
public:
	virtual vector<NoodleReview> read_from_file(string file_name) = 0;

	// As described by the method name, you will open a file and read data, and then return a vector of NoodleReview objects



	virtual int write_to_file(string file_name, vector<NoodleReview> input_data) = 0;

	// return of 0 means success, and return 1 or greater means some failure.

	// For now, return 0 (we'll assume that any write is okay)

};

class IORunner : public FileIO {
	vector<NoodleReview> read_from_file(string file_name) {

	};

	int write_to_file(string file_name, vector<NoodleReview> input_data) {

	};

};


//if a string has a newline character at the end of the line then it includes all 6 fields
//otherwise no topten field





void NoodleReview::display_noodle_reviews(vector<NoodleReview> obj) {

	//this method will call a friend method from the noodlereview class

	// method to call is std::string assemble_noodle_review(NoodleReview& noodle_r);

	// to call assemble_noodle function we need a reference to a noodle object
	// 
	// we can chekc if the vector is empty then
	// we can pass in the reference to the first object of the vector

	// this will call the friend method which access the private variables of the obj and prints them

};

string assemble_noodle_review(NoodleReview& noodle_r) {
	string str = "hi";
	return str;
	//this is a friend method which has access to the private values of the noodlereview reference object
	// objective is to print all values as a string
};


int main() {

	return 0;
}