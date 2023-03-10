/*
 * Copyright (c) 2019 Nicira, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CHECKER__
#error "Use this header only with sparse.  It is not a correct implementation."
#endif

#ifndef __NUMA_H_SPARSE
#define __NUMA_H_SPARSE 1

/* Avoid sparse warning "non-ANSI function declaration of function" with
 * libnuma < 2.0.13. */

struct bitmask {
    unsigned long size;
    unsigned long *maskp;
};

int numa_available(void);
struct bitmask *numa_allocate_nodemask(void);
void numa_bitmask_free(struct bitmask *);
void numa_set_localalloc(void);
void numa_set_preferred(int node);

#endif /* <numa.h> for sparse. */
