#Write a shell script which will accept a number b and display first n prime numbers as output

#!/bin/bash

echo "Enter number of prime numbers to display:"
read n

count=0
num=2

echo "First $n prime numbers are:"

while [ $count -lt $n ]
do
    isPrime=1

    for (( i=2; i*i<=num; i++ ))
    do
        if [ $((num % i)) -eq 0 ]; then
            isPrime=0
            break
        fi
    done

    if [ $isPrime -eq 1 ]; then
        echo -n "$num "
        count=$((count + 1))
    fi

    num=$((num + 1))
done

echo ""

#Output -

#Enter number of prime numbers to display:
#5

#First 5 prime numbers are:
#2 3 5 7 11
