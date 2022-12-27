#pragma once
#include <string>
#include <iostream>

using namespace std;

# define NO_OF_CHARS 256

void badCharHeuristic(const string& str, int size, int badchar[NO_OF_CHARS]);
void IsKPeriodic(const string& str,  int K);