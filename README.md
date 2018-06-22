# c-BegginersProjects

This is a set of practice console application written in c++ on xcode to help me learn to code in c++

Below is a list of the Projects Completed so far:

# FindingPi
  The console application functions as a way to calculate the Mathematical constant of pi to a certian degree of accuracy expressed as decimal places. The program utilizes the Taylor Polynomial of tangent inverse of x and utilizes this to find pi/4 by centering the series at 0 and having an x value of 1. This will then utilize Alternating series error in order to calculate the Taylor series to that minimum degree of accuracy specified by the user.
  
# FindingE
  Similar to findingPi the user inputs the accuracy of the constant e in terms of decimal places and similarly using a Taylor polynomial for e^x specified and the series for this is from n to 0 : x^n/n! where x is 1 in order to find e^1 = e. Unlike FindingPi this is not an alternating series so the Lagrange error bound is utilized which typically sees the next term as the maximum error.
  
# FIB
  Similar then both Programs it simply calcuates the Fibonacci Seqeunce to the specified term or number of terms and if it is not contained till its is greater than the specified term. The program utilizes int rather than a perferable long or unsigned int so around 2^8 is a maximum size of a term before it overflows.

# PrimeFactor
Simply solved for all prime factors of user inputted number. Utilizes a recursive search inputting all none used values into a queue to find factors and then recursively do so until no factors are found there it is added to a set to prevent accidental repition of prim factos and outputted to terminal.

