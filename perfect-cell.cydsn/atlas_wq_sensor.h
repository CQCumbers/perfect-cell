#include "project.h"

#define CONDUCTIVITY 101
#define TEMPERATURE 96
#define DO 97
#define ORP 98
#define PH 102

struct{
    float ec;
    float tds;
    float sal;
    float sg;
}typedef con_reading;

struct{
    float temperature;
    float dissloved_oxygen;
    float orp;
    float ph;
    float ec;
    float tds;
    float sal;
    float sg;
}typedef wq_reading;

// Sensor function to take reading
int atlas_sensor_sleep(uint8 sensor_address);
int atlas_sensor_wake(uint8 sensor_address);
uint8 atlas_take_single_reading(uint8 sensor_address, float *reading);
uint8 atlas_take_con_reading(con_reading *reading);
uint8 zip_atlas_wq(char *labels[], float readings[], uint8 *array_ix, uint8 max_size);
//wq_reading atlas_wq_reading();

// Additional functionality