
filename = 'mergesort/mergesort.txt'

with open(filename) as file:
	for line in file:
		if ',' in line:
			line = line.replace(',', '\n')
			print(line)
		else:
			print(line)