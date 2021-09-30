import json
import os
from itertools import product

import numpy as np
import scipy.stats
from PIL import Image

entropy_values = {}


def extract_entropy(img):
    entropies = []
    bins = np.bincount(img.ravel(), minlength=0)
    frequencies = bins / np.sum(bins)
    entropies.append(scipy.stats.entropy(frequencies))
    return np.array(entropies)


def load_image(infilename):
    img = Image.open(infilename)
    img.load()
    data = np.asarray(img, dtype="int32")
    return data


def image_entropy(imfilename):
    entropy_vector = []
    im = load_image(imfilename)
    entropies = extract_entropy(im)
    return entropies


# detect entropy for all image files inside of folder 'img'
for file in os.listdir("img"):
    entropyies = image_entropy("img/" + file)
    entrop_values[str(file)] = entropyies

with open("entropy.json", "w+") as fp:
    json.dump(entrop_values, fp, sort_keys=True, indent=4)
