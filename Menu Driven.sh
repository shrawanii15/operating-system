#Write a menu driven shell script which will print the following menu and execute the CO2
#a. Display calendar of current month
#b. Display today’s date and time
#c. Display usernames those are currently logged in the system
#d. Display your Terminal number

#!/bin/bash

while true
do
    echo "--------------------------------------"
    echo "   Operating System Lab Menu"
    echo "--------------------------------------"
    echo "1. Display calendar of current month"
    echo "2. Display today's date and time"
    echo "3. Display logged-in usernames"
    echo "4. Display your terminal number"
    echo "5. Exit"
    echo "--------------------------------------"
    echo "Enter your choice:"
    read choice

    case $choice in
        1)
            echo "Calendar of current month:"
            cal
            ;;
        2)
            echo "Today's date and time:"
            date
            ;;
        3)
            echo "Users currently logged in:"
            who
            ;;
        4)
            echo "Your terminal number:"
            tty
            ;;
        5)
            echo "Exiting program..."
            break
            ;;
        *)
            echo "Invalid choice! Please try again."
            ;;
    esac

    echo ""
done

#Output - 

#     April 2026
#Su Mo Tu We Th Fr Sa
#       1  2  3  4
#5  6  7  8  9 10 11
