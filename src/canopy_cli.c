// Copyright 2015 Canopy Services, Inc.
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

#include "canopy_cli_internal.h"

#include <stdio.h>

//
// canopy-cli cloudvar -c "out float32 temperature"
// canopy-cli cloudvar -s temperature 54.3
//

int main(int argc, const char *argv[]) {
    const char *cmd = argv[1];
    if (argc <= 1 || !strcmp(cmd, "help")) {
        cmd_help(argc, argv);
    } else {
        printf("canopy-cli: '%s' is not a command. See 'canopy-cli help'\n", 
            cmd);
    }
    return 0;
}
