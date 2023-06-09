#include <iostream>
#include <cmath>

using namespace std;

//drawing a shape
// int main()
//{

//     cout << "    /|" << endl;
//     cout << "   / |" << endl;
//     cout << "  /  |" << endl;
//     cout << " /   |" << endl;
//     cout << "/____|" << endl;

//     return 0;

// }



//variable
// int main()
//{

//     string characterName = "Peter";
//     int characterAge;
//     characterAge = 25;

//     cout << "There once was a man named " << characterName << endl;
//     cout << "He was " << characterAge << " years old" << endl;

//     characterName = "Matthew";
//     cout << "He liked the name " << characterName << endl;
//     cout << "But he did not like being " << characterAge << endl;

//     return 0;
// }



// Data types
// int main ()
// {
//     char grade = 'A';
//     string phrase = "Giraffe Academy";
//     int age = 25;
//     double gpa = 4.58;
//     bool isMale = true;

//     cout << grade << endl;

//     return 0;
// }



// Working with strings
// int main()
// {
    
//     string phrase = "Giraffe Academy";
//     phrase [1] = 'y';
//     string phrasesubstr;
//     phrasesubstr = phrase.substr (3,4);

//     cout << phrase << endl;
//     cout << phrase.length() << endl;
//     cout << phrase[1] << endl;
//     cout << phrase.find("Academy", 0) << endl;
//     cout << phrase.substr(3, 4) << endl;
//     cout << phrasesubstr << endl;
//     return 0;
// }



//Working with numbers
// int main ()
// {
    // int a = 3;
    // int b = 9;
    // int wnum = 5;
    // double dnum = 5.5;

    // wnum ++; // add 1 to wnum
    // cout << wnum << endl;
    // wnum --; // minus 1 from wnum
    // cout << wnum << endl;
    // wnum += 90; //add 90 to wnum
    // cout << wnum << endl;


    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a / b << endl;
    // cout << a * b << endl;
    // cout << a % b << endl; // Find a remainder


    // cout << pow (2,5) << endl;
    // cout << sqrt (26) << endl;
    // cout << round (2.64444233311) << endl;
    // cout << ceil (2.1) << endl; // round up
    // cout << floor (2.8) << endl; // round down
    // cout << fmax (2.6478, 6/3.5) << endl; // find the maximum number
    // cout << fmin (2.6478, 6/3.5) << endl; // find the minimum number


    // return 0;
// }



// Getting user input
// int main ()
// {
//     int age;

//     cout << "What is your age: ";
//     cin >> age;

//     cout << "You are " << age << " years old" << endl;

//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);

//     cout << "Hello " << name;

//     return 0;
// }



// Building a calculator
// int main ()
// {
//     double num1, num2;

//     cout << "Enter first number: ";
//     cin >> num1;
    
//     cout << "Enter second number: ";
//     cin >> num2;

//     cout << num1 + num2;

//     return 0;
// }



//Building a mad libs game
// int main ()
// {
//     string color, pluralNoun, celebrity;

//     cout << "enter a color: ";
//     getline (cin, color);
//     cout << "enter a plural noun: ";
//     getline (cin, pluralNoun);
//     cout << "enter a celebrity: ";
//     getline (cin, celebrity);

//     cout << "-----------------------------------------------" << endl;

//     cout << "Roses are " << color << endl;
//     cout << pluralNoun << " are violet"<< endl;
//     cout << "I love " << celebrity << endl;

//     return 0;
// }



// Arrays
// int main ()
// {
//     int luckyNums[] = {3, 5, 14, 35, 46, 57, 66, 923};

//     luckyNums[0] = 59;

//     cout << luckyNums[0];

//     return 0;
// }


// Functions

// void sayHi(string name, int age){
//     cout << "Hello " << name << " you are " << age << endl;
// }

// int main () 
// {
//     sayHi ("Mike", 38);
//     sayHi("Tom", 45);
//     sayHi("Michael", 23);
//     sayHi("Jane", 49);
    
    
//     return 0;
// }

//or 

// void sayHi(string name, int age);

// int main ()
// {
    
//    sayHi ("Mike", 38);
//    sayHi("Tom", 45);
//    sayHi("Michael", 23);
//    sayHi("Jane", 49);
//     return 0;
// }

// void sayHi (string name, int age){
//     cout << "Hello " << name << " you are " << age << endl;
// }



// Return statement

