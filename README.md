# *Current Sensor Mapping from voltage values*

In this repo we have a simple function that maps the voltage from the currect sensor (electrical) to current values. The work is based on simulated values from LTSPISE and real data from testing.

For now we do not have enough real data to make a good mapping so we use a hybric approch in which we use different mapping functions for 3 different voltage ranges.

The first is based on real data and is in the mV/mA range, the second, also from real data, is in the from 0.2V to 1V and the last is based on simulated data from Spice for values greater that 1V.

All mapping functions are linear for now.

# *Function Specifications*

The function `current_to_voltage` in the `current_mapping.cpp` file takes as input a voltage value and returns the corresponding current value. 


