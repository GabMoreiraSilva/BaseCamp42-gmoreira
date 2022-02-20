#!/bin/sh
find . -type f | grep -e "\.sh$" | sed -e 's/\.sh$//' | sed -e 's/.*\///'