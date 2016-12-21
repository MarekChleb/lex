#include <iostream>
#include <vector>
#include <map>
#include <string>

#define MAX_NM 300006
#define BIGGER >
#define SMALLER <
#define EQUAL =

bool DEBUG = true;
int N, M;
string word;
map<string> sufixes;

using namespace std;

void read_input() {
    scanf("%d%d", &N, &M);
    cin >> word;
    for (int i = 1; i <= N; i++) {
        sufixes.insert(word.substr(N - 1, i));
    }
}

int main() {
    read_input();
    return 0;
}