# Matthew Turi
# ID: 822202323
# CS320 Programming Languages

from sys import argv

file_name = argv[1] + ".nocom"

no_com = open(file_name, "w+")

open_braces = ["{", "(", "["]
close_braces = [")", "]", "}"]
stack = []
string_seek = False

with open(argv[1]) as file:
    multi_line = False
    for line in file:
        if multi_line:
            if "*/" in line:
                multi_line = False
                continue
            continue
        elif "/*" in line:
            multi_line = True
        elif "//" in line:
            if "\//" in line:
                no_com.write(line)
            elif '"' in line:
                for first_char in line:
                    if string_seek:
                        if first_char == '"':
                            stack.pop()
                            string_seek = False
                        elif first_char == '/':
                            if not stack:
                                break
                            no_com.write(line)
                            break
                    elif first_char == '"':
                        stack.append(first_char)
                        string_seek = True
            else:
                for second_char in line:
                    if second_char == '/':
                        no_com.write("\n")
                        break
                    no_com.write(second_char)
        else:
            no_com.write(line)
no_com.close()
stack.clear()

with open(file_name) as file2:
    error = False
    string_seek = False
    while 1:
        third_char = file2.read(1)
        if not third_char:
            break
        if string_seek:
            if third_char == '"':
                string_seek = False
                continue
        elif third_char == '"':
            string_seek = True
        elif third_char in open_braces:
            stack.append(third_char)
        elif third_char in close_braces:
            try:
                check = stack.pop()
                if third_char == ')':
                    if check != '(':
                        error = True
                        print("UNBALANCED")
                        break
                elif third_char == ']':
                    if check != '[':
                        error = True
                        print("UNBALANCED")
                        break
                elif third_char == '}':
                    if check != '{':
                        error = True
                        print("UNBALANCED")
                        break
            except IndexError:
                error = True
                print("UNBALANCED")
                break
    if not error:
        if not stack:
            print("BALANCED")
        else:
            print("UNBALANCED")
no_com.close()
