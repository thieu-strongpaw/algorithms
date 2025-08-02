import math

def main():
    
    rows = 4

    def calc_element(n, k):
        row_fac = math.factorial(n)
        bot_lft = n - k
        bot_lft = math.factorial(bot_lft)
        bot_rht = math.factorial(k)
        bot     = bot_lft * bot_rht
        val     = row_fac / bot
        return val

    output = []
    rows = 5
    current_row = 1
    for i in range(rows):
        temp_lst = []
        for j in range(current_row):
            item = calc_element(i, j)
            temp_lst.insert(0, item)
        current_row += 1 
        output.insert(0, temp_lst)
    output.reverse()
    print(output)


if __name__ == "__main__":
    main()
