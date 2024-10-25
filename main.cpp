// Lab 25: Data Structures Races 
// COMSC-210 - Ibrahim Alatig 

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <algorithm> // For std::sort
#include <chrono>

using namespace std;
using namespace std::chrono;

const int NUM_OF_ELEMENTS = 20000; 

void readData(const string& filename, vector<string>& vec, list<string>& lst, set<string>& st);
void sortData(vector<string>& vec, list<string>& lst);
void insertData(vector<string>& vec, list<string>& lst, set<string>& st, const string& value);
void deleteData(vector<string>& vec, list<string>& lst, set<string>& st);

int main() {
    vector<string> dataVector;
    list<string> dataList;
    set<string> dataSet;

    // Read the data into the data structures
    auto start = high_resolution_clock::now();
    readData("data.txt", dataVector, dataList, dataSet);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Read: " << duration.count() << " ms" << endl;

    start = high_resolution_clock::now();
    sortData(dataVect
    

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/