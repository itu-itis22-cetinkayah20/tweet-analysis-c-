

# Tweet Analysis Project

## Overview

This project is designed to analyze tweet data, including retweet counts and favorite counts. The project reads tweet data from CSV files, processes it, and writes the results back to CSV files. The goal is to provide a structured and efficient way to handle and analyze tweet statistics.

## Features

- **Read Tweets**: Read tweet data from CSV files.
- **Create Tweets**: Create tweet objects from the data.
- **Write Tweets**: Write processed tweet data back to CSV files.
- **Error Handling**: Handle file reading errors gracefully.

---

## **Project Structure**

```
/tweet-analysis-c++/
│── .devcontainer/            # Development container configuration
│── .vscode/                  # VS Code configuration
│── bin/                      # Compiled binaries
│── data/                     # CSV files with tweet data
│   │── permutations/         # Permutation data
│   │── sizes/                # Different sizes of tweet data
│── include/                  # Header files
│── lib/                      # Libraries
│── src/                      # Source code
│   │── main.cpp              # Main entry point for the application
│   │── metrics.cpp           # Metrics calculation
│   │── sort.cpp              # Sorting algorithms
│   │── utilities.cpp         # Utility functions
│── tests/                    # Unit tests
│── LICENSE                   # License information
│── Makefile                  # Build configuration
│── README.md                 # Documentation
```


---

## **Getting Started**

### **Prerequisites**

- **C++ Compiler**: Ensure you have a C++ compiler installed (e.g., g++, clang).
- **Make**: Make sure you have `make` installed for building the project.
- **Docker**: Make sure that Docker is installed in your system. Reopen the project in docker container when vscode offers to ensure that tests work. 

### **Installation**

1. **Clone the repository**

```sh
git clone https://github.com/itu-itis22-cetinkayah/tweet-analysis-cpp.git
cd tweet-analysis-cpp
```

2. **Build the project**

```sh
g++ -g -o bin/tweet src/*.cpp -Iinclude
make build
```

### **Running the Application**
- The application will process the tweet data and output the results to the specified CSV files.
```sh
./bin/tweet
```
### **Making Tests**
```sh
make tests
```

## **Technologies Used**

- **C++**: Core programming language for processing tweet data.
- **CSV**: Format for input and output data files.
- **Makefile**: For building the project.
- **Unit Testing**: To ensure code reliability and correctness.



## **Usage**

- **Analyze Tweets**: Run the application to analyze tweet data from the CSV files.
- **Modify Data**: Update the CSV files with new tweet data and re-run the application to see updated results.
---
## **Contributing**
Contributions are welcome! Please fork the repository and submit a pull request.

---


## **License**

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or distribute this software, either in source code form or as a compiled binary, for any purpose, commercial or non-commercial, and by any means.

In jurisdictions that recognize copyright laws, the author or authors of this software dedicate any and all copyright interest in the software to the public domain. We make this dedication for the benefit of the public at large and to the detriment of our heirs and successors. We intend this dedication to be an overt act of relinquishment in perpetuity of all present and future rights to this software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org>



