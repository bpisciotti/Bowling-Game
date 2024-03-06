#ifndef BOWLINGSCOREBOARD_H
#define BOWLINGSCOREBOARD_H

#include <iostream>



// Node representing a frame in the bowling game
struct Frame {
    int roll1;
    int roll2;
    Frame* next;

    Frame(int r1, int r2) : roll1(r1), roll2(r2), next(nullptr) {}
};

class BowlingScoreboard {
private:
    Frame* head; // Pointer to the first frame in the linked list

public:
    BowlingScoreboard() : head(nullptr) {}

    ~BowlingScoreboard() {
        // Delete all nodes to prevent memory leaks
        Frame* current = head;
        while (current != nullptr) {
            Frame* next = current->next;
            delete current;
            current = next;
        }
    }

    // Function to add a new frame to the scoreboard
    void addFrame(int roll1, int roll2) {
        Frame* newFrame = new Frame(roll1, roll2);

    if (head == nullptr) {
        head = newFrame;
    }
    else {
        Frame* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newFrame;
    }
    }

    // Function to calculate and display the total score
    // Function to calculate and display the total score
int calculateTotalScore() {
    int totalScore = 0;
    Frame* current = head;
    for (int frameCount = 1; frameCount <= 10 && current != nullptr; ++frameCount) {
        // Calculate score for the current frame
        int frameScore = current->roll1 + current->roll2;

        // Check for a spare or strike
        if (current->roll1 == 10) {
            // Strike
            frameScore += current->next->roll1; // Add next frame's first roll
            if (current->next->roll1 == 10 && current->next->next != nullptr) {
                // If next frame is also a strike, add next frame's first roll
                frameScore += current->next->next->roll1;
            } else {
                // Otherwise, add next frame's second roll
                frameScore += current->next->roll2;
            }
        } else if (frameScore == 10) {
            // Spare
            frameScore += current->next->roll1; // Add next frame's first roll
        }
        
        // Update total score
        totalScore += frameScore;
        
        // Output frame score
        std::cout << "Frame " << frameCount << " score: " << frameScore << std::endl;

        current = current->next;
    }
    return totalScore;
}

};
#endif

