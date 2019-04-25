
import numpy as np
import matplotlib.pyplot as plt


euler=np.genfromtxt("euler.dat")
tiempo_e=euler[:,0]
posicion_e=euler[:,1]
velocidad_e=euler[:,2]

rk=np.genfromtxt("rk.dat")
tiempo_rk=rk[:,0]
posicion_rk=rk[:,1]
velocidad_rk=rk[:,2]

leapfrog=np.genfromtxt("leapfrog.dat")
tiempo_leapfrog=leapfrog[:,0]
posicion_leapfrog=leapfrog[:,1]
velocidad_leapfrog=leapfrog[:,2]



plt.figure()
data = np.loadtxt("ODE.dat")

plt.subplot(3,3,1)
plt.xlabel('Posicion')
plt.ylabel('Tiempo')
plt.title("Euler")
plt.plot(tiempo_e,posicion_e)

plt.subplot(3,3,2)
plt.xlabel('Posicion')
plt.ylabel('Tiempo')
plt.title("RK")
plt.plot(tiempo_rk,posicion_rk)


plt.subplot(3,3,3)
plt.xlabel('Posicion')
plt.ylabel('Tiempo')
plt.title("Leapfrog")
plt.plot(tiempo_leapfrog,posicion_eleapfrog)

plt.subplot(3,3,4)
plt.xlabel('Velocidad')
plt.ylabel('Tiempo')
plt.title("Euler")
plt.plot(tiempo_e,velocidad_e)

plt.subplot(3,3,5)
plt.xlabel('Velocidad')
plt.ylabel('Tiempo')
plt.title("RK")
plt.plot(tiempo_rk,velocidad_rk)

plt.subplot(3,3,6)
plt.xlabel('Velocidad')
plt.ylabel('Tiempo')
plt.title("Leapfrog")
plt.plot(tiempo_leapfrog,velocidad_leapfrog)

plt.subplot(3,3,7)
plt.xlabel('Velocidad')
plt.ylabel('Posicion')
plt.title("Euler")
plt.plot(posicion_e,velocidad_e)

plt.subplot(3,3,8)
plt.xlabel('Velocidad')
plt.ylabel('Posicion')
plt.title("RK")
plt.plot(posicion_rk,velocidad_rk)


plt.subplot(3,3,9)
plt.xlabel('Velocidad')
plt.ylabel('Posicion')
plt.title("Leapfrog")
plt.plot(posicion_leapfrog,velocidad_leapfrog)



plt.savefig("ODE.png")
