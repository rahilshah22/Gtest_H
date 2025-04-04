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


