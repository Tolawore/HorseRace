#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    int numberOfHorses, trackLength;

    
    do {
        std::cout << "Enter number of horses: ";
        std::cin >> numberOfHorses;
        if (numberOfHorses < 2) {
            std::cout << "Number of horses cannot be less than 2, try again!\n";
        }
    } while (numberOfHorses < 2);

    
    do {
        std::cout << "Enter the track's length: ";
        std::cin >> trackLength;
        if (trackLength < 2) {
            std::cout << "The track's length cannot be less than 2, try again!\n";
        }
    } while (trackLength < 2);

    
    std::vector<int> horses(numberOfHorses, 0);

    
    srand(time(nullptr));

    std::cout << "Race begins ---\n";

    
    bool raceContinues = true;
    while (raceContinues) {
        for (int i = 0; i < numberOfHorses; i++) {
            
            if (rand() % 2 == 0) {
                horses[i]++;
            }

            
            if (horses[i] >= trackLength) {
                std::cout << "Horse " << (i + 1) << " wins!\n";
                raceContinues = false;
                break;
            }
        }

        
        for (int i = 0; i < numberOfHorses; i++) {
            for (int pos = 0; pos < trackLength; pos++) {
                std::cout << (horses[i] == pos ? std::to_string(i + 1) : ".");
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
