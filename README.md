# MitsuRunner introduction
Software for ESP8266 or ESP32 based device designed to prevent Mitsubishi Electric heatpumps to do too short heating runs and de-frosting outdoor unit every 30 minutes or so. This .yaml file is designed for https://ESPhome.io, which is needed to generate, compile and update sources. Please follow information from their site how to set-up environments.

Many Finns suffer from poor design of Mitsubishi heat pumps. In normal winter at -15 c degreees especially MSZ-LN series does de-frost every 30/40 minutes even when there is practically no frost in the outdoor unit, ie. no need to defrost. Frequent de-frost leads to poor heat production and most likely very poor effiency ("COP") compared to unit where defrost happens in very same conditions only once every 2-3 hours. 

## Background
This software started from topic in lampopumput.info website: https://lampopumput.info/foorumi/threads/msz-ln-sulatushuijaus.31223/ 

The design of these Mitsubishi MZN-LN25/35 etc. heatpumps is poor both in software and in mechanics. **The software in the units does not suit for the Finnish climate and most probably not to any climate where pump needs to be used for heating and temperature goes below -5 degrees.** The pump heats mainly with short cycles (under 60 minutes) and tries to melt frost from outdoor unit's heat exhanger even there is none. This is waste of energy and makes heating inefficient. 

This is due to poor "fuzzy logic" algorithm which: 
- Instead of following current state with sensors it tries to predict from previous cycles when outdoor unit needs de-frost 
- The mechanical probems are related to defrost temperature sensor. It is used to detect when the frost has melt from outdoor heat exhanger. The defrost temperature sensor is installed poorly so it touches non-waterproof insulation material which gets wet from melting water/condensation and then freezes. **Frozen defrost sensor does not measure correct value used needed for "fuzzy logic".** Thus it starts to affect device's "fuzzy logic" which starts to think that heating has been too long as outdoor heat exhanger is too frosty and thus starts to decrease duration of heating... and this leads to situation where pump does not heat much but tries to melt outdoor unit's heat exhanger frequently. Basically wasting energy by melting really often means it heats outside air by taking heat from inside. 

## Operation principle
MitsuRunner cheats heat pump by switching a 33k resistor in place of de-frost thermistor (measuring outdoor unit's heat exchanger) of the heat pump. That makes the heat pump to think that temperature is above zero celsius and there is no need to de-frost. MitsuRunner itself uses two thermistor to measure temperature difference (delta) between outdoor heat exchanger and outdoor air. When difference (delta) is big enough, it switches heat pump's real de-frost thermistor back and lets the heat pump to de-frost. After de-frosting the 33k resistor is switched back until MitsuRunner triggers next de-frost.

## Harwdare shopping list
- 1x ESP32 or ESP8266 based controller, for example WeMos D1 Mini
- 1x USB power source for the controller
- 1x relay compatible with the controller, for example Wemos D1 Mini Relay Shield
- 2x waterproof DS18B20 temperature sensors
- 1x 33k (33000 ohm) resistor to be switched in the place of de-frost thermistor ("hack" resistor)
- 1x 4k7 (4700 ohm) resistor as 1-wire pull-up resistor

And some basic hardware store items like 
- wire (multicore wire like CAT-cable or phone cable)
- enclosure for contoller

## Authors
- Veli Matti Lastumäki (Velsku at lampopumput.info)
- Joonas Ihonen (puu at lampopumput.info)
- Ilkka Roivainen (iro at lampopumput.info)

## Links
- MitsuRunner wiki page (en/fi): https://mitsurunner.com
- MitsuRunner discussion (fi): https://lampopumput.info/foorumi/threads/msz-ln-sulatushuijaus.31223/
