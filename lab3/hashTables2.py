def read_input():
    input_data = {}
    while True:
        key = input("Введите ключ: ")
        if key == 'ok':
            break
        value = input("Введите значение для ключа '{}': ".format(key))
        input_data[key] = value
    return input_data


if __name__ == "__main__":
    hash_table = read_input()
    for key, value in hash_table.items():
        print(f"Ключ: {key}, Значение: {value}")
        
del hash_table['name']
print(hash_table)


