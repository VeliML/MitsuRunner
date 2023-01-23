#!/bin/bash

TEMPLATE_FILE=secrets.template
FILE=secrets.yaml

if test -f "$FILE" ; then
    echo "$FILE already exists."
    exit
fi

cp $TEMPLATE_FILE $FILE
echo Created $FILE
