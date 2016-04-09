if (isServer) exitwith {};
if (A2LIGHTS_CHECK) exitWith {};
A2LIGHTS_CHECK=true;


f1 = [4983.9385,6614.6343,27.50];
lc1 = [4986.8208,6619.5962,26.50];
lc2 = [4990.2695,6616.0361,26.50];
lc3 = [4978.6118,6626.6675,27.50];
lc4 = [4978.8086,6630.834,27.50];
lc5 = [4979.1362,6635.5249,27.50];
lc6 = [4975.1152,6606.9126,29.1];
lc7 = [4983.9385,6614.6343,27.50];
lc8 = [4978.6118,6626.6675,27.50];

x_lightt1 = "#LightPoint" createVehicleLocal f1;
x_lightt1 setLightBrightness 0.19;
x_lightt1 setLightAmbient [1.0, 1.0, 1.0];
x_lightt1 setLightColor [1.0, 1.0, 1.0];

x_light1 = "#LightPoint" createVehicleLocal lc1;
x_light1 setLightBrightness 0.19;
x_light1 setLightAmbient [1.0, 1.0, 1.0];
x_light1 setLightColor [1.0, 1.0, 1.0];

x_light2 = "#LightPoint" createVehicleLocal lc2;
x_light2 setLightBrightness 0.19;
x_light2 setLightAmbient [1.0, 1.0, 1.0];
x_light2 setLightColor [1.0, 1.0, 1.0];

x_light3 = "#LightPoint" createVehicleLocal lc3;
x_light3 setLightBrightness 0.19;
x_light3 setLightAmbient [1.0, 1.0, 1.0];
x_light3 setLightColor [1.0, 1.0, 1.0];

x_light4 = "#LightPoint" createVehicleLocal lc4;
x_light4 setLightBrightness 0.19;
x_light4 setLightAmbient [1.0, 1.0, 1.0];
x_light4 setLightColor [1.0, 1.0, 1.0];

x_light5 = "#LightPoint" createVehicleLocal lc5;
x_light5 setLightBrightness 0.19;
x_light5 setLightAmbient [1.0, 1.0, 1.0];
x_light5 setLightColor [1.0, 1.0, 1.0];

x_light6 = "#LightPoint" createVehicleLocal lc6;
x_light6 setLightBrightness 0.19;
x_light6 setLightAmbient [1.0, 1.0, 1.0];
x_light6 setLightColor [1.0, 1.0, 1.0];

x_light7 = "#LightPoint" createVehicleLocal lc7;
x_light7 setLightBrightness 0.19;
x_light7 setLightAmbient [1.0, 1.0, 1.0];
x_light7 setLightColor [1.0, 1.0, 1.0];

x_light8 = "#LightPoint" createVehicleLocal lc8;
x_light8 setLightBrightness 0.19;
x_light8 setLightAmbient [1.0, 1.0, 1.0];
x_light8 setLightColor [1.0, 1.0, 1.0];


while {true} do {
  if not(A2LIGHTS) exitWith {};
  x_light1 setLightBrightness 0.19;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0.19;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0;
  sleep 0.1;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0;
  sleep 0.5;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0.19;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0.19;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0.19;
  sleep 0.1;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0;
  sleep 0.5;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0.19;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0.19;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0;
  sleep 0.1;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0.19;
  sleep 0.5;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0.19;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0.19;
  x_lightt1 setLightBrightness 0;
  sleep 0.1;
  x_light1 setLightBrightness 0;
  x_light2 setLightBrightness 0;
  x_light3 setLightBrightness 0;
  x_light4 setLightBrightness 0;
  x_light5 setLightBrightness 0;
  x_light6 setLightBrightness 0;
  x_light7 setLightBrightness 0;
  x_light8 setLightBrightness 0;
  x_lightt1 setLightBrightness 0;
  sleep 0.5;
};

if not(isNull x_lightt1)then{deleteVehicle x_lightt1;};
if not(isNull x_light1)then{deleteVehicle x_light1;};
if not(isNull x_light2)then{deleteVehicle x_light2;};
if not(isNull x_light3)then{deleteVehicle x_light3;};
if not(isNull x_light4)then{deleteVehicle x_light4;};
if not(isNull x_light5)then{deleteVehicle x_light5;};
if not(isNull x_light6)then{deleteVehicle x_light6;};
if not(isNull x_light7)then{deleteVehicle x_light7;};
if not(isNull x_light8)then{deleteVehicle x_light8;};

A2LIGHTS_CHECK = false;

exit
