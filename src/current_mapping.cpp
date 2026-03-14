//Constants for first linear function
double const a_1 = 4.52476;
double const b_1 = 0.02717;

//Constants for second linear function
double const a_2 = 0.53125;
double const b_2 = 0.002125;

//Constants for third linear function
double const a_3 = 3.33;
double const b_3 = 0.0;       

//Function to map current to voltage linearly 
double current_to_voltage_spice_data(double input_voltage) {
    return a_1 * input_voltage + b_1;
}

double current_to_voltage_real_data_small_data(double input_voltage) {
    return a_2 * input_voltage + b_2;
}

double current_to_voltage_real_data_medium_data(double input_voltage) {
    return a_3 * input_voltage + b_3;
}

//Main function to map current to voltage based on the input voltage range
double current_to_voltage(double input_voltage) {
    if(input_voltage < 0.2) {
        return current_to_voltage_real_data_small_data(input_voltage);
    }else if(input_voltage < 1 && input_voltage >= 0.2) {
        return current_to_voltage_real_data_medium_data(input_voltage);
    }else {
        return current_to_voltage_spice_data(input_voltage);
    }
}