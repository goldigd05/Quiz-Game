#include <iostream>
using namespace std;

int main() {
    string questions[5] = {
        "What is the capital of India?\nA) Delhi\nB) Mumbai\nC) Kolkata\nD) Chennai",
        "Which planet is known as the Red Planet?\nA) Earth\nB) Venus\nC) Mars\nD) Jupiter",
        "What is the result of 5 * 3?\nA) 15\nB) 20\nC) 10\nD) 25",
        "Which language is used to write Android apps?\nA) C++\nB) Java\nC) Python\nD) Swift",
        "Who is the Father of C++?\nA) Dennis Ritchie\nB) James Gosling\nC) Bjarne Stroustrup\nD) Guido van Rossum"
    };

    char Real_answer[5] = {'A', 'C', 'A', 'B', 'C'};
    char userAnswer;
    int score = 0;

    cout << "===== QUIZ START =====\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Q" << i + 1 << ": " << questions[i] << "\n";
        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == Real_answer[i]) {
            cout << " Correct!\n\n";
            score++;
        } else {
            cout << " Incorrect! Correct answer: " << Real_answer[i] << "\n\n";
        }
    }

    cout << "===== QUIZ END =====\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << " Excellent!\n";
    else if (score >= 3)
        cout << " Good Job!\n";
    else
        cout << " Keep Practicing!\n";

    return 0;
}
