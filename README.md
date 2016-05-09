RPM Servo sketch
----------------

Modified Sweep example code to follow this sequence:

	Ign off: valve open.
	Ign sw on: sweeps left-stop, sweeps right- stop sweeps left back to open position.
	Bike starts: sweeps right to closed position.
	Bike drives:
	0 - 6000 rpm - closed
	6000 - 10 000 rpm - sweep where 6k is closed and 10k is open.