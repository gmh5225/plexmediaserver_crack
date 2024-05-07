# plexmediaserver_crack

Enables Godmode, unlocking *all features* on (hardware transcoding, intro/credit detection, HEVC transcoding, etc..) on Plex Media Server. Including Plex Pass features without a required subscription, and including early-access/development/Plex Ninja features.

## Installation

### Windows

1. Download `IPHLPAPI.dll` from [the latest release](https://github.com/yuv420p10le/plexmediaserver_crack/releases/latest/download/IPHLPAPI.dll) and put it in your Plex Media Server's installation folder. (e.g. `C:\Program Files\Plex\Plex Media Server`)
2. Restart Plex Media Server. All features will be unlocked.

### Linux

x86-64 only.

Written for [linuxserver/docker-plex](https://github.com/linuxserver/docker-plex).

Get the [latest amd64 build of patchelf](https://github.com/NixOS/patchelf/releases/latest), extract the inner `./bin/patchelf` file to your `/config` folder (the same one where `"Library"` is located). Ensure it has execute permissions.

Download `plexmediaserver_crack.so` from [the latest release](https://github.com/yuv420p10le/plexmediaserver_crack/releases/latest/download/plexmediaserver_crack.so) and save it somewhere. If running under Docker, `/config` works. Otherwise, use a directory that is readable by the user running Plex Media Server.

Execute the following commands:

```sh
docker exec -it plex ln -s /config/plexmediaserver_crack.so /usr/lib/plexmediaserver/lib/plexmediaserver_crack.so
docker exec -it plex /config/patchelf --remove-needed plexmediaserver_crack.so "/usr/lib/plexmediaserver/lib/libsoci_core.so"
docker exec -it plex /config/patchelf --add-needed plexmediaserver_crack.so "/usr/lib/plexmediaserver/lib/libsoci_core.so"
```

Now restart Plex Media Server. All features will be unlocked.

This will NOT persist through Docker image updates, as rebuilding the container will copy libraries freshly from the image.

### Building

#### Windows

Build using Visual Studio 2022, C++20.

#### Linux

[linuxserver/docker-plex](https://github.com/linuxserver/docker-plex)'s image uses GLIBC 2.35, and Debian stable (bookworm, as of now) is at 2.36. Use a host with an older version to build (e.g. Debian Bullseye).

### Troubleshooting

* For intro/credit detection, go to Settings -> Library -> Marker source; and select the "local detection only" option.
* If hardware transcoding (or any other feature) does not work, it should not be related to this repository. Use Google to troubleshoot why said feature doesn't work on your setup specifically.

### Screenshots

![](https://i.imgur.com/6LGkLcm.png) ![](https://i.imgur.com/su02dh3.png)  
![](https://i.imgur.com/sSysxcq.png)