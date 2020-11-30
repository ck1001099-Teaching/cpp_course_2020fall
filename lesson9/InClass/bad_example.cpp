
int main(){

	vector<string> bookName;
	vector<string> bookAuthor;
	vector<string> bookISBN;
	vector<double> bookPrice;

	string name, author, ISBN;
	double price;

	while (cin >> cmd){
		if (cmd == -1){
			break;
		} else if (cmd == 0){
			cin >> name >> author >> ISBN >> price;
			bookName.push_back(name);
			bookAuthor.push_back(author);
			bookISBN.push_back(ISBN);
			bookPrice.push_back(price);
		} else (cmd == 1){
			for (int i = 0 ; i < bookName.size() ; i++){
				cout << bookName[i] << " " << bookPrice[i] << " " << bookISBN[i] << " " << bookPrice[i] << endl;
			}
		}
	}

	return 0;
}