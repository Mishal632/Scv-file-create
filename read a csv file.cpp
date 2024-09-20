#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream myfile("data.csv");
    string line;

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            stringstream ss(line);
            string cell;
            while (getline(ss, cell, ',')) {
                cout << cell <<