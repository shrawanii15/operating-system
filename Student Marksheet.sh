#Write a shell script to generate mark- sheet of a student. Take 3 subjects, calculate and display total marks,
#percentage and Class obtained by the student.

#!/bin/bash

# Input student details
echo "Enter Student Name:"
read name

echo "Enter marks for Subject 1:"
read m1

echo "Enter marks for Subject 2:"
read m2

echo "Enter marks for Subject 3:"
read m3

# Calculate total
total=$((m1 + m2 + m3))

# Calculate percentage
percentage=$((total / 3))

# Determine class
if [ $percentage -ge 60 ]; then
    class="First Class"
elif [ $percentage -ge 50 ]; then
    class="Second Class"
elif [ $percentage -ge 40 ]; then
    class="Pass Class"
else
    class="Fail"
fi

# Display Marksheet
echo "-----------------------------"
echo "        MARKSHEET"
echo "-----------------------------"
echo "Name        : $name"
echo "Subject 1   : $m1"
echo "Subject 2   : $m2"
echo "Subject 3   : $m3"
echo "-----------------------------"
echo "Total Marks : $total"
echo "Percentage  : $percentage%"
echo "Class       : $class"
echo "-----------------------------"

#Input -

#Enter Student Name:
#Niharika
#Enter marks for Subject 1:
#80
#Enter marks for Subject 2:
#70
#Enter marks for Subject 3:
#60

#Output -
#-----------------------------
        MARKSHEET
#-----------------------------
#Name        : Niharika
#Subject 1   : 80
#Subject 2   : 70
#Subject 3   : 60
#-----------------------------
#Total Marks : 210
#Percentage  : 70%
#Class       : First Class
#-----------------------------
