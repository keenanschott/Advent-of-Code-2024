import re
intxt = 'in.txt'
with open(intxt, 'r') as file:
    text = file.read()
matches = re.findall(r"mul\(\d{1,3},\d{1,3}\)", text)
sum = 0
for mul in matches:
    sum += int(mul.split(",")[0][4:]) * int(mul.split(",")[1][:-1])
print(sum)