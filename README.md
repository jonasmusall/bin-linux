# bin-linux
small utilities I use on linux

> 💡 I try to keep it as cross-shell compatible as possible so most scripts use `#! /bin/sh` and not bash

## contents

### `get-material-icon <name>`
download an svg icon from [material icons by google](https://fonts.google.com/icons?icon.set=Material+Icons) to the current directory.
the `<name>` has to match the text name used when the icon font is used in html (e.g. `zoom_out_map`). you can find that when clicking
on an icon on the aforementioned google fonts page.

> ℹ️ requires `curl`, creates a cache file `~/.cache/get-material-icon-meta.json`

### `getppid` (source: [src/getppid.cpp](src/getppid.cpp))
returns the process id of the parent process (the one running `getppid`)

### `gh-clone <owner> <repository> [destination]`
a shortcut for `git clone https://github.com/<owner>/<repository>.git [destination]`

### `now`
returns the current unix time in seconds

### `serve`
serves the current director over http on port 8888

> ℹ️ requires `docker`, permission to run it and the `nginx` image

### `update-firefox-dev`
since firefox developer edition can not update itself and there is no listing in an app store I use,
I created this script to update my installation in `/opt/firefox-dev`. not particularly efficient
(no delta update) and it doesn't check if installed version < available version, but it does the job.
