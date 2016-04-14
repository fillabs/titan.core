/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Lovassy, Arpad
 *
 ******************************************************************************/
// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.8.pre3 build 4
// for Attila Balasko (ethbaat@ehubuux110) on Wed Jun  2 15:51:57 2010


// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "PCO_PT.hh"
#include <stdio.h>
#include "memory.h"

namespace Titan__LogTestDefinitions {

PCO__PT::PCO__PT(const char *par_port_name)
	: PCO__PT_BASE(par_port_name)
{

}

PCO__PT::~PCO__PT()
{

}

void PCO__PT::set_parameter(const char *parameter_name,
	const char *parameter_value)
{

}

/*void PCO__PT::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void PCO__PT::Handle_Fd_Event_Error(int fd)
{

}

void PCO__PT::Handle_Fd_Event_Writable(int fd)
{

}

void PCO__PT::Handle_Fd_Event_Readable(int fd)
{

}

/*void PCO__PT::Handle_Timeout(double time_since_last_call) {}*/


void PCO__PT::user_map(const char *system_port)
{
   TTCN_warning("This is a Warning in the port"); //WARNING_UNQUALIFIED
   TTCN_Logger::log(TTCN_DEBUG,"This is a TTCN_DEBUG log in the port");//DEBUG_UNQUALIFIED
   TTCN_Logger::log(TTCN_WARNING,"This is a TTCN_WARNING log in the port");//WARNING_UNQUALIFIED
   TTCN_Logger::log(TTCN_ERROR,"This is a TTCN_ERROR log in the port");//ERROR_UNQUALIFIED
   
   TTCN_Logger::begin_event(TTCN_DEBUG);
     TTCN_Logger::log_event("This is a log_event");
   TTCN_Logger::end_event();
   
}

void PCO__PT::user_unmap(const char *system_port)
{

}

void PCO__PT::user_start()
{

}

void PCO__PT::user_stop()
{

}

void PCO__PT::outgoing_send(const CHARSTRING& send_par)
{

}

} /* end of namespace */

