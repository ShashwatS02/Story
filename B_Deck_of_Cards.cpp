#include <iostream>
#include <string>
#include <vector>

using namespace std;

void find_card_fates() {
    int num_cards, num_actions;
    cin >> num_cards >> num_actions;
    string action_sequence;
    cin >> action_sequence;

    if (num_actions >= num_cards) {
        for (int i = 0; i < num_cards; ++i) {
            cout << '-';
        }
        cout << endl;
        return;
    }

    int top_removals = 0;
    int bottom_removals = 0;

    for (char action : action_sequence) {
        if (action == '0') {
            top_removals++;
        } else if (action == '1') {
            bottom_removals++;
        }
    }
    int ambiguous_removals = num_actions - top_removals - bottom_removals;

    int possible_start = 1 + top_removals;
    int possible_end = num_cards - bottom_removals;

    int definite_start = 1 + top_removals + ambiguous_removals;
    int definite_end = num_cards - bottom_removals - ambiguous_removals;
    
    string result_string = "";
    for (int current_card = 1; current_card <= num_cards; ++current_card) {
        if (current_card < possible_start || current_card > possible_end) {
            result_string += '-';
        } 
        else if (definite_start <= definite_end && current_card >= definite_start && current_card <= definite_end) {
            result_string += '+';
        } 
        else {
            result_string += '?';
        }
    }
    cout << result_string << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num_test_cases;
    cin >> num_test_cases;
    while (num_test_cases--) {
        find_card_fates();
    }

    return 0;
}