// double cube(double num){
//     double result = num * num * num;
//     return result;
// }

// int main ()
// {
//     double answer = cube (5.0);
//     cout << answer;


//     return 0;
// }



//If statement
// int main ()
// {
//     bool isMale = true;
//     bool isTall = false;

//     if(isMale && isTall){               // if(isMale || isTall) OR operator: only one should fit to condition in order to execute the code
//         cout << "You are a tall male";
//     } else if (isMale && !isTall){
//         cout << "You are a short male";
//     } else if (!isMale && isTall){
//         cout << "You are tall but not male";
//     } else {
//         cout << "You are not male and not tall";
//     }

//     return 0;
// }


// More if statements

// int findMax(int num1, int num2, int num3){
//     int result;

//     if(num1 >= num2 && num1 >= num3){
//         result = num1;
//     } else if(num2 >= num1 && num2 >= num3){
//         result = num2;
//     } else {
//         result = num3;
//     }

//     return result;
// }

// int main ()
// {
//     cout << findMax (7, 25, 25);


//     return 0;
// }


// Building a better calculator

// int main () 
// {
//     int num1, num2;
//     char op;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter operator: ";
//     cin >> op;
//     cout << "Enter second number: ";
//     cin >> num2;

//     int result;
//     if (op == '+'){
//         result = num1 + num2;
//     } else if (op == '-'){
//         result = num1 - num2;
//     } else if (op == '/'){
//         result = num1 / num2;
//     } else if (op == '*'){
//         result = num1 * num2;
//     } else {
//         cout << "invalid operator";
//     }

//     cout << result;
    

//     return 0;
// }



// Switch

// string getDayOfTheWeek (int dayNum) {
//     string dayName;

//     switch (dayNum){
//     case 0:
//         dayName = "Sunday";
//         break;
//     case 1:
//         dayName = "Monday";
//         break;
//     case 2:
//         dayName = "Tuesday";
//         break;
//     case 3:
//         dayName = "Wednesday";
//         break;
//     case 4:
//         dayName = "Thursday";
//         break;
//     case 5:
//         dayName = "Friday";
//         break;
//     case 6:
//         dayName = "Saturday";
//         break;
//     default:
//         dayName = "Invalid day number";
//     }


//     return dayName;
// }


// int main () 
// {
//     cout << getDayOfTheWeek (1);
//     return 0;
// }



// string getCharacterOfWord (string x, int aNum){
//     string alpha;

//     switch (aNum)
//     {
//     case 0:
//         alpha = x[0];
//         break;
//     case 1:
//         alpha = x[1];
//         break;
//     case 2:
//         alpha = x[2];
//         break;
//     case 3:
//         alpha = x[3];
//         break;
//     case 4:
//         alpha = x[4];
//         break;
//     case 5:
//         alpha = x[5];
//         break;
//     case 6:
//         alpha = x[6];
//         break;

//     default:
//         cout << "Undefined";
//         break;
//     }



//     return alpha;
// }

// int main (){


//     cout << getCharacterOfWord("Aligator", 3);

//     return 0;
// }



// While loop

// int main (){

//     int index = 1;

//     while(index <= 5){
//         cout << index << endl;
//         index++;
//     }

//     return 0;
// }


// Building a guessing game

// int main (){

//     int secretNum = 7;
//     int guess;
//     int guessCount = 0;
//     int guessLimit = 3;
//     bool outOfGuess = false;

//     while (secretNum != guess && !outOfGuess){
//         if(guessCount < guessLimit){
//         cout << "Guess the Number: ";
//         cin >> guess;
//         guessCount++;
//         } else {
//             outOfGuess = true;
//         }
//     }

//         if (!outOfGuess){
//             cout << "You Won!";
//         } else {
//             cout << "You Lost...";
//         }


    

//     return 0;
// }


// For Loop


// int main () 
// {

    // int index = 1;
    // while (index <= 5){
    //     cout << index << endl;
    //     index++;
    // }

//     int nums [] = {1, 3, 4, 8, 34};
//     for (int i = 1; i < 5; i++){
//         cout << nums[i] << endl;
//     }

//     return 0;
// }


// Exponent function

// int power (int baseNum, int powNum){
//     int result = 1;
//     for(int i = 0; i < powNum; i++){
//         result = result * baseNum;
//     }

//     return result;    
// }

// int main ()
// {
//     cout << power(3, 4);

//     return 0;
// }


// 2d Arrays & Nested loops



