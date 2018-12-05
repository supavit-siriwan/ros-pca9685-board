#ifndef PCA9685Board_H_
#define PCA9685Board_H_

class PCA9685Board
{
public:
    PCA9685Board();
    ~PCA9685Board();
    int setup(const int i2c_address);
    void set_pwm_freq(float pwm_freq);
    void set_pwm_interval(int pin, int value);

private:
    void reset_all_();
    void pwm_write_(int pin, int on, int off);
    void full_on_(int pin, int tf);
    void full_off_(int pin, int tf);

    int i2c_address_;
    int io_handle_;
};

#endif  // PCA9685Board_H_
