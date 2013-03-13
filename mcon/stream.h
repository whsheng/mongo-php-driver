/**
 *  Copyright 2009-2013 10gen, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __MCON_STREAM_H__
#define __MCON_STREAM_H__

#include "types.h"
#include "config.h"
#include "php.h"
#include "/Users/bjori/.apps/5.4/include/php/main/php_streams.h"
#include "/Users/bjori/.apps/5.4/include/php/main/php_network.h"


void* php_mongo_stream_connect(mongo_server_def *server, mongo_server_options *options, char **error_message);
int php_mongo_stream_read     (mongo_connection *con, mongo_server_options *options, void *data, int size, char **error_message);
int php_mongo_stream_send     (mongo_connection *con, mongo_server_options *options, void *data, int size, char **error_message);
void php_mongo_stream_close   (mongo_connection *con, int why);

#endif

