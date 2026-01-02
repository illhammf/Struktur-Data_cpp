#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Cek apakah karakter adalah operator
bool isOperator(char c) {
    return (!isalpha(c) && !isdigit(c));
}

// Cek prioritas operator
int getPriority(char C) {
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

// Fungsi konversi infix ke prefix
string infixToPrefix(string infix) {
    int l = infix.size();

    // Balik ekspresi
    reverse(infix.begin(), infix.end());

    // Tukar '(' dan ')'
    for (int i = 0; i < l; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    stack<char> char_stack;
    string output;

    for (int i = 0; i < l; i++) {
        if (isalpha(infix[i])) {
            output += infix[i];
        }
        else if (infix[i] == '(') {
            char_stack.push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (!char_stack.empty() && char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            if (!char_stack.empty())
                char_stack.pop();
        }
        else if (isOperator(infix[i])) {
            while (!char_stack.empty() && getPriority(infix[i]) < getPriority(char_stack.top())) {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.push(infix[i]);
        }
    }

    while (!char_stack.empty()) {
        output += char_stack.top();
        char_stack.pop();
    }

    reverse(output.begin(), output.end());
    return output;
}

// Fungsi konversi infix ke postfix
string infixToPostfix(string infix) {
    infix = '(' + infix + ')';
    int l = infix.size();

    stack<char> char_stack;
    string output;

    for (int i = 0; i < l; i++) {
        if (isalpha(infix[i])) {
            output += infix[i];
        }
        else if (infix[i] == '(') {
            char_stack.push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (!char_stack.empty() && char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            if (!char_stack.empty())
                char_stack.pop();
        }
        else if (isOperator(infix[i])) {
            while (!char_stack.empty() && getPriority(infix[i]) <= getPriority(char_stack.top())) {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.push(infix[i]);
        }
    }

    while (!char_stack.empty()) {
        output += char_stack.top();
        char_stack.pop();
    }

    return output;
}

int main() {
    string infix_expression;
    cout << "Masukkan ekspresi infix: ";
    cin >> infix_expression;

    string prefix_expression = infixToPrefix(infix_expression);
    cout << "Ekspresi prefix : " << prefix_expression << endl;

    string postfix_expression = infixToPostfix(infix_expression);
    cout << "Ekspresi postfix: " << postfix_expression << endl;

    return 0;
}
