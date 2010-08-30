/*-*- Mode: C; c-basic-offset: 8; indent-tabs-mode: nil -*-*/

#ifndef foospecifierhfoo
#define foospecifierhfoo

/***
  This file is part of systemd.

  Copyright 2010 Lennart Poettering

  systemd is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  systemd is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with systemd; If not, see <http://www.gnu.org/licenses/>.
***/

typedef char* (*SpecifierCallback)(char specifier, void *data, void *userdata);

typedef struct Specifier {
        const char specifier;
        const SpecifierCallback lookup;
        void *data;
} Specifier;

char *specifier_printf(const char *text, const Specifier table[], void *userdata);

char* specifier_string(char specifier, void *data, void *userdata);

#endif
