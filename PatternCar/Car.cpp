#include <iostream>

class Car
{
public:

	void startEngine()
	{
		std::cout << "Car engine started" << std::endl;
	}

	void stopEngine()
	{
		std::cout << "Car engine stopped" << std::endl;
	}

	void accelerate()
	{
		std::cout << "Car accelerating" << std::endl;
	}

	void turnLeft()
	{
		std::cout << "Car turning left" << std::endl;
	}

	void turnRight()
	{
		std::cout << "Car turning right" << std::endl;
	}

	void brake() 
	{
		std::cout << "Car braking" << std::endl;
	}
};

class CarFacade
{
private:
	Car car;
public:
	void startCar()
	{
		car.startEngine();
	}

	void stopCar()
	{
		car.stopEngine();
	}

	void drive(int speed)
	{
		car.startEngine();
		car.accelerate();
		std::cout << "Car Driving at speed " << speed << std::endl;
		car.brake();
		car.stopEngine();
	}
	void turn(char direction)
	{
		car.startEngine();
		if (direction == 'l')
		{
			car.turnLeft();
		}
		else if (direction == 'r')
		{
			car.turnRight();
		}
		car.stopEngine();
	}
};

int main()
{
	CarFacade carFacade;
	std::cout << "Starting the car..." << std::endl;
	carFacade.startCar();

	std::cout << "\nDriving the car..." << std::endl;
	carFacade.drive(60);

	std::cout << "\nTurning the car..." << std::endl;
	carFacade.turn('left');

	std::cout << "\nStopping the car..." << std::endl;
	carFacade.stopCar();

	return 0;
}