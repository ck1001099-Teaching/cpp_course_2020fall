#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
	string name;
	string author;
	string ISBN;
	double price;
	int index;
private:
};

class Database{
public:
	Database(){
		ifstream ifs;
		ifs.open("book_data.txt", ios::in);
		if (!ifs){
			return;
		}
		Book b;
		while (ifs >> b.index >> b.name >> b.author
			       >> b.ISBN >> b.price){
			books.push_back(b);
		}
		ifs.close();
	}
	~Database(){
		ofstream ofs;
		ofs.open("book_data.txt", ios::out);
		for (int i = 0 ; i < books.size() ; i++){
			ofs << books[i].index << " "
			    << books[i].name << " "
			    << books[i].author << " "
			    << books[i].ISBN << " "
			    << books[i].price << endl;
		}
		ofs.close();
	}
	void Add(Book b){
		// method 1
		if (books.size() == 0){
			b.index = 0;
		} else {
			b.index = books[books.size()-1].index + 1;
		}
		// method 2
		// int index = 0;
		// while (true){
		// 	bool hasExist = false;
		// 	for (int i = 0 ; i < books.size() ; i++){
		// 		if (index == books[i].index){
		// 			hasExist = true;
		// 		}
		// 	}
		// 	if (!hasExist){
		// 		b.index = index;
		// 		break;
		// 	}
		// 	index = index + 1;
		// }

		books.push_back(b);
	}
	void Remove(int index){
		int removeIndex = -1;
		for (int i = 0 ; i < books.size() ; i++){
			if (books[i].index == index){
				removeIndex = i;
				break;
			}
		}
		if (removeIndex == -1){
			return;
		}
		books.erase(books.begin() + removeIndex);
	}
	void ListAllBooks(){
		for (int i = 0 ; i < books.size() ; i++){
			cout << books[i].index << " "
				 << books[i].name << " "
			     << books[i].author << " "
			     << books[i].ISBN << " "
			     << books[i].price << endl;
		}
	}
private:
	vector<Book> books;
};

class User{
public:
	User(Database* db){
		this->db = db;
	}
	bool Input(){
		// cmd
		// 0 (add a book) name author ISBN price
		// 1 (list all books)
		int cmd;
		cin >> cmd;
		if (cmd == -1){
			return false;
		} else if (cmd == 0){
			Book book;
			cin >> book.name >> book.author
			    >> book.ISBN >> book.price;
			db->Add(book);
		} else if (cmd == 1){
			db->ListAllBooks();
		}
		return true;
	}
private:
	Database* db;
};

int main(){
	
	Database db;

	User u(&db);

	while (u.Input()){
	}

	return 0;
}