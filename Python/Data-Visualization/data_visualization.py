import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import statsmodels.api as sm

''' Make sure you have the below mentioned csv file in same directory as this file '''
data = pd.read_csv("Iris.csv")

print(data.info())


''' You can uncomment any diagram to get the data visualized '''

################# HISTOGRAM #################
# x = data.SepalWidthCm
# plt.figure(figsize = (15, 7))
# plt.hist(x, bins = 20, color = "brown")
# plt.title("Sepal Width(in cm)")
# plt.xlabel("Sepal_Width_cm")
# plt.ylabel("Count")


################# SWARM PLOT #################

# fig=plt.gcf()
# fig.set_size_inches(15,7)
# fig = sns.swarmplot(x="Species", y="PetalLengthCm", data=data)


################# BOX PLOT #################
# plt.figure(figsize = (15, 7))
# new_data = data[["SepalLengthCm", "SepalWidthCm", "PetalLengthCm", "PetalWidthCm"]]
# new_data.boxplot()


################# Violin Plot #################

# fig=plt.gcf()
# fig.set_size_inches(15,7)
# fig=sns.violinplot(x='Species',y='SepalLengthCm',data=data)

################# Pair Plot #################

# fig=plt.gcf()
# fig.set_size_inches(5,5)
# fig=sns.pairplot(data,hue="Species")

################# Quantile Plot #################

sm.qqplot(np.random.normal(20, 5, 50))
plt.title('Quantile Plot for random data')

plt.show()
