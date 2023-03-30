#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> myStack;
    int option, value;
    bool keepGoing = true;

    while (keepGoing) {
        cout << "Please select an option: \n";
        cout << "1. Push an element\n";
        cout << "2. Pop an element\n";
        cout << "3. Display elements\n";
        cin >> option;

        switch (option) {
            case 1:
                do {
                    cout << "Please enter an element to push: ";
                    cin >> value;
                    myStack.push(value);

                    string response;
                    cout << "Do you want to add more elements? (yes/no)\n";
                    cin >> response;

                    if (response == "no") {
                        break;
                    }

                } while (true);
                break;

            case 2:
                do {
                    if (!myStack.empty()) {
                        cout << "Popped element: " << myStack.top() << endl;
                        myStack.pop();
                    } else {
                        cout << "Stack is empty." << endl;
                        break;
                    }

                    string response;
                    cout << "Do you want to pop more elements? (yes/no)\n";
                    cin >> response;

                    if (response == "no") {
                        break;
                    }

                } while (true);
                break;

            case 3:
                do {
                    if (!myStack.empty()) {
                        cout << "Elements in stack: ";

                        stack<int> tempStack = myStack;
                        while (!tempStack.empty()) {
                            cout << tempStack.top() << " ";
                            tempStack.pop();
                        }
                        cout << endl;

                    } else {
                        cout << "Stack is empty." << endl;
                        break;
                    }

                    string response;
                    cout << "Do you want to display more elements? (yes/no)\n";
                    cin >> response;

                    if (response == "no") {
                        break;
                    }

                } while (true);
                break;

            default:
                cout << "Invalid option.\n";
                break;
        }
    }

    return 0;
}
