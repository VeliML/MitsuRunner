# MitsuRunner introduction
Software for ESP8266 or ESP32 based device designed to prevent Mitsubishi heatpumps to do too short heating runs and de-frosting outdoor unit every 30 minutes or so. This .yaml file is designed for ESPhome.io, which is needed to generate, compile and update sources. Please follow information from their site how to set-up environments.

Many Finns suffer from poor design of Mitsubishi heat pumps. In normal winter at -15 c degreees especially MSZ-LN series does de-frost every 30/40 minutes even if there any ice in outdoor unit, ie. no need for defrost. Constant de-frost leads to poor heating and most likely very poor effiency ("COP") compared to unit where defrost happens in very same conditions only once every 2-3 hours. 

## Background
This software started from topic in lampopumput.info website: https://lampopumput.info/foorumi/threads/msz-ln-sulatushuijaus.31223/ 

The design of these Mitsubishi MZN-LN25/35 etc. heatpumps is poor both in software and in mechanics. **The software in the units does not suit for the Finnish climate and most probably not to any climate where pump needs to be used for heating and temperature goes below -5 degrees.** The pump heats mainly with short cycles (under 60 minutes) and tries to melt ice from outdoor unit's heat exhanger even there is no ice. This is waste of energy and makes heating inefficient. 

This is due to poor "fuzzy logic" algorith which: 
- Instead of following current state with sensors it tries to predict from previous cycles when outdoor unit needs de-frost 
- The mechanical side probems are related to defrost temperature sensor. It is used to detect when the ice has melt from outdoor heat exhanger. The defrost temperature sensor is installed poorly so it touches non-waterproof insulation material which gets wet from melting water/condensation and then freezes. **Frozen defrost sensor does not measure correct value used needed for "fuzzy logic".** Thus it starts to affect device's "fuzzy logic" which starts to think that heating has been too long as outdoor heat exhanger is too icy and thus starts to decrease duration of heating... and this leads to situation where pump does not heat much but tries to melt outdoor unit's heat exhanger often. Basically wasting energy by melting really often means it heats outside air by taking heat from inside. 

## Harwdare shopping list
- 1 ESP32 or ESP8266 based controller, for exampple WeMos D1 Mini
- 1 USB power source for controller
- 1 relay compatible with controller, for example Wemos D1 mini relay shield
- 2 waterproof DS18B20 temperature sensors
- (2 non-waterproof DS18B20 for backup in case waterproof sensors reacts too slow)
- 1 4K7 (4,7Kohm) resistor
- 1 68Kohm resistor 

And some basic hardware store items like 
- wire (multicore wire like CAT-cable or phone cable)
- enclosure for contoller
- etc.
