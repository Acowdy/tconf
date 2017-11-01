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

#ifndef TESTING_H
#define TESTING_H

#include <configure.h>
#include <stdio.h>
#include <stdlib.h>

#define TEST_CASE int main(int argc, char **argv)

void assert_true(int cond, char *failmsg) {
    if (!cond) {
        fprintf(stderr, "assertion failed: %s\n", failmsg);
        exit(1);
    }
}

void assert_false(int cond, char *failmsg) {
    if (cond) {
        fprintf(stderr, "assertion failed: %s\n", failmsg);
        exit(1);
    }
}

#endif
