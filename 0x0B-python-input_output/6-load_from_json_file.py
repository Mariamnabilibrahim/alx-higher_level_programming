#!/usr/bin/python3
""""difining function"""


import json


def load_from_json_file(filename):
    """creats an object"""
    with open(filename, "r", encoding="UTF-8") as f:
        return json.load(f)
