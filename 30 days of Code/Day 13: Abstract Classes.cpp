
class MyBook : Book{
  int price;
  public:
    string title;
    string author;
 MyBook(string title_,string author_,int price_) : Book(title_,author_) ,price(price_){

 }
 virtual void display(){
     cout<<"Title: "<<Book::title<<"\n"<<"Author: "<<Book::author<<"\n"<<"Price: "<<price;
 }



};


