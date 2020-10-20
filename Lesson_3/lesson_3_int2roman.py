    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman_str = ""
        dec2roman_dict = {1: "I",5: "V", 10: "X", 50: "L", 100: "C", 500: "D", 1000: "M"}
        cnt = 1
        while num != 0:
            if num%10 == 4:
                roman_str = dec2roman_dict[cnt] + dec2roman_dict[5*cnt] + roman_str
            elif num%10 == 9:
                roman_str = dec2roman_dict[cnt] + dec2roman_dict[10*cnt] + roman_str
            elif num%10 - 5 > 0:
                roman_str = dec2roman_dict[5*cnt] + (num%10 - 5)*dec2roman_dict[cnt] + roman_str
            elif num%10 - 5 < 0:
                roman_str = dec2roman_dict[cnt] * (num%10) + roman_str
            else:
                roman_str = dec2roman_dict[cnt*5] + roman_str
            cnt = cnt * 10
            num = num / 10
        return roman_str
        
