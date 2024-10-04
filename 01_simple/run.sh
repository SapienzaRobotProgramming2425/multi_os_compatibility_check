#!/bin/sh

mkdir build && cd build && cmake .. && make && ./01_simple && cd .. && rm -rf build