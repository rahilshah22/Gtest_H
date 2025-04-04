#ifndef QUECTEL_H
#define QUECTEL_H
using namespace std;
#include <string>
enum QuectelState {
    SUCCEED,
    UPDATE,
    WRITEDONE,
    SYNC_PENDING,
    BACKUP,
    CANCEL
};

// Mapper class that maps Quectel states to XYZ strings
class QuectelToApp {
public:
    string getAppState(QuectelState state);
    };