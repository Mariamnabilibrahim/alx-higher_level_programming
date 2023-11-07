#!/usr/bin/python3
"""definig write_file with two arguments"""


def append_write(filename="", text=""):
    """reads filename with UTF-8"""
    with open(filename, "a", encoding="UTF-8") as f:
        return f.write(text) 
