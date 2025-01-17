# Crowd Simulation Project

This project simulates crowd behavior in an enclosed space, incorporating collision avoidance algorithms and path optimization techniques. Users can modify the number of agents and the layout of the simulation space.

## Project Structure

```
crowd-simulation
├── src
│   ├── main.cpp                  # Entry point of the application
│   ├── crowd_simulation.cpp      # Implementation of the CrowdSimulation class
│   ├── crowd_simulation.h        # Header file for the CrowdSimulation class
│   ├── collision_avoidance.cpp   # Implementation of collision avoidance algorithms
│   ├── collision_avoidance.h     # Header file for the CollisionAvoidance class
│   ├── path_optimization.cpp      # Implementation of path optimization algorithms
│   ├── path_optimization.h        # Header file for the PathOptimization class
│   └── utils
│       ├── layout.cpp            # Utility functions for layout management
│       └── layout.h              # Header file for layout functions
├── CMakeLists.txt                # CMake configuration file
└── README.md                     # Project documentation
```

## Features

- **Crowd Simulation**: Simulates the movement of multiple agents in a confined space.
- **Collision Avoidance**: Implements algorithms to prevent agents from colliding with each other.
- **Path Optimization**: Helps agents find the most efficient routes within the simulation area.
- **User Interaction**: Allows users to change the number of agents and modify the layout of the space.

## Building the Project

To build the project, ensure you have CMake installed. Then, navigate to the project directory and run the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

## Running the Simulation

After building the project, you can run the simulation with the following command:

```bash
./crowd_simulation
```

## Modifying Parameters

You can change the number of agents and the layout of the simulation space through user input during runtime. Follow the prompts in the console to adjust these parameters.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.