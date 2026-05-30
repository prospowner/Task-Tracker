//task tracker
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to define a Task
struct Task {
    int id;
    string description;
    bool isCompleted;
};

// Function prototypes
void displayMenu();
void addTask(vector<Task>& tasks, int& nextId);
void viewTasks(const vector<Task>& tasks);
void markTaskComplete(vector<Task>& tasks);

int main() {
    vector<Task> tasks;
    int nextId = 1;
    int choice;

    cout << "=== Welcome to Your C++ Task Tracker ===\n";

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear input buffer to handle string inputs smoothly later
        cin.ignore(); 

        switch (choice) {
            case 1:
                addTask(tasks, nextId);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskComplete(tasks);
                break;
            case 4:
                cout << "\nGoodbye! Keep crushing your goals.\n";
                break;
            default:
                cout << "\n Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\n-----------------------\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Complete\n";
    cout << "4. Exit\n";
    cout << "-----------------------\n";
}

void addTask(vector<Task>& tasks, int& nextId) {
    Task newTask;
    newTask.id = nextId++;
    
    cout << "Enter task description: ";
    getline(cin, newTask.description);
    newTask.isCompleted = false;

    tasks.push_back(newTask);
    cout << "✔️ Task added successfully!\n";
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "\n📭 Your task list is empty!\n";
        return;
    }

    cout << "\n--- Your Tasks ---\n";
    for (const auto& task : tasks) {
        string status = task.isCompleted ? "[X] Done" : "[ ] Pending";
        cout << task.id << ". " << status << " - " << task.description << "\n";
    }
}

void markTaskComplete(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "\n📭 No tasks available to complete.\n";
        return;
    }

    int idToComplete;
    cout << "Enter the ID of the task you finished: ";
    cin >> idToComplete;

    for (auto& task : tasks) {
        if (task.id == idToComplete) {
            task.isCompleted = true;
            cout << "🎉 Task #" << idToComplete << " marked as complete!\n";
            return;
        }
    }

    cout << "Task ID not found.\n";
}