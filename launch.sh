#!/bin/bash

#./build/RCCar

#libcamera-vid -t 0 --inline -o udp://192.168.111.51:1234 #work
#libcamera-vid -t 0 --inline --listen -o tcp://0.0.0.0:1234
#libcamera-vid -t 0 --inline --listen -o - | cvlc stream:///dev/stdin --sout '#rtp{sdp=rtsp://:8554/stream1}' :demux=h264

#raspivid -t 0 -w 1920 -h 1080 -o udp://192.168.111.51:1234
raspivid -t 0 -w 1920 -h 1080 -b 10000000 -k -a 12 -fl -fps 30 -l -o tcp://0.0.0.0:1234

