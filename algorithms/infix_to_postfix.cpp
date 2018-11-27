#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool is_operator(char c){
  if(c == '+' || c== '-' || c=='*' || c== '/')
    return true;
  return false;
}

bool is_operand(char c){
  if(c>= '0' && c<='9')
    return true;
  if(c>='a' && c<='z')
    return true;
  if(c>='A' && c<='X')
    return true;
  return false;
}

int get_op_weight(char op){
  int weight = -1;
  switch(op){
    case '+':
    case '-':
    weight = 1;
    case '*':
    case '/':
    weight = 2;
  }
  return weight;
}

int has_high_precedence(char op1, char op2){
  int op1_weight = get_op_weight(op1);
  int op2_weight = get_op_weight(op2);

  if(op1_weight==op2_weight)
    return true;
  
  return op1_weight>op2_weight ? true: false;

}

string infix_to_postfix(string exp){
  stack<char> s;
  string postfix = "";
  for(int i=0; i<exp.length(); i++){
    if(exp[i] == ' ' || exp[i] == ',')
      continue;
    if(is_operand(exp[i])){
      postfix += exp[i];
    }
    else if(is_operator(exp[i])){
      while(!s.empty() && s.top() != '(' &&
      has_high_precedence(s.top(), exp[i])){
        postfix += s.top();
        s.pop();
      }
      s.push(exp[i]);
    }
    else if(exp[i] == '('){
      s.push(exp[i]);
    }
    else if(exp[i] == ')'){
      while(!s.empty() && s.top()!= '('){
        postfix += s.top();
        s.pop();
      }
      s.pop();
    }
  }
  while(!s.empty()){
    postfix += s.top();
    s.pop();
  }
  return postfix;
}

int main(){
  string exp;
  getline(cin,exp);
  string postfix = infix_to_postfix(exp);
  cout<<postfix;
}
