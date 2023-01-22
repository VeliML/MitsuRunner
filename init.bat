@echo off

set "TEMPLATE_FILE=secrets.template"
set "FILE=secrets.yaml"

if exist "%FILE%" (
    echo "%FILE%" already exists.
    exit /b
)

copy "%TEMPLATE_FILE%" "%FILE%"
echo Created "%FILE%"
