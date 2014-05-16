Oslab-2: Minix Custom Scheduler

Group  10:
	Saurabh Singh (CS09B032)
	Vijay Kumar M (CS09B038)
	Praveen Srinivas B (CS09B006)
	Rammurthy M (CS09B020)
	Sharath N (CS09B021)
	Abhijeet (CS10B001)
	
System Specifications :
	Minix 3.2.0
	
This folder contains :
	config.h
	schedproc.h
	pm_schedule.c
	sched_schedule.c
	README.txt
	changes_os2.txt
	DesignDoc.pdf
	copyComm.sh
	
Usage :
	For default minix scheduling add
		#define DEFAULT
	to config.h
	
	For lottery scheduling add
		#define LOTTERY_SCHED
	to config.h
	
	For multiple round robin do not define above two constants in config.h

	login to minix
	copy this folder to minix
	cd to this folder
	run ./copyComm.sh
	reboot