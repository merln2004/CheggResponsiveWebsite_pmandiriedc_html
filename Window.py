import turtle
import math

# Setup window
wn = turtle.Screen()
wn.bgcolor("black")
wn.title("Simulasi Rotasi Planet")

# Setup Sun
sun = turtle.Turtle()
sun.shape("circle")
sun.color("yellow")

# Function to create a planet
def create_planet(color, distance, size):
    planet = turtle.Turtle()
    planet.color(color)
    planet.shape("circle")
    planet.penup()
    planet.shapesize(size)
    planet.goto(distance, 0)
    planet.pendown()
    return planet

# Creating planets
planet1 = create_planet("blue", 100, 0.6)
planet2 = create_planet("red", 150, 0.8)
planet3 = create_planet("green", 200, 1.0)

# Function to move planets
def move_planet(planet, distance, angle_speed):
    angle = 0
    while True:
        x = distance * math.cos(math.radians(angle))
        y = distance * math.sin(math.radians(angle))
        planet.goto(x, y)
        angle += angle_speed

# Use different threads to move planets
turtle.tracer(0, 0)
for _ in range(100):
    move_planet(planet1, 100, 3)
    move_planet(planet2, 150, 2)
    move_planet(planet3, 200, 1.5)
    wn.update()

wn.mainloop()