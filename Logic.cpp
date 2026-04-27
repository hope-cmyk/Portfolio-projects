#include <iostream>
#include <string>
using namespace std;

int main() {
    int math, design, physics;
    cout << "--- AI Career Path Predictor (Logic-Based) ---\n";
    cout << "Enter Math score (0-100): "; cin >> math;
    cout << "Enter Design interest (0-100): "; cin >> design;
    cout << "Enter Physics score (0-100): "; cin >> physics;

    cout << "\nAnalysis Result: ";
    if (math > 80 && design > 70) {
        cout << "Strong candidate for AI & Generative Art Systems.";
    } else if (math > 85 && physics > 85) {
        cout << "Strong candidate for Robotics & Hardware AI.";
    } else if (design > 80) {
        cout << "Strong candidate for UI/UX & Human-Computer Interaction.";
    } else {
        cout << "Strong candidate for General Software Engineering.";
    }
    return 0;
}
