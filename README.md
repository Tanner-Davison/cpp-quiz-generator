# cpp-quiz-generator
# Quiz Program

## Overview
This program reads a set of questions and answers from an input file (`input_data.txt`) and presents them to the user in a quiz format. The user must answer each question, and the program evaluates their responses, keeping track of the score. At the end of the quiz, the program displays the user's final score and the total possible score.

## Features
- Reads questions and answers from a text file.
- Validates user input against the correct answers.
- Tracks and displays the user's score.
- Provides immediate feedback ("PASS" or "FAIL") for each answer.

## File Structure
- `main.cpp`: Contains the source code for the program.
- `input_data.txt`: Input file with questions and their corresponding answers. Each question and its answer should be on consecutive lines.

## Input File Format
The `input_data.txt` file should contain questions and answers in the following format:
```
Question 1
Answer 1
Question 2
Answer 2
...
```

### Example
```
What data type would you use to store a person's age that will never be negative or have decimal points?
unsigned int
Which data type is best suited for storing a single character value like 'A' or '$'?
char
If you need to store whether a light switch is on or off, what would be the most memory-efficient data type?
bool
```

## How to Run
1. **Compile the Program**:
   Use a C++ compiler (e.g., `g++`) to compile the program:
   ```bash
   g++ -o quiz main.cpp
   ```

2. **Prepare the Input File**:
   Ensure that `input_data.txt` is in the same directory as the compiled program.

3. **Run the Program**:
   Execute the program in a terminal or command prompt:
   ```bash
   ./quiz
   ```

4. **Answer Questions**:
   Respond to each question by typing your answer and pressing Enter.

## Example Run
Input File (`input_data.txt`):
```
What data type would you use to store a person's age that will never be negative or have decimal points?
unsigned int
Which data type is best suited for storing a single character value like 'A' or '$'?
char
If you need to store whether a light switch is on or off, what would be the most memory-efficient data type?
bool
```

Execution:
```
$ ./quiz
What data type would you use to store a person's age that will never be negative or have decimal points?
unsigned int
PASS

Which data type is best suited for storing a single character value like 'A' or '$'?
char
PASS

If you need to store whether a light switch is on or off, what would be the most memory-efficient data type?
string
FAIL

Final Score: 2 of 3
```

## Customization
- **Changing the Input File**: Modify `input_data.txt` to include your own questions and answers.
- **Adjusting Scoring**: Modify the logic in `main.cpp` to implement different scoring systems if desired.

## Requirements
- A terminal or command prompt to execute the program.
- C++ compiler (your choice ex: GCC || MSVC)

## Limitations
- The program assumes that the input file is correctly formatted (alternating lines of questions and answers).
- It does not handle cases where the input file is missing or contains improperly formatted data gracefully beyond the basic checks.
- you may add 2 returns between q/a groups 

## License
This project is licensed under the MIT License.

