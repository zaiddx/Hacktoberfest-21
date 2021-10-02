'''
This Python script Differentiates the files to respective folders, 
provided it needs to be executed from outside this repository directory.
'''

import os
fetch_path = "Hacktoberfest-21/" # root of the folder to search out from
avail_ext = ["CPP", "Python", "C","Java", "Jupyter", "Others"] #folder to create up
for folder in avail_ext:
    os.mkdir(fetch_path+folder)
for root, dirs, files in os.walk(fetch_path): #segregate the files.
    # print(root, dirs, files)
    for file in files:
        if file.endswith(".cpp"):
             os.rename(fetch_path+file, fetch_path+'CPP/'+file)
        elif file.endswith(".py"):
             os.rename(fetch_path+file, fetch_path+'Python/'+file)
        elif file.endswith(".c"):
             os.rename(fetch_path+file, fetch_path+'C/'+file)
        elif file.endswith(".java"):
             os.rename(fetch_path+file, fetch_path+'Java/'+file)
        elif file.endswith(".ipynb"):
             os.rename(fetch_path+file, fetch_path+'Jupyter/'+file)
        elif file.endswith(".md"):
             #ignore
             continue
        else:
            os.replace(fetch_path+file, fetch_path+'Others/'+file)
    break
print("Done!!!!")