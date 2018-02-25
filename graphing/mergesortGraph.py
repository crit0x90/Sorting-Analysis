import plotly.plotly as py
import plotly.graph_objs as go
import math

def graphData(data, lengths):
	layout = dict(title = 'Mergesort Case 1',
              xaxis = dict(title = 'Lengths'),
              yaxis = dict(title = 'Times'),
              )
	fig = dict(data=data, layout=layout)
	py.iplot(fig, filename='styled-line')

def n_logn(start):
	data = []
	print(float(start))
	for i in range(1,10):
		data.append(start)
		print(start)
		start = start * math.log(100, 2)

	return data

graph_data = []
lengths = [10,1000,10000,100000, 1000000]
case1 = []
case2 = []
case3 = []
case4 = []

with open("input/mergeSort.txt") as input:
	current_key = ""
	for line in input:
		if line[0] == "#":
			current_key = line.strip("#>")
			current_key = line.strip('\n')
			graph_data = []
		else:
			line = line.split(",")
			for item in line:
				if item != '\n':
					graph_data.append(float(item))

			print(current_key)
			mean = float(str(sum(graph_data)/len(graph_data)))
			
			if 'case 1' in current_key:
				case1.append(mean)

			if 'case 2' in current_key:
				case2.append(mean)

			if 'case 3' in current_key:
				case3.append(mean)

			if 'case 4' in current_key:
				case4.append(mean)

	trace1 = go.Scatter(
    x = lengths,
    y = case1,
    name = 'Case 1',
    line = dict(
        color = ('rgb(255, 0, 0)'),
        width = 2)
	)

	trace2 = go.Scatter(
    x = lengths,
    y = case2,
    name = 'Case 2',
    line = dict(
        color = ('rgb(0, 0, 255)'),
        width = 2)
	)

	trace3 = go.Scatter(
    x = lengths,
    y = case3,
    name = 'Case 3',
    line = dict(
        color = ('rgb(0, 255, 0)'),
        width = 2)
	)

	trace4 = go.Scatter(
    x = lengths,
    y = case4,
    name = 'Case 4',
    line = dict(
        color = ('rgb(255, 255, 255)'),
        width = 2)
	)

	data = [trace1, trace2, trace3, trace4]

	graphData(data, lengths)


