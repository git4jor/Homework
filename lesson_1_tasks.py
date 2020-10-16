#################################################################Lesson 1 Tasks

#===============================================================================
#2**n
#===============================================================================
def multiple_2(num):
   if ((num&(num-1)) == 0):
      return ("The input %d number is multiple by 2" %(num))
   return ("The input %d number is not multiple by 2" %(num))

#==================================================================
#(2**n)-1
#==================================================================
def multiple_2(num):
   if ((num&(num+1)) == 0):
      return ("The input %d number is multiple by (2**n) - 1" %(num))
   return ("The input %d number is not multiple by (2**n) - 1" %(num))

#===============================================================================
#1) If we list all the natural numbers below 10 that are multiples of 3 or 5,
#we get 3, 5, 6 and 9. The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.
#===============================================================================
def arithmetic_progression_S3_S5(num):
   #Number of multiply by 3.
   n_3 = num/3
   #Number of multiply by 5.
   n_5 = num/5
   #Number of multiply by 3*5.
   n_5_3 = num/5/3
   #Sn is sum of arithmetic progression. 
   Sn_3 = n_3*(2*3 + (n_3-1)*3)/2
   Sn_5 = n_5*(2*5 + (n_5-1)*5)/2
   Sn_5_3 = n_5_3*(2*5*3 + (n_5_3-1)*5*3)/2
   # Removing repeatable numbers.
   Sn = Sn_3 + Sn_5 - Sn_5_3

   print ("Sn_3 is: %d****Sn_5 is: %d****Sn_5_3 is: %d" %(Sn_3, Sn_5, Sn_5_3))
   return Sn

arithmetic_progression_S3_S5(1000)

#===============================================================================
#2) Longest Substring Without Repeating Characters
# I am sure that, there are solutions better than mine. :)
#===============================================================================
def get_substring(string):
   substr = ""
   current_list = []
   while (string != ""):
      if (string[0] not in current_list):
         current_list.append(string[0])
         string = string[1:]
      else:
         if (len(substr) > len(current_list)):
            substr = substr
         else:
            substr = ''.join(current_list)
         current_list = []

   print ("The longest substring without repeating characters is: "
               "\'%s', with the length of %d." %(substr, len(substr)))

get_substring("pwwkew")

#3) You have a dozen identical-looking balls and a balance scale.
#One of these balls has a slightly different weight from all of the others.
#What is the minimum amount of times you need to use the balance scale to determine
#which ball has the unique weight and whether it is heavier or lighter than the others?
#

#minimum amount of times is 3.
