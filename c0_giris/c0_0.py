"""
    Interpretation/Compilation Example
    Author: Mustafa Can Caliskan
    ITU Supercomputer Club, 2024
"""

def print_language():
    print("Hello, I'm Python!")

def do_sth_wrong():
    x

if __name__ == "__main__":
    print_language()

    do_sth_wrong()  # This function will intentionally do things wrong.

    print_language()