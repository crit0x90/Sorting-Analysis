import plotly
from plotly.graph_objs import Scatter, Layout

def nsquared():
	nsq = []
	for i in range (1,100):
		nsq.append(i*i)

	return nsq

ys = [1,1000,10000,100000,1000000]	
xs = [142, 2345, 5533, 56777, 223453]

plotly.offline.plot({
	"data": [Scatter(x=xs, y=ys)], 
	"layout": Layout(title='practice')
	})