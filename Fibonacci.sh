#Write a shell script which will generate first n Fibonacci numbers like: 1, 1, 2, 3, 5, 13

#!/bin/bash

echo "Enter number of terms:"
read n

a=1
b=1

echo "Fibonacci Series:"

if [ $n -ge 1 ]; then
    echo -n "$a "
fi

if [ $n -ge 2 ]; then
    echo -n "$b "
fi

for (( i=3; i<=n; i++ ))
do
    c=$((a + b))
    echo -n "$c "
    a=$b
    b=$c
done

echo ""

#Output -

#Enter number of terms:
#7

#Fibonacci Series:
#1 1 2 3 5 8 13
