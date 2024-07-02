hash_table = {}

hash_table['name'] = 'Damelya'
hash_table['age'] = 20
hash_table['university'] = 'KBTU'

print("Значение ключа 'name':", hash_table['name'])
print("Значение ключа 'age':", hash_table['age'])
print("Значение ключа 'university':",hash_table['university'])

if 'age' in hash_table:
    print("YES")
    
del hash_table['university']
print(hash_table)

for key in hash_table:
    print(key)

for value in hash_table.values():
    print(value)