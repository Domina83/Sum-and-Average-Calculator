# Sum, Average and Grade Calculator
This C program takes marks for 5 subjects, calculates the total sum and average, and then assigns a grade based on the average.

## Language
C

## Description
- Takes input for 5 subject marks from the user  
- Calculates total sum and average  
- Assigns a grade based on the average:

| Average Score | Grade |
|---------------|-------|
| 90 and above  | S     |
| 70 - 89       | A     |
| 60 - 69       | B     |
| 50 - 59       | C     |
| Below 50      | F     |

### Sample Output
Enter the marks of 5 subjects:

90 85 88 92 95

The sum is 450

The average is 90.00

Grade = 'S'

## How to Run
Compile and run using a C compiler:
```bash
gcc sum_avg_grade.c -o report
./report

What I Learned

Storing and accessing arrays in C

Using loops to process input and calculate totals

Using float for average and displaying with precision

Applying conditions using if-else for grading
