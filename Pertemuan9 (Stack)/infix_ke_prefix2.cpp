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
        // Jika huruf atau angka, tambahkan ke output
        if (isalpha(infix[i])) {
            output += infix[i];
        }
        // Jika '(', push ke stack
        else if (infix[i] == '(') {
            char_stack.push(infix[i]);
        }
        // Jika ')', pop sampai '('
        else if (infix[i] == ')') {
            while (!char_stack.empty() && char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            if (!char_stack.empty())
                char_stack.pop(); // pop '('
        }
        // Jika operator
        else if (isOperator(infix[i])) {
            while (!char_stack.empty() && getPriority(infix[i]) < getPriority(char_stack.top())) {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.push(infix[i]);
        }
    }

    // Pop semua sisa operator
    while (!char_stack.empty()) {
        output += char_stack.top();
        char_stack.pop();
    }

    // Balik hasil akhir
    reverse(output.begin(), output.end());
    return output;
}

// POSTFIX
string infixToPostfix(string infix) {
    infix = '(' + infix + ')';
    int l = infix.size();

    stack<char> char_stack;
    string output;

    for (int i = 0; i < l; i++) {
        // Jika huruf atau angka, tambahkan ke output
        if (isalpha(infix[i])) {
            output += infix[i];
        }
        // Jika '(', push ke stack
        else if (infix[i] == '(') {
            char_stack.push(infix[i]);
        }
        // Jika ')', pop sampai '('
        else if (infix[i] == ')') {
            while (!char_stack.empty() && char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            if (!char_stack.empty())
                char_stack.pop(); // pop '('
        }
        // Jika operator
        else if (isOperator(infix[i])) {
            while (!char_stack.empty() && getPriority(infix[i]) < getPriority(char_stack.top())) {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.push(infix[i]);
        }
    }

    // Pop semua sisa operator
    while (!char_stack.empty()) {
        output += char_stack.top();
        char_stack.pop();
    }

    // Balik hasil akhir
    reverse(output.begin(), output.end());
    return output;
}

int main() {
    string infix_expression;
    cout << "Masukkan ekspresi infix: ";
    cin >> infix_expression;

    string prefix_expression = infixToPrefix(infix_expression);
    cout << "Ekspresi prefix: " << prefix_expression << endl;
    return 0;

    string pos_expression = infixToPostfix(infix_expression);
    cout << "Ekspresi prefix: " << postfix_expression << endl;
    return 0;
}
