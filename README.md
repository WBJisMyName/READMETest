# Linux- SD Card SMART Query
Get S.M.A.R.T Information for Transcend microSDHC/SDXC430T and microSDXC450I.

-------------------------
The various statuses of SD and MicroSD products are located in the SMART block of the device. 
By reading and analyzing the SMART block, you can grasp the product name, serial number, 
firmware version, Erase count, health, etc. of the device, so as to monitor and find the device 
early potential problems. This document provides a way to read and print SMART block to enable 
SMART command in Linux®. 

The user can modify the open source code according to this document to realize the function of 
reading the SMART block, and analyze the SMART block through the fields defined in the product 
data sheet to obtain SMART information. 

Linux Environment Setup
-------------------------

- Download mmc-utils package and modify it to support SMART DUMP function. Please download the source code and modify it step by step.

1. Download the code by following command with terminal.
```
$ git clone https://kernel.googlesource.com/pub/scm/linux/kernel/git/cjb/mmc-utils-old
```
2. Use the Make command to compile the source code.
```
$ make
```
3. After build success, check the availability of the mmc tool by -h
```
$ ./mmc –h
```

Usage
-------------------------
Add code into corresponding file.

Command Execution
-------------------------
1. To dump SMART raw data</br></br>
![Buffer](https://github.com/WBJisMyName/READMETest/blob/main/smtbuffer.png)

2. To show SMART info</br></br>
![SMART](https://github.com/WBJisMyName/READMETest/blob/main/smart.png)

3. To show card life(Heath)</br></br>
![Heath](https://github.com/WBJisMyName/READMETest/blob/main/health.png)


