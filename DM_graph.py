import numpy as np

import matplotlib.pyplot as plt

x = np.loadtxt("tray.txt")[:, 0]

v = np.loadtxt("tray.txt")[:, 1]

t = np.loadtxt("tray.txt")[:, 2]

plt.plot(t, x, label = "Posicion vs Tiempo")
plt.legend(loc=0)
plt.xlabel("Tiempo")
plt.ylabel("Posicion")
plt.title("X vs t")
plt.savefig("pos.png")

plt.figure()
plt.plot(t, v, label = "Velocidad vs Tiempo")
plt.xlabel("Tiempo")
plt.ylabel("Velocidad")
plt.title(" V vs t ")
plt.legend(loc=0)
plt.savefig("vel.png")

plt.figure()
plt.plot(x, v, label = "Velocidad vs Posicion")
plt.xlabel("Posicion")
plt.ylabel("Velocidad")
plt.title(" V vs x ")
plt.legend(loc=0)
plt.savefig("phase.png")
