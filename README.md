# CLI Task Management System

A professional command-line utility written in C++ that demonstrates key intermediate software engineering patterns, custom composite data modeling, dynamic storage allocation, and robust terminal execution flows.

## Core Features
* **Encapsulated Structural Blueprints:** Implements `struct` definitions to bind diverse primitives (integers, strings, and booleans) into unified, trackable object profiles.
* **Dynamic Dataset Scaling:** Leverages the standard template library vector matrix (`std::vector`) to dynamically register, update, and manage task allocation memory spaces at runtime.
* **Memory-Safe Reference Passers:** Deploys memory address references (`&`) across modular functions to directly manipulate data records without generating heavy copy profiles.
* **Defensive Input Buffering:** Implements standard stream filters (`cin.ignore()`) to seamlessly handle variable menu inputs and multi-word description strings.

## Code Architecture Breakdown
* **Create:** `addTask()` dynamically builds a custom `Task` profile and pushes it into runtime vector arrays.
* **Read:** `viewTasks()` loops through memory collections sequentially to monitor completion states.
* **Update:** `markTaskComplete()` intercepts custom target IDs to isolate and toggle binary condition flags.

## How to Compile & Run
Compile using your standard system optimization build compiler:
```bash
g++ main.cpp -o task_tracker
