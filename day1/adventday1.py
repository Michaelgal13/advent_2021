import tkinter as tk
from tkinter import filedialog as tkfd


root = tk.Tk()
filename = tkfd.askopenfilename()
root.destroy()
# print(filename)
file = open(filename, 'r')
num = int(file.readline())
count = 0
while True:
    num2 = file.readline()
    # print(num2)
    if len(num2) == 0:
        break
    num2 = int(num2)
    if num2 > num:
        count = count + 1
    num = num2
print(count)
