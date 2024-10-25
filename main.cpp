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
    sortData(dataVector, dataList);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Sort: " << duration.count() << " ms (Set: -1)" << endl;

    // Insert a value into all three data structures
    start = high_resolution_clock::now();
    insertData(dataVector, dataList, dataSet, "TESTCODE");
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Insert: " << duration.count() << " ms" << endl;

    // Delete a value from all three data structures
    start = high_resolution_clock::now();
    deleteData(dataVector, dataList, dataSet);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Delete: " << duration.count() << " ms" << endl;

    return 0;
}

void readData(const string& filename, vector<string>& vec, list<string>& lst, set<string>& st) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        if (vec.size() < NUM_OF_ELEMENTS) {
            vec.push_back(line);
            lst.push_back(line);
            st.insert(line);
        } else {
            break;
        }
    }
}

void sortData(vector<string>& vec, list<string>& lst) {
    std::sort(vec.begin(), vec.end());
    lst.sort(); 
}

oid insertData(vector<string>& vec, list<string>& lst, set<string>& st, const string& value) {
    // Insert into vector (middle)
    vec.insert(vec.begin() + vec.size() / 2, value);
    
    // Insert into list (middle)
    auto it = lst.begi
    

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/