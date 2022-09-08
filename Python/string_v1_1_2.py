import re

x = lambda a,b,c,d:(a**2)+(b**2)+(c**2)+(d**2)
result = x(5,2,1,2)
#print(result)
# Input Sentense
OrgSentense = "Transforming life through excellence in education and research. Excellence in education, grounded: in ethics and critical thinking, for improvement of life. An innovation ecosystem to extend knowledge and solve critical problems. Happy, accountable, caring and effective workforce and students. Active collaboration with national & international industries & universities for productivity and economic development. Service to the region and world through knowledge and compassion."
Prepositions = {'across', 'after', 'at', 'before', 'between', 'by', 'during', 'from', 'in', 'into', 'of', 'on', 'to', 'through', 'under', 'with', 'without', 'because', 'behalf', 'to', 'through', 'across','at', 'on', 'in'}
Conjunctions = {'for', 'and', 'nor', 'but', 'or', 'yet', 'so', 'both', 'either', 'neither', 'not', 'only', 'but', 'also'}
Articles = {'a', 'an', 'the'}
Symbols = {'~','@','#','$','%','^','&','*','(',')','.',':'}

OrgSen_words = re.split("\s",OrgSentense)
#OrgSen_words = re.sub("\s","$",OrgSentense)
#OrgSen_words = re.findall("ough excel",OrgSentense)
#OrgSen_words = re.search("and",OrgSentense)
#OrgSen_words = OrgSentense.split()
print(OrgSen_words)

Filt_Sen = [word for word in OrgSen_words if word not in Prepositions]
Filt_Sen = [word for word in Filt_Sen if word not in Conjunctions]
Filt_Sen = [word for word in Filt_Sen if word not in Articles]
Filt_Sen = [word for word in Filt_Sen if word not in Symbols]
print("----------------------------------------------------------------")
print(Filt_Sen)
print("----------------------------------------------------------------")



#print(Filt_Sen)
# words = re.sub("[&,:.]","",Sentense)
#words = Sentense.replace("&","")
#words = words.replace(",","")
#words = words.replace(".","")
# print(words)
# Remove duplicate words and prop, conj, articles...
# wordsList = words.split()
# wordsList = list(dict.fromkeys(words))
# print(wordsList)
# for i loop
# key = wordsList[i]
# value = key[2] 
# {key, values}


