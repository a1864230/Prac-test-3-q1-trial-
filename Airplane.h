#include <iostream>

int main() {
    AirFleet fleet;
    Aircraft** aircraft = fleet.get_aircraft();

    for (int i = 0; i < 4; ++i) {
        aircraft[i]->fly();
    }

    // Cleanup
    for (int i = 0; i < 4; ++i) {
        delete aircraft[i];
    }

    return 0;
}
