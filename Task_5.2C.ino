from tkinter import *
import tkinter.font
from gpiozero import LED
import RPi.GPIO
RPi.GPIO.setmode(RPi.GPIO.BCM)

redled = LED(16)
greenled = LED(20)
yellowled = LED(21)



def ledToggle1():
    if redled.is_lit:
        redled.off()
        but1["text"] = "Turn redled ON"
        
    else:
        redled.on()
        but1["text"] = "Turn redled OFF"
        
def ledToggle2():
    if greenled.is_lit:
        greenled.off()
        but2["text"] = "Turn greenled ON"
        
    else:
        greenled.on()
        but2["text"] = "Turn greenled OFF"
        
def ledToggle3():        
    if yellowled.is_lit:
        yellowled.off()
        but3["text"] = "Turn yellowled ON"
        
    else:
        yellowled.on()
        but3["text"] = "Turn yellowled OFF"
        
def close():
    RPi.GPIO.cleanup()
    win1.destroy()


win1 = Tk()
win1.title("Task 5.2C")
myFont = tkinter.font.Font(family = 'Arial', size = 12, weight = 'bold')

but1 = Button(win1, text = 'Turn redled ON', font = myFont, command = ledToggle1, bg = 'red', height = 1, width = 24)
but1.grid(row=1,column=0)

but2 = Button(win1, text = 'Turn greenled ON', font = myFont, command = ledToggle2, bg = 'red', height = 1, width = 24)
but2.grid(row=2,column=0)

but3 = Button(win1, text = 'Turn yellowled ON', font = myFont, command = ledToggle3, bg = 'red', height = 1, width = 24)
but3.grid(row=3,column=0)

exitButton = Button(win1, text = 'EXIT', font = myFont, command = close, bg = 'red', height = 1, width = 24)
exitButton.grid(row=4,column=0)
