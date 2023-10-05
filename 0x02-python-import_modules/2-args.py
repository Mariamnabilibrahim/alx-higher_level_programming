#!/usr/bin/python3
# 2-args.py
# Brennan D Baraban <375@holbertonschool.com>

if __name__ == "__main__":
    """prints the number of and the list of its arguments."""
    import sys

    c = len(sys.argv) - 1
    if c == 0:
        print("0 arguments.")
