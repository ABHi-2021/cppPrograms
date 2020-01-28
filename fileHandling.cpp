#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

// the program is for file handling and what is the work of stream in cpp programs
int main(){

// since we know that file is a permanent storage to access the data we need file handling and that is done by using fstream
// we use ifstream to write on the file
// ofstream to read from the file
// fstream to use as the header file
// stream act as the link between the file or the input device to the program and then to the out device or the file.

/* we use the file to store the data that has to be permanently stored on the disk. therefore we use "fstream.h" as the header file.
now we perform two basic actions on the file that are input i.e., writing by the use of ofstream and output i.e., reading by using
ifstream.   */

/* to use the screen we use the standard files that are cin and cout along with  << and >> operator */

/* Steps to create and read and write in a file :
1) include the fstream header file
2) create the object of the file mode that you want to do with the file
    before doing the below functions we opens the file, if the file is not created then it will create in the same directory.
    *) we also use different mode to open the file those are as follows :
    1) ios::in - input /read
    2) ios:: out - output/write-- here the file is written from the starting and the original content is lost.
    3) ios:: app - append -- to write the file from the point where it was left
    4) ios::ate - update -- to update the file where ever required.
    5) ios::binary - this is the way of file opening like there is text file so such a way there is binary file. if we want to write
                    the file in binary mode including the special symbols then we can use the binary form of the file.
3) call the proper functions to write and read the file
4) at the end close the file else it wont be written.
 */

ofstream fout; // this is the object name of the ofstream that is "fout"
fout.open("myfile.dat", ios::app); // here we have opened the file, since there was no file previously therefore it will be created at the same directory
fout<< "hello Students"; // this is the writing part done in the file.
fout.close(); // here the file has been closed
/*=====================================================*/

ifstream fin; // this is the input stream object created
char ch;
fin.open("myfile.dat");
fin>>ch; /* but the thing with ifstream this way is that it doesnt read the spaces and line change and consider it as data seperator
            therfore, we can use put and get(return character that it has read including spaces and line change) to read the spaces and the line change too. */

while(!fin.eof()){
// loop terminates when we have reached the end of the file
cout << ch;
fin >> ch; // this does not consider space and line change as delimiter therefore the space is not considered as the
}
fin.close();
cout<< endl;

ifstream finl;
finl.open("myfile.dat");
char c;
c = finl.get();
while(!finl.eof()){
cout<<c;
c = finl.get();
}
finl.close();
return 0;
}
/* 1) the file always opens in text mode if not specified
    2) file is open in open mode if it is not specifid , the file be open as a blank file.
    3) if file is open in append mode then you are at the last updated char of the file.
