import csv

counts={}
with open ("cs50.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"]
        #access the items of a dictionary by referring to its key name, inside square brackets
        if title in counts:
            counts[title] += 1
        else:
            counts[title] = 1

for title, count in counts.items():
    print(title, count, sep=" | ")
