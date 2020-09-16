#!/bin/sh

mkdir hw1_unix
cp -r hw1_unix hw1_unix_copy
touch hw1_unix_copy/file1.txt 
cp -r hw1_unix_copy/file1.txt hw1_unix/file1_copy.txt 
cp -r hw1_unix_copy/file1.txt hw1_unix/file1_copy2.txt
ls -d 
ls -a hw1_unix



