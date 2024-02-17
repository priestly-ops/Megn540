#include "Lab2_Tasks.h"

void Send_Loop_Time( float _time_since_last, char command )
{
    // start a timer
    Time_t start_time = Timing_Get_Time();

    // Do the thing you need to do.
    float time_loop = _time_since_last;

    // calculate time it took to do task
    float delta_time_sec = Timing_Seconds_Since( &start_time );

    float ret_val[2] = { time_loop, delta_time_sec };

    // send response right here if appropriate.
    USB_Send_Msg( "cff", command, &ret_val, sizeof( ret_val ) );
}

void Task_Send_Loop_Time( float _time_since_last )
{
    if( Timing_Seconds_Since( &task_time_loop_last ) >= task_time_loop_send_period ) {
        Send_Loop_Time( _time_since_last, 'T' );
        task_time_loop_last = Timing_Get_Time();
    }
}

void Send_Time_Now( float _time_since_last, char command )
{
    // start a timer
    Time_t start_time = Timing_Get_Time();

    // Do the thing you need to do.
    float time_now = Timing_Get_Time_Sec();

    // calculate time it took to do task
    float delta_time_sec = Timing_Seconds_Since( &start_time );

    float ret_val[2] = { time_now, delta_time_sec };

    // send response right here if appropriate.
    USB_Send_Msg( "cff", command, &ret_val, sizeof( ret_val ) );
}

void Task_Send_Time_Now( float _time_since_last )
{
    Send_Time_Now( _time_since_last, 'T' );
}