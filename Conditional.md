# Conditionals
### If statement
Form
```
if (condition) {
  statements
}
```
If `condition` is `true`, statements within are executed. Otherwise, statements are skipped.

### Relational operator
Used to compare values in condition
- `==` equal to
- `!=` not equal to
- `>` greater than
- `<` less than
- `>=` greaterthan or equal to
- `<=` less than or equal to

### Else clause
Form
```
if (condition) {
  statements 1
} else {
  statements 2
}
```

### Else if
More than two possible outcomes
```
if (condition 1) {
  statements 1
} else if (condition 2) {
  statements 2
} else {
  statements 3
}
```
Always come after `if` and before `else`, takes a condition as well.

*Above, a full `if` loop can be used for multiple outcomes.*

### Switch statement
C++ provides a special statement for miltiple outcomes, `switch`.

Form
```
switch (expr) {
  case value 1:
    statement 1
    break;
  case value 2:
    statement 2
    break;
  case value 3:
    statement 3
    break;
  default:
    statement 4
    break;
}
```
- `switch` keyword initiates the statement and followed by () containing the expression that each case will compare
- `case` keyword checks if the expression matches the special value
- `break` keyword tells the computer to exit the current code block
- `default` keyword is similar to `else`

