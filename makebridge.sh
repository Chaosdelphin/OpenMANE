#!/bin/bash
sudo brctl addbr br0
sudo ifconfig eth0 0.0.0.0
sudo ifconfig TN0 0.0.0.0
sudo brctl addif br0 eth0
sudo brctl addif br0 TN0
sudo ifconfig br0 up
sudo ifconfig TN1 192.168.3.2
