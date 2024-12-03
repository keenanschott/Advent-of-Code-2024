import re
intxt = 'in.txt'
with open(intxt, 'r') as file:
    text = file.read()
matches = re.findall(r"mul\(\d{1,3},\d{1,3}\)|don't\(\)|do\(\)", text)
sum = 0
enabled = True
for statement in matches:
    if statement == "do()":
        enabled = True
    elif statement == "don't()":
        enabled = False
    elif enabled: 
        sum += int(statement.split(",")[0][4:]) * int(statement.split(",")[1][:-1])
print(sum)