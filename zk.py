def is_leap_year(year):

  if year % 4 == 0:
    if year % 100 == 0:
      return year % 400 == 0
    else:
      return True
  else:
    return False

year = int(input("Enter a year: "))

if is_leap_year(year):
  print("{} is a leap year.".format(year))
else:
  print("{} is not a leap year.".format(year))