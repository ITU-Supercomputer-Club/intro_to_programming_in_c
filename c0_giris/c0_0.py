# Interpretation/Compilation Example
# Mustafa Can Caliskan
# ITU Supercomputer Club, 2024

def print_hpc():
    print("Hello, I'm running!")

def do_sth_wrong():
    ptr = None
    ptr[0] = 42

if __name__ == "__main__":
    print_hpc()

    do_sth_wrong()  # This function will intentionally do things wrong.

    print_hpc()