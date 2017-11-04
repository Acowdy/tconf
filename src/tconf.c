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

#include "tconf.h"
#include <stdio.h>
#include <stdlib.h>

#define TCONF_INPUT_SOURCE_FILE 0
#define TCONF_INPUT_SOURCE_STRING 1

tconf_parser_t *tconf_new_file_parser(FILE *file) {
    tconf_parser_t *parser = malloc(sizeof(tconf_parser_t));
    if (parser == NULL) {
        return NULL;
    }
    parser->input_source_tag = TCONF_INPUT_SOURCE_FILE;
    parser->input.file = file;
    return parser;
}

tconf_parser_t *tconf_new_string_parser(char *string) {
    tconf_parser_t *parser = malloc(sizeof(tconf_parser_t));
    if (parser == NULL) {
        return NULL;
    }
    parser->input_source_tag = TCONF_INPUT_SOURCE_STRING;
    parser->input.string = string;
    return parser;
}

void tconf_delete_parser(tconf_parser_t *parser) {
    free(parser);
}

int tconf_parse(tconf_parser_t *parser, tconf_setting_t *setting) {
    // TODO
    return TCONF_STATUS_END;
}

tconf_setting_t *tconf_new_setting() {
    return malloc(sizeof(tconf_new_setting));
}

void tconf_delete_setting(tconf_setting_t *setting) {
    free(setting->key);
    free(setting->value);
}
