#include <iostream>
#include <vector>
using namespace std;

int main()
{

     vector<int> vector_1;
     vector<int> vector_2;

     cout << "enter  elements to insert  in the  vector1" << endl;
     vector_1.push_back(10);
     vector_1.push_back(20);

     cout << "The elements in vector_1 is " << vector_1.at(0) << endl;
     cout << "The elements in vector_1 is " << vector_1.at(1) << endl;
     cout << "The size of vector_1 is " << vector_1.size() << "\n"
          << endl;

     cout << "enter  elements to insert  in the  vector2"
          << "\n"
          << endl;

     vector_2.push_back(100);
     vector_2.push_back(200);

     cout << "The elements in vector_2 is " << vector_2.at(0) << endl;
     cout << "The elements in vector_2 is " << vector_2.at(1) << endl;
     cout << "The size of vector_1 is " << vector_2.size() << "\n"
          << endl;

     vector<vector<int>> vector_2d;

     vector_2d.push_back(vector_1);
     vector_2d.push_back(vector_2);

     cout << vector_2d.at(0).at(0) << "\t";
     cout << vector_2d.at(0).at(1) << endl;
     cout << vector_2d.at(1).at(0) << "\t";
     cout << vector_2d.at(1).at(1) << "\n"
          << endl;

     cout << "******************************************"
          << "\n"
          << endl;

     vector_1.at(0) = 1000;

     cout << vector_2d.at(0).at(0) << "\t";
     cout << vector_2d.at(0).at(1) << endl;
     cout << vector_2d.at(1).at(0) << "\t";
     cout << vector_2d.at(1).at(1) << "\n"
          << endl;

     cout << "The elements in vector_1 is " << vector_1.at(0) << endl;
     cout << "The elements in vector_1 is " << vector_1.at(1) << "\n"
          << endl;

     return 0;
}