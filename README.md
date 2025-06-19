# ✈ Aeroplane Seat Booking System (C Language)

This project is a *console-based seat booking system* developed using *C programming language. It simulates the process of **booking, cancelling, and viewing seats* in an aeroplane, using fundamental concepts of C such as arrays, structures, loops, and user-defined functions.

1.🎯 Objective

To design and implement a simple seat reservation system that:

- Displays the current seat layout.
- Allows users to book a specific seat by name.
- Allows users to cancel a previously booked seat.
- Displays the list of all passengers who have booked seats.

2D Arrays
Seats are arranged in a grid using a 2D array:

ROWS = 5 (i.e., 5 rows)

COLS = 4 (i.e., seats A–D per row)

This allows mapping each seat using indices like seats[2][1] representing 3B.

3. Seat Identification
Seats are identified using a combination of row number and column letter, such as 2C. The letter is converted to an index by subtracting 'A' from the character input.

4. Menu-Driven Interface
The program presents a looped menu that lets the user choose actions like:

Viewing seats

Booking a seat

Cancelling a booking

Viewing all passengers

🔍 Use Case
This project simulates a basic airline or train seat reservation system, often seen in kiosk terminals or online booking interfaces. It's great for educational purposes, especially for beginners learning:

File I/O (future enhancement)

Dynamic memory (if extended)

Data validation

🧠 Learning Outcomes
By working on this project, you’ll understand:

How to model real-world systems using data structures.

How to work with multi-dimensional arrays.

How to handle character and string input in C.

How to build simple user interfaces in the console.

How to modularize code using functions.

🚀 Future Enhancements
Save bookings in a file (persistent storage)

Track seat prices and generate invoices

Introduce seat classes (Economy, Business)

Add login for admin control

Develop a GUI version using C++ or Python

📌 Conclusion
This aeroplane seat booking system demonstrates how C programming can be used to simulate a real-world booking process with simple yet effective logic and structured programming concepts. It is ideal for students and beginners who want to apply theoretical concepts in a practical scenario.
