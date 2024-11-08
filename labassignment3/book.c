#include <stdio.h>

typedef struct{
  int bookID;
  char title[100];
  char author[100];
  float price;
} book;

book print(book b) {
printf("Book Title: %s\nAuthor: %s\nBook ID: %d\nPrice: $%0.2f\n\n", b.title, b.author, b.bookID, b.price);
}

int main() {

book books[] ={
{1234, "The Great Gatsby","F. Scott Fitzgerald",15.99},
{5678, "To Kill a Mockingbird", "Harper Lee", 12.99},
{4321, "1984", "George Orwell",10.99},
{8765, "Lord of The Flies","William Golding",12.99}
};

for( int i = 0; i < sizeof(books)/sizeof(book); i++){
  print(books[i]);
}


}