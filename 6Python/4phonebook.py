import csv
from cs50 import get_string

file = open("phonebook.csv","a")

names = get_string("Name: ")
numbers = get_string("Number: ")

writer = csv.writer(file)
writer.writerow((names, numbers))

file.close()