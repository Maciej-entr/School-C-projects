# cpp-simulation

This project simulates the movement of 100 people through the center of four rooms without overlapping each other. The simulation is designed to demonstrate basic principles of object-oriented programming, collision detection, and movement algorithms.

## Project Structure

- **src/**
  - **main.cpp**: Entry point of the simulation. Initializes rooms and people, and starts the simulation process.
  - **person.cpp**: Implementation of the `Person` class, including movement and overlap checking methods.
  - **person.h**: Definition of the `Person` class with properties and methods for movement and collision detection.
  - **room.cpp**: Implementation of the `Room` class, managing room layout and people within it.
  - **room.h**: Definition of the `Room` class with properties and methods for adding and removing people.
  - **simulation.cpp**: Implementation of the `Simulation` class, orchestrating movement and ensuring no overlaps occur.
  - **simulation.h**: Definition of the `Simulation` class with methods for initializing and running the simulation loop.

- **CMakeLists.txt**: Configuration file for CMake, specifying project name, required C++ standard, and source files.

## Building the Project

To build the project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Compile the project:
   ```
   make
   ```

## Running the Simulation

After building the project, you can run the simulation with the following command:

```
./cpp-simulation
```

## License

This project is licensed under the MIT License. See the LICENSE file for more details.