// int main (){

// int numberGrid [3][2] = {
//                         {1, 2},
//                         {3, 4},
//                         {5, 6}

//                     };



//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 2; j++){
//             cout << numberGrid[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Comments

/*
int main()
{

    cout << "Comments are fun!"

    return 0;
}
*/


//Pointers

// int main ()
// {
//     int age = 19;
//     int *pAge = &age;
//     double gpa = 2.7;
//     double *pGpa = &gpa;
//     string name = "Mike";
//     string *pName = &name;

//     cout << pAge << endl;
//     cout << pGpa << endl;
//     cout << pName << endl;

//     cout << *pAge << endl;    // dereferencing the pointer (get the value stored in the address)
//     cout << *&gpa << endl;    // another way of deferencing the pointer
//     cout << &*&name << endl;  // get address of the pointer
//     cout << *&*&name << endl; // dereferencing the pointer

    
//     /*
//     cout << "Age: " << &age << endl;
//     cout << "GPA: " << &gpa << endl;
//     cout << "Name: " << &name << endl;
//     */


//     return 0;
// }


// Classes & objects
                            // making data types (Book)
// class Book{                 // blueprint & template & specification
//     public:
//         string title;
//         string author;
//         int pages;
// };


// int main ()
// {
//     Book book1 ();         // object is the actual instance of the specification
//     book1.title = "Harry Potter";
//     book1.author = "J.K. Rowling";
//     book1.pages = 500;
    
//     Book book2 ();
//     book2.title = "Lord of the Rings";
//     book2.author = "Tolkein";
//     book2.pages = 1200;

//     //cout << book1.title << endl;
//     //cout << book2.title << endl;

//     return 0;
// }



// Constructor functions

// class Book{                 // blueprint & template & specification
//     public:
//         string title;
//         string author;
//         int pages;
//         /*
//         Book(){            // constructor functions #1
//            cout << "Object created" << endl;
//         };
//         Book(string name){     // constructor functions #2 (receiving parameter)
//             cout << name << endl;
//         };
//         */
//         Book(string aTitle, string aAuthor, int aPages){  // constructor functions #3 (receving multiples of parameter)
//             title = aTitle;
//             author = aAuthor;
//             pages = aPages;
//         };
//         Book(){
//             title = "no title";
//             author = "no author";
//             pages = 0;
//         };
// };


// int main ()
// {
//     /*
//     Book book1 ("Harry Potter");         // object is the actual instance of the specification
//     book1.title = "Harry Potter";
//     book1.author = "J.K. Rowling";
//     book1.pages = 500;
    
//     Book book2 ("Lord of the Rings");
//     book2.title = "Lord of the Rings";
//     book2.author = "Tolkein";
//     book2.pages = 1200;
//     */

//     Book book3 ("Hunger Games", "Suzzane Collins", 367);

//     Book book4;

//     cout << book4.title;

//     //cout << book3.pages << endl;
//     //cout << book3.author << endl;
//     //cout << book3.title << endl;



//     //cout << book1.title << endl;
//     //cout << book2.title << endl;

//     return 0;
// }


//Object functions

// class Student{
//     public:
//     string name;
//     string major;
//     double gpa;
//     Student (string aName, string aMajor, double aGpa){
//         name = aName;
//         major = aMajor;
//         gpa = aGpa;
//     }

//     bool hasHonors(){
//         if(gpa >= 3.5){
//             return true;
//         }
//         return false;
//     }

// };


// int main ()
// {
//     Student student1("Jim", "Business", 2.4);
//     Student student2("John", "CS", 4.3);


//     cout << student2.hasHonors () << endl;


//     return 0;
// }



//Getters & setters

/*
class Movie{
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating (aRating);
        }


        void setRating (string aRating){
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating (){
            return rating;
        }

};

int main ()
{
    Movie movie1("Avengers", "Steven", "PG-13");

    //movie1.setRating("Dog");

    cout << movie1.getRating();
    



    return 0;
}
*/


//Inheritance

/*
class Chef {  //Super class
    public:
        void makeChicken () {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad () {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish () {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{  //subclass
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }

        void makeSpecialDish () {
            cout << "The chef makes chicken parm" << endl;  // overriding previous specialDish
        }


};

int main (){

    Chef Juliet;
    Juliet.makeSpecialDish();

    ItalianChef Pierre;
    Pierre.makeSpecialDish();


    return 0;
}

*/