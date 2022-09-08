def vowel_count():
    for i in range(5):
        st = input()
        count = 0
        if st not in words:
            for j in st:
                if j in vowels:
                    count += 1
            op.append(count)
        else:
            op.append("NA")
    return(op)

words= ["he","she","we","what","when","is","was","are","have","has","had","of","at","for","and","but"]
vowels = "aeiou"
op = []
print(vowel_count())
