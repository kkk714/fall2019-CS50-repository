import csv

with open("data.csv","r") as titles:
    reader = csv.DictReader(titles)

    with open("show0.csv","w") as shows:

        writer = csv.writer(shows)

        writer.writerow(["const","primaryTitle","startYear","genres"])

        for row in reader:

            if row["titleType"] == "tvSeries":
                writer.writerow([row["tconst"],row["primaryTitle"],row["startYear"],row["genres"]])

