#include <fstream>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
int main() {
  fstream inFile("./input_data.txt");
  if (!inFile) {
    cout << "Error no file found" << endl;
    return 1;
  }
  vector<pair<string, string>> qa;
  string current_line, question, answer;
  int line_count = 0, score = 0, possible;

  while (getline(inFile, question) && getline(inFile, answer)) {
    if (!question.empty() && !answer.empty()) {
      qa.emplace_back(question, answer);
      ++score;
    }
  }
  possible = score;
  if (qa.empty()) {
    cout << "No questions found in file." << endl;
    return 1;
  }
  cout << "\n\n\t\tWelcome!\n\n\tThis test has " << possible
       << " questions. \n\n\t\t Good Luck!\n"
       << endl;

  string human_response;
  string human_answer = "";
  string reattempt;
  bool current_fail;
  for (size_t i = 0; i < qa.size(); ++i) {
    cout << qa[i].first << endl;
    while (getline(cin, human_response) && !human_response.empty()) {
      if (human_response == qa[i].second) {
        cout << "Correct!" << endl;
        current_fail = false;
      } else {
        cout << "WRONG\ntry again? (y / n)\nQuit? (q)" << endl;
        cin >> reattempt;
        if (reattempt == "y" || reattempt == "yes") {
          --i;
        } else if (reattempt == "n" || reattempt == "no") {
          --score;
        } else if (reattempt == "q" || reattempt == "quit") {
          cout << "You chose to quit.\n Goodbye!";
          return 0;
        }
      }
    }
  }
  cout << "Final Score: " << score << " of " << possible << endl;

  return 0;
}
