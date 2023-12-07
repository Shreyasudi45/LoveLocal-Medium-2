# ALGORITHM:

Function findMajority:

Input: An integer array arr and its size n.
Output: Prints the majority element(s) if any, else prints "No Majority Element."

Initialize a flag to check if a majority element is found:
    int flag = 0;
    
Iterate through each element of the array:
Initialize a count for the current element:
        int count = 0;
        
Iterate through the array from the current element to the end
         {
            If the current element is equal to the element being checked:
            if (arr[i] == arr[j]) {
                Increment the count:
                count++;
            }
        }
        
        If the count is greater than n/3, print the majority element:
        if (count > (n / 3)) {
            cout << arr[i] << " ";
            flag = 1;
        }
    
If no majority element is found, print a message
    if (!flag)
        print "No Majority Element" 

Main Function:

Input: Reads the size of the array n and the elements of the array arr.
Output: Calls the findMajority function to identify and print majority element(s).
(1.) Read the size of the array
(2.) Declare an array of size n
(3.) Read the elements of the array
(4.) Call the findMajority function
       findMajority(arr, n);
(5.)Return 0 to indicate successful execution

# LOGIC:

Function findMajority:

. Initialize a flag variable (flag) to 0. This flag will be used to check if a majority element is found.
. Iterate through each element (arr[i]) of the array.
        . Initialize a count variable (count) to 0 for the current element.
        . Nest another loop to iterate through the array from the current element to the end.
                    . If the current element is equal to the element being checked (arr[i] == arr[j]), increment the count.
        . Check if the count is greater than one-third of the array size (count > n / 3).
                    . If true, print the majority element (arr[i]), set the flag to 1, and continue to the next iteration.
. If the flag is still 0 after the loops, print "No Majority Element."

Main Function:

. Read the size of the array (n) from the user.
. Declare an array of size n.
. Read the elements of the array from the user.
. Call the findMajority function with the array and size as arguments.
The logic relies on counting the occurrences of each element in the array, checking if any element has a count greater than one-third of the array size, and printing the majority element(s) accordingly. The time complexity of this algorithm is relatively high, specifically O(n^2), as it involves nested loops for each element in the array. 