class A :
{
 def evaluate(tokens):
    stack = []
    for token in tokens:
        if token is an operand:
            stack.push(token)
        else if token is an operator:
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = perform_operation(token, operand1, operand2)
            stack.push(result)
    return stack.pop()
}
int main 
{
    A.obj();
    obj.stack();
    return 0;
}
