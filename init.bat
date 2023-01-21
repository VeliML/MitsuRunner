@echo off

set "FILE=secrets.yaml"

if exist "%FILE%" (
    echo "%FILE%" exists
    exit /b
)

call :create_file >"%FILE%"
echo Created "%FILE%"
exit /b

:create_file
echo # YAML file for your secrets including passwords
echo # Do not share with anyone or push into the repositoty!
echo.
echo # Your wifi details
echo wifi:
echo     ssid: "xxxxx"
echo     password: "xxxxxxxx"
echo # Set manual IP address so that wireless "OTA" update will work more reliably
echo # Check these numbers from your wifi network/router (often found in DHCP settings)
echo     manual_ip:
echo         static_ip: 192.168.1.100
echo         subnet: 255.255.255.0
echo         gateway: 192.168.1.0
echo.
echo # Enables firmware updates over wifi
echo # Set your unique password to prevent hackers to modify your device
echo ota:
echo     password: "password"
echo.
echo # MQTT broker configuration
echo # Set broker ip address to match
echo mqtt:
echo     broker: 192.168.1.xxx
echo     id: mqtt_client
echo     username: change_this
echo     client_id: change_this
echo     password: change_this
echo.
echo     #mqtt message prefix, change this to what you want
echo     topic_prefix: msz_ln/temperatureexit /b
exit /b
