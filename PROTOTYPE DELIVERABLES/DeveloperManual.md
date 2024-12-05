## Introduction
Developers account of the process of making the aforementioned ambient patch. 


## Table of Contents

1. [Overwiew](#overview)
2. [Bill Of Materials]
3. [Implementation Details]



---

## 1. Overview

1. This is a detailed document containing the following items:
    - Bill of Materials – Use Markdown syntax to create a table that lists all the materials required to build the project. Your table must include names, distributors, prices, and quantity.

# Bill Of Contents

https://docs.google.com/spreadsheets/d/11ytPP0nMzrcx3o7NKqnVtWyDHOX8orfYpUUZtDensiU/edit?usp=sharing

        
# Implementation Details – Write upcontaining the following information:

1. Gestures you chose to capture.

        I wanted to basically make a wearable instrument. I wanted to capture motion like the angle of bend and also xyz axis moviement. 

 2. What sensors you considered using, and why you chose one over the rest.

        I considered using flex for more lead heavy sounds and to use accelerometers for less detailed and more time based effects. I found that this was really difficult to control because unless the accelerometer was at rest there was always some kind of sound coming in. If i were to attach this to a glove I would face a lot of issues. I think it would be wiser to control the accelerometer with a second sensor. 




    3. What was successful and what was unsuccessful.

        As I mentioned earlier it was difficult to account for the accelerometers control. Instead I want to use the button and ultrasonic sensor to control the granulator. I want to set the time based 
        effect with a potentiometer. 

        I want to finally  use the accelerometer in tandem with the flex to really come up with something detailed. 


    4. Future plans for continuing the development of your project.

        I just discovered the physical modeling tutorials for mi.gen which is similar to gen but with some interesting outcomes. I noticed there was a camera based guitar instrument made with media pipe and mi.gen. It gave me a couple of ideas about how to solve my issue with the accelerometer. 

        I could potentially have the accelerometer identify the point in space and liken it to that of a guitar fret on the left glove. I will scale it so that I will translate the distance to the octave range/frequency range. I will have the flex sensors sit on the right fingers with degrees of bend that will be used to play a mi.gen physical model whose octave is dictated by the accelerometer. 

         I DONT KNOW YET how I can have each string be independent of each other. I could maybe have the range of the flex sensors start at the string notes on a bass guitar? I only have 3 flex sensors so this will be a difficult ordeal. 