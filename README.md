# mitsurunner
Software for ESP8266 or ESP32 based device designed to prevent Mitsubishi heatpumps to do too short heating runs and melting ice too often from out unit.

This software started form topic in lampopumput.info site: https://lampopumput.info/foorumi/threads/msz-ln-sulatushuijaus.31223/ 

There are a lot of Finnish people suffering poor design of Mitsubishi heat pumps, especially MSZ-LN series pumps, whose goes to "grazy mode"where they melt ice from out unit in 30 to 40 minutes cycles, even there is no any ice on out unit.

The design of these heatpumps are poor from their software side and from mechanical side. The software in the units does not suit for the Finnish climate and most probably not to any climate, where pump needs to be used for heating and temperature goes below -5 degrees. The pump heats mainly with short cycles and tries to melt ice from out unit even there is no ice, due to poor fuzzy logic algorith which: instead of following current state with sensors, tries to forecast from previous experience, when to melt ice. The mechanical side probems are related to defrost temperature sensor and how it is located to touch felt, which get's wet and icy from melting water/condension. After using pump to heat a while, the felt becomes wet and get's ice, and after that the defrost sensor does not anymore get correct value it should measure, but it starts to measure icy felt, as it has been put to touch to it. 

This .yaml file is designed for ESPhome.io, which is needed to generate, compile and update sources. Please follow information from their site how to set-up environments.
