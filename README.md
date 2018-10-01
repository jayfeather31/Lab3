# Lab3
Repository for Lab3

Recieved Help From: Jagadish Bapanapally 

Question 1: When applying a type short, the function will overflow at 256, with 255 being the maximum that is allowed. When applied to a long, however, the function does not overflow until 65,536, with the last position being at 65,535.

Question 2: With type float, the function will overflow at 35, with the last available position being at 34. However, upon expansion to a double, this will be able to continue until reaching 171, with the final avaiable position being at 170.

Question 3: When done on paper, the equation should always reach the value of 0, regardless of how large n will be. That being said, when applied to a computer, because the computer cannot necessarily store the number accurately. Consequently, when this is added up, the number can be slightly greater or less than zero.

Question 4: With a type float, the error occurs when 4.4 is showed, despite not being allowed at that point. At the same time, when type double is used, the equation is correct, stopping at 4.2 rather than allowing 4.4 to be processed. One explanation towards resolving this conundrum would be that a double, naturally being more accurate than a float, is able to prevent 4.4 from being processed, and vice versa for the float. 
