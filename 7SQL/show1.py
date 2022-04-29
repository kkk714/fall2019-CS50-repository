import csv

with open("data.csv","r") as titles:
    reader = csv.DictReader(titles)

    with open("show1.csv","w") as shows:

        writer = csv.writer(shows)

        writer.writerow(["const","primaryTitle","startYear","genres"])

        for row in reader:
            if row["startYear"] != "\\N":
                year = int(row["startYear"])
                if year >= 1970:

                    if row["titleType"] == "tvSeries":
                        writer.writerow([row["tconst"],row["primaryTitle"],row["startYear"],row["genres"]])
