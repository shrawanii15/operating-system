#!/bin/bash

echo "Enter filename:"
read file

if [ -f $file ]
then
    echo "File exists"
    echo "Contents:"
    cat $file
else
    echo "File does not exist"
fi
