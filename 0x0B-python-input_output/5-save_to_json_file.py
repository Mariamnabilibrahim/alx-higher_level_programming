#!/usr/bin/python3
"""difinig function"""


import json


def save_to_json_file(my_obj, filename):
    """writes an objects to file"""
    with open(filename, "w", encoding="UTF-8") as f:
        json.dump(my_obj, f)
