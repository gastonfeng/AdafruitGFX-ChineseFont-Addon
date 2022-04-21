import sys

f = open(sys.argv[1], 'r')

data = f.readlines()

discrete_char_set = []

for line in data:
    # print line
    charlist = line.strip('\n')
    for char in charlist:
        if ord(char) < 128:
            continue
        if not char in discrete_char_set:
            discrete_char_set.append(char)

print(discrete_char_set)
print("Count:" + str(len(discrete_char_set)))
f = open('discrete.txt', 'w')

for x in range(1, len(discrete_char_set) - 1):
    f.write(discrete_char_set[x] + '\n')
f.write(discrete_char_set[len(discrete_char_set) - 1])
f.close()
