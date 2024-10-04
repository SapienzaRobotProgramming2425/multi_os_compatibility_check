#!/bin/sh

rm -rf build && mkdir build && cd build && cmake .. && make && ./01_simple && cd .. && rm -rf build