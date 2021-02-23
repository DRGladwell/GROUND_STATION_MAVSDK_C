/*
Code to take user input. The user input will be a tuple of (waypoint , waypoint type). 
'Waypoint' are predefined, they hold informatoion on waypoint location and UAV flight behavior. 
'Waypoint type' is a custome data type. In effect it's a string message.The UAV and ground station will have the 
same dictionary of waypoint types. This serves to specify what action will be perfromed at each waypoint. The UAV 
code can autonomously generate new waypoints base on this information and sensor data, making the use of the UAV 
much easier.

THE INTERFACE ALSO LAUNCHES THE UAV, THIS STARTES THE UAV HEALTH TEST FIRST..
*/

// array of (waypoint , waypoint type)

// method to read user input. Ideally an GUI but consol is sufficient.  

// methode to display user input. Ideally an GUI but consol is sufficient. Ideally a map of (waypoints, waypoint types)

/* method to parse user input. 
If it's of format 'way: location, ... , waypoint variabls  type: string' then add to array of (waypoint , waypoint type)
Other specifal commands can be added such as: erase current plan, redo last check point, modify waypint: 'int' ...
Command to start UAV launch. This will trigger uav_health_test.c++

// METHOD TO LAUNCH THE UAV

// method to send to the UAV the waypoints as a mission file.

/* method to send to UAV the waypoints type as a custom milssion file. Maybe should make 'Waypoint type' a string 
# and int with the int being the order of the 'waypoints types'.
*/