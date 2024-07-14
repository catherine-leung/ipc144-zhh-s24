### Quiz 1

* A - The value being entered by user should not be included in printf() statement
* B - The & is essential in this case or your program will crash
* C - You mismatched the format code and variable type
* D - When you assign to a variable, the variable needs to be on left of = operator.  x = 5 is correct, 5 = x is not correct.
* E - Missing \"  to print " for inch
* F - Not wrong but avoid declaring multiple variables on the same line.  it is not good practice.
* G - Logical error.  You cannot make this calculation until after you read in the number of inches.  Order of statements are important.  At the place where you put this statement you do not yet know the value of measurement in inches as it has not been read yet.  Program will not go back to update the calculation.  You must move this after the scanf. 
* H - measurement in cm not correctly calculated 
* J - result not printed 
* K - inches is a whole number and should be declared and read as an int

### Quiz 4

* A - just show the small code blurb
* B - declare and initialize means you can't use . notation as that would be setting the values of data members separately
* C - this is really unclear and doesn't quite answer the question
* D - this is initialization of the variable, not storing into existing variable.
* E - this does not compare a struct against a parallel array
* F - Answer is vague and lacks details.  saying it is good does not explain how
* G - "efficient" has a meaning to it... is it faster?  does it use less memory... you can't say that structs are more efficient without support for this.
* H - this does not answer the question being asked.
* I - Writing needs more clarity..your answer is hinting at the correct answer but it doesn't express this answer clearly.
* J - it looks like you are mixing up the name of a struct vs name of instance of a struct.  You have define your struct (this is where you define what a struct is made of).  This is a similar concept to defining your own data type.  Once you have that declare an instance of the struct.  This is where you create a variable who's data type is the struct you had defined.



# test

* A - do-while loops are **NOT GOOD** and should always be considered second best to a while. It is so less good that python didn't even bother implementing it.. that tells you that it is not a better choice!  There are some small situations where it is useful... but most of the time, **while** is the better choice! This example also has an error message that would not display on first iteration making do-whiles even less appropriate.
* B - for loop is the preferred choice if it involves "counting", doing something n times, going through sequence like 1,2,3,4 etc.
* C - answer does not answer question
* D - answer does not explain why
* F - for loop is for counting.  this situation is not "counting" or going through a sequence.  this is not what is happening here
* G - an infinite loop is not appropriate here.  It breaks the single entry/exit principle and the only way out is to use a break (or return out of function).
* H - answer is vague
  
