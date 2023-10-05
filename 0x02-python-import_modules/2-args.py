#!/usr/bin/python3
# 2-args.py
# Brennan D Baraban <375@holbertonschool.com>

if __name__ == "__main__":
    """prints the number of and the list of its arguments."""
    import sys

    count = len(sys.argv) - 1
    if count == 0:
        print("0 arguments.")
