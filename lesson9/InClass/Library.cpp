#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
	string name;
	string author;
	string ISBN;
	double price;
private:
};

class Database{
public:
	void Add(Book b){
		books.push_back(b);
	}
	void ListAllBooks(){
		for (int i = 0 ; i < books.size() ; i++){
			cout << books[i].name << " "
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
	User(Database db){
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
			db.Add(book);
		} else if (cmd == 1){
			db.ListAllBooks();
		}
		return true;
	}
private:
	Database db;
};

int main(){
	
	Database db;

	User u(db);

	while (u.Input()){
	}

	return 0;
}










