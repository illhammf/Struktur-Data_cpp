#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah operator
bool isOperator(char c) {
    return (!isalpha(c) && !isdigit(c));
}

// Fungsi untuk memeriksa prioritas operator
int getPriority(char C) {
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

// Fungsi untuk mengonversi ekspresi infix ke prefix
string infixToPrefix(string infix){
    int l = infix.size();

    // Membalikkan ekspresi infix
    reverse(infix.begin(), infix.end());

    // Mengganti '(' dengan ')' dan sebaliknya
    for (int i = 0; i < l; i++){
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    stack <char> char_stack;      // Stack untuk operator
    string output;

    for(int i = 0; i < l; i++) {
        // Jika karakter adalah alfabet atau digit, tambahkan ke output
        if(isalpha(infix[i]) || isdigit(infix[i]))
        output += infix[i];

        // Jika karakter adalah '(', tambahkan ke stack
        else if (infix[i] == '(')
            char_stack.push('(');

        // Jika karakter adalah ')', keluar dari stack sampai menemukan '('
        else if (infix[i] == ')') {
            while (char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.pop();
        }

        // Jika karakter adalah operator
        else if{
            (isOperator(infix[i])) {
                while (!char_stack.empty() && getPriority(infix[i]) < getPriority(char_stack.top())) {
                    output += char_stack.top();
                    char_stack.pop();
                }
            }
        }

        // Mengeluarkan sisa operator dari stack
        while (!char_stack.empty()) {
            output += char_stack.top();
            char_stack.pop();
        }

        // Membalikkan hasil untuk mendapatkan ekspresi prefix
        reverse(output.begin(), output.end());
        return output; 
    }
}

string infixToPostfix(string infix){
    int l = infix.size();

    // Membalikkan ekspresi infix
    reverse(infix.begin(), infix.end());

    // Mengganti '(' dengan ')' dan sebaliknya
    for (int i = 0; i < l; i++){
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    stack <char> char_stack;      // Stack untuk operator
    string output;

    for(int i = 0; i < l; i++) {
        // Jika karakter adalah alfabet atau digit, tambahkan ke output
        if(isalpha(infix[i]) || isdigit(infix[i]))
        output += infix[i];

        // Jika karakter adalah '(', tambahkan ke stack
        else if (infix[i] == '(')
            char_stack.push('(');

        // Jika karakter adalah ')', keluar dari stack sampai menemukan '('
        else if (infix[i] == ')') {
            while (char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.pop();
        }

        // Jika karakter adalah operator
        else{
            (isOperator(infix[i])) {
                while (!char_stack.empty() && getPriority(infix[i]) < getPriority(char_stack.top())) {
                    output += char_stack.top();
                    char_stack.pop();
                }
            }
        }

        // Mengeluarkan sisa operator dari stack
        while (!char_stack.empty()) {
            output += char_stack.top();
            char_stack.pop();
        }

        // Membalikkan hasil untuk mendapatkan ekspresi prefix
        reverse(output.begin(), output.end());
        return output; 
    }
}

int main() {
    string infix_expression;
    cout << "Masukkan ekspresi infix: ";
    cin >> infix_expression;

    string postfix_expression = infixToPostfix(infix_expression);
    cout << "Ekspresi prefix: " << postfix_expression << endl;
    return 0;
}