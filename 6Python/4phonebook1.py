import csv
from cs50 import get_string



names = get_string("Name: ")
numbers = get_string("Number: ")

with open("phonebook1.csv","a") as file:
    #"with" key word
     writer = csv.writer(file)
    writer.writerow((names, numbers))
