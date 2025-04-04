#include <iostream>
#include "quectel.h"
#include <string>

using namespace std;

string QuectelToApp::getAppState(QuectelState state) {
    switch (state) {
        case SUCCEED: return "Success";
        case UPDATE: return "Inactive_update";
        case WRITEDONE: return "Improper_write";
        case SYNC_PENDING: return "sync_in_progress";
        case BACKUP: return "performing_backup";
        case CANCEL: return "cancel";
        default: return "Invalid State";
    }
}

int main() {
    int userChoice;
    cout << "Enter a choice (0: SUCCEED, 1: UPDATE, 2: WRITEDONE, 3: SYNC_PENDING, 4: BACKUP, 5: CANCEL): ";
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 5) {
        cout << "Invalid choice. Please enter a number between 0 and 5.\n";
        return 1;
    }

    QuectelToApp mapper;
    QuectelState state = static_cast<QuectelState>(userChoice);

    string appState = mapper.getAppState(state);
    cout << "Mapped App State: " << appState << endl;

    return 0;
}
