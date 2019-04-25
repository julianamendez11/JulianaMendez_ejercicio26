%.dat: ODE.x
	./ODE.x

ODE.x: ODE.cpp
	c++ ODE.cpp -o ODE.x

clean:
	rm -rf *.x *.dat