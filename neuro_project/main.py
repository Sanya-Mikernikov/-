import numpy as np


corp=input()

def pair(corp):
    for i in range(len(corp)-1):
        yield[corp[i],corp[i+1]]
    
pairs=pair(corp)

words={}

for fst, scnd in pairs:
    if fst in words.keys():
        words[fst].append(scnd)
    else:
        words[fst]=[scnd]
    
f_word=np.random.choice(corp)

while f_word.islower():
    f_word=np.random.choice(corp)

chain=[f_word]

w_kol=100

for i in range(w_kol):
    chain.append(np.random.choice(words[chain[-1]]))

print(" ".join(chain))