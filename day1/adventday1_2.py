import tkinter as tk
from tkinter import filedialog as tkfd


root = tk.Tk()
filename = tkfd.askopenfilename()
root.destroy()
# print(filename)
file = open(filename, 'r')
numlist = []
num = int(file.readline())
numlist.append(num)
num = int(file.readline())
numlist.append(num)
num = int(file.readline())
numlist.append(num)
count = 0
while True:
    num2 = file.readline()
    # print(num2)
    if len(num2) == 0:
        break
    num2 = int(num2)
    numlist.append(num2)
    num2 = numlist[1] + numlist[2] + numlist[3]
    num = numlist[0] + numlist[1] + numlist[2]
    if num2 > num:
        count = count + 1
    numlist.pop(0)
print(count)
