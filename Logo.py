import turtle

# Set up the screen
screen = turtle.Screen()
screen.title("Google Logo")
screen.bgcolor("white")

# Create turtle object
t = turtle.Turtle()
t.speed(0)

# Function to draw a colored circle
def draw_circle(color, radius, x, y):
    t.penup()
    t.fillcolor(color)
    t.goto(x, y)
    t.pendown()
    t.begin_fill()
    t.circle(radius)
    t.end_fill()

# Draw the Google logo
draw_circle('#4285F4', 100, -200, 0)  # Blue
draw_circle('#EA4335', 100, 0, 0)     # Red
draw_circle('#FBBC05', 100, 200, 0)   # Yellow
draw_circle('#34A853', 100, -100, -100)  # Green
draw_circle('#FF6D00', 100, 100, -100)   # Orange

# Hide the turtle and display the result
t.hideturtle()
turtle.done()
