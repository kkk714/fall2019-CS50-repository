import re
from cs50 import get_string

s = get_string("Do you agree?\n")

if re.search("^y(es)?$",s,re.IGNORECASE):
    print("Agree")
elif re.search("n(o)?",s):
    print("Not found")