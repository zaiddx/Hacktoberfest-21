def convert(s):
    """ Function for coverting Fahrenheit to Celcius """
    f = float(s)    # temperature in fahrenheit
    c = (f - 32) * 5/9
    return c

print("Temperature in Celcius:", convert(78))
