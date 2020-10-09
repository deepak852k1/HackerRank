import math
import os
import random
import re
import sys

meal_cost = float(input())
tip_percent = int(input())
tip_percent = meal_cost*tip_percent/100
tax_percent = int(input())
tax_percent = meal_cost*tax_percent/100
solve=meal_cost+tip_percent+ tax_percent
print(round(solve))
