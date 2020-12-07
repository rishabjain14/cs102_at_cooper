import math
import tkinter 
tk = tkinter.Tk()
c = tkinter.Canvas ( tk, width = 500, height = 500)
c.pack()

c.create_line(250,0,250,500)
c.create_line(0,250,500,250)

def f(x) : 
    return (math.sin(math.radians(x)))

for x in range (-180, 180):
    c.create_rectangle(x+250,(100*f(x)+250),x+250+1,((100*f(x)+250)+1), outline="red")
    print (f(x))

def v(x):
    return ( (f(x+1) - f(x)) / ((x+1) - x))

for x in range (-180, 180):
    c.create_rectangle(x+250,(10000*v(x)+250),x+250+1,((10000*v(x)+250)+1),outline="magenta")
    print (v(x))

def a(x):
    return ( (v(x+1) - v(x)) / ((x+1) - x))

for x in range (-180, 180):
    c.create_rectangle(x+250,(100000*a(x)+250),x+250+1,((100000*a(x)+250)+1), outline="yellow")
    print (a(x))

def j(x):
    return ( (a(x+1) - a(x)) / ((x+1) - x))

for x in range (-180, 180):
    c.create_rectangle(x+250,(10000000*j(x)+250),x+250+1,((10000000*j(x)+250)+1),outline="orange")
    print (j(x))



tk.mainloop()
