#ifndef   _CANMACRODEFINE_H
#define   _CANMACRODEFINE_H

#define get_can_signal(X) {return can_receive_sig(x)} 

#define WHEELSPEEDKPHFACTOR 0.01    
#define STEERINGWHEELANGMAX 550
#define STEERINGWHEELANGMIN (-550)


#define VEHICELSPEEDFACTOR 0.01

#define VEHLALTRLACCELFACTOR 0.027127
#define VEHLALTRLACCELOFFSET 21.593  

#define VEHLONGACCELFACTORT 0.027127
#define VEHLONGACCELOFFSET 21.593 

#define YAWRATEFACTOR 0.05
#define YAWRATEOFFSET 100

#define STEERINGWHEELANGLEFACTOR 0.04375

#define TEMPERATUREFACTOR 0.5
#define TEMPERATUREOFFSET 40


#endif/*_CANMACRODEFINE_H*/


