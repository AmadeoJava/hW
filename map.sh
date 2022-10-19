#!/bin/bash
m=$(nmap -sP 192.168.1.0/24)
rm ip.txt
touch ip.txt
for i in $m
do
	if [[ $i == 192* ]]
	then
		echo $i
		echo $(nmap -A $i)>ip.txt
	fi
done
