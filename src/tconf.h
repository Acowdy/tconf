// Copyright 2017 Adam Cowdy
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TCONF_H
#define TCONF_H

#include <stdio.h>

typedef struct tconf_parser {
    int input_source_tag;
    union {
        FILE *file;
        char *string;
    } input;
} tconf_parser_t;

enum tconf_status_code {
    TCONF_STATUS_SUCCESS,
    TCONF_STATUS_END
};

typedef struct tconf_setting {
    char *key;
    char *value;
} tconf_setting_t;

tconf_parser_t *tconf_new_file_parser(FILE *file);
tconf_parser_t *tconf_new_string_parser(char *string);
void tconf_delete_parser(tconf_parser_t *parser);

int tconf_parse(tconf_parser_t *parser, tconf_setting_t *setting);

tconf_setting_t *tconf_new_setting();
void tconf_delete_setting(tconf_setting_t *setting);

#endif
