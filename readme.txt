/******************************************************************************
 *  Name: Tran Nguyen Hung
 *
 *  Operating system: Mac OS
 *  Compiler:g++
 *  Text editor / IDE: Atom
 *  Hours to complete assignment (optional): 5
 ******************************************************************************/


/******************************************************************************
 *  Describe how your firstIndexOf() function in BinarySearchDeluxe.h
 *  finds the first index of a key that equals the search key.
 *****************************************************************************/
firstIndexOf() use the lower_bound function defined in the algorithm library,
the lower_bound function return the iterator pointing to the first element that
is not less than the key. Them firstIndexOf()will return the distance of that
iterator from index 0.
lastIndexOf() have the same characteristic but uses the upper_bound() function.

/******************************************************************************
 *  What is the order of growth of the number of compares (in the
 *  worst case) that each of the operations in the Autocomplete
 *  data type make, as a function of the number of terms N and the
 *  number of matching terms M?
 *
 *  Recall that with order-of-growth notation, you should discard
 *  leading coefficients and lower order terms, e.g., M^2 + M log N.
 *****************************************************************************/

constructor: N log N

allMatches(): log N + M log N

numberOfMatches(): log N




/******************************************************************************
 *  Known bugs / limitations.
 *****************************************************************************/




/******************************************************************************
 *  Describe whatever help (if any) that you received.
 *  Don't include readings, lectures, and exercises, but do
 *  include any help from people (including classmates and friends) and
 *  attribute them by name.
 *****************************************************************************/


/******************************************************************************
 *  Describe any serious problems you encountered.
 *****************************************************************************/




/******************************************************************************
 *  List any other comments here. Feel free to provide any feedback
 *  on how much you learned from doing the assignment, and whether
 *  you enjoyed doing it.
 *****************************************************************************/
