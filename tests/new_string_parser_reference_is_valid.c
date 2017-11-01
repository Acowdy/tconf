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

#include "testing.h"
#include <stdio.h>
#include <tconf.h>

TEST_CASE

// We don't care if the file was successfully opened, so no error checking
char *s = "Example: true";
tconf_parser_t *parser = tconf_new_string_parser(s);
assert(parser != NULL);

END_TEST_CASE
