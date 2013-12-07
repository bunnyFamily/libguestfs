/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   generator/generator_*.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2012 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef HAVE_LIBREADLINE
#include <readline/readline.h>
#endif

#include "fish.h"

#ifdef HAVE_LIBREADLINE

static const char *const commands[] = {
  BUILTIN_COMMANDS_FOR_COMPLETION,
  "launch",
  "run",
  "kill-subprocess",
  "add-drive",
  "add-cdrom",
  "add-drive-ro",
  "add-ro",
  "config",
  "set-qemu",
  "qemu",
  "get-qemu",
  "set-path",
  "path",
  "get-path",
  "set-append",
  "append",
  "get-append",
  "set-autosync",
  "autosync",
  "get-autosync",
  "set-verbose",
  "verbose",
  "get-verbose",
  "is-ready",
  "is-config",
  "is-launching",
  "is-busy",
  "get-state",
  "set-memsize",
  "memsize",
  "get-memsize",
  "get-pid",
  "pid",
  "version",
  "set-selinux",
  "selinux",
  "get-selinux",
  "set-trace",
  "trace",
  "get-trace",
  "set-direct",
  "direct",
  "get-direct",
  "set-recovery-proc",
  "recovery-proc",
  "get-recovery-proc",
  "add-drive-with-if",
  "add-drive-ro-with-if",
  "file-architecture",
  "inspect-os",
  "inspect-get-type",
  "inspect-get-arch",
  "inspect-get-distro",
  "inspect-get-major-version",
  "inspect-get-minor-version",
  "inspect-get-product-name",
  "inspect-get-mountpoints",
  "inspect-get-filesystems",
  "set-network",
  "network",
  "get-network",
  "list-filesystems",
  "add-drive-opts",
  "add",
  "inspect-get-windows-systemroot",
  "inspect-get-roots",
  "debug-cmdline",
  "debug-drives",
  "add-domain",
  "domain",
  "inspect-get-package-format",
  "inspect-get-package-management",
  "inspect-list-applications",
  "inspect-get-hostname",
  "inspect-get-format",
  "inspect-is-live",
  "inspect-is-netinst",
  "inspect-is-multipart",
  "set-attach-method",
  "attach-method",
  "get-attach-method",
  "inspect-get-product-variant",
  "inspect-get-windows-current-control-set",
  "inspect-get-drive-mappings",
  "inspect-get-icon",
  "set-pgroup",
  "pgroup",
  "get-pgroup",
  "set-smp",
  "smp",
  "get-smp",
  "mount-local",
  "mount-local-run",
  "umount-local",
  "mount",
  "sync",
  "touch",
  "cat",
  "ll",
  "ls",
  "list-devices",
  "list-partitions",
  "pvs",
  "vgs",
  "lvs",
  "pvs-full",
  "vgs-full",
  "lvs-full",
  "read-lines",
  "aug-init",
  "aug-close",
  "aug-defvar",
  "aug-defnode",
  "aug-get",
  "aug-set",
  "aug-insert",
  "aug-rm",
  "aug-mv",
  "aug-match",
  "aug-save",
  "aug-load",
  "aug-ls",
  "rm",
  "rmdir",
  "rm-rf",
  "mkdir",
  "mkdir-p",
  "chmod",
  "chown",
  "exists",
  "is-file",
  "is-dir",
  "pvcreate",
  "vgcreate",
  "lvcreate",
  "mkfs",
  "sfdisk",
  "write-file",
  "umount",
  "unmount",
  "mounts",
  "umount-all",
  "unmount-all",
  "lvm-remove-all",
  "file",
  "command",
  "command-lines",
  "stat",
  "lstat",
  "statvfs",
  "tune2fs-l",
  "blockdev-setro",
  "blockdev-setrw",
  "blockdev-getro",
  "blockdev-getss",
  "blockdev-getbsz",
  "blockdev-setbsz",
  "blockdev-getsz",
  "blockdev-getsize64",
  "blockdev-flushbufs",
  "blockdev-rereadpt",
  "upload",
  "download",
  "checksum",
  "tar-in",
  "tar-out",
  "tgz-in",
  "tgz-out",
  "mount-ro",
  "mount-options",
  "mount-vfs",
  "debug",
  "lvremove",
  "vgremove",
  "pvremove",
  "set-e2label",
  "get-e2label",
  "set-e2uuid",
  "get-e2uuid",
  "fsck",
  "zero",
  "grub-install",
  "cp",
  "cp-a",
  "mv",
  "drop-caches",
  "dmesg",
  "ping-daemon",
  "equal",
  "strings",
  "strings-e",
  "hexdump",
  "zerofree",
  "pvresize",
  "sfdisk-N",
  "sfdisk-l",
  "sfdisk-kernel-geometry",
  "sfdisk-disk-geometry",
  "vg-activate-all",
  "vg-activate",
  "lvresize",
  "resize2fs",
  "find",
  "e2fsck-f",
  "sleep",
  "ntfs-3g-probe",
  "sh",
  "sh-lines",
  "glob-expand",
  "scrub-device",
  "scrub-file",
  "scrub-freespace",
  "mkdtemp",
  "wc-l",
  "wc-w",
  "wc-c",
  "head",
  "head-n",
  "tail",
  "tail-n",
  "df",
  "df-h",
  "du",
  "initrd-list",
  "mount-loop",
  "mkswap",
  "mkswap-L",
  "mkswap-U",
  "mknod",
  "mkfifo",
  "mknod-b",
  "mknod-c",
  "umask",
  "readdir",
  "sfdiskM",
  "zfile",
  "getxattrs",
  "lgetxattrs",
  "setxattr",
  "lsetxattr",
  "removexattr",
  "lremovexattr",
  "mountpoints",
  "mkmountpoint",
  "rmmountpoint",
  "read-file",
  "grep",
  "egrep",
  "fgrep",
  "grepi",
  "egrepi",
  "fgrepi",
  "zgrep",
  "zegrep",
  "zfgrep",
  "zgrepi",
  "zegrepi",
  "zfgrepi",
  "realpath",
  "ln",
  "ln-f",
  "ln-s",
  "ln-sf",
  "readlink",
  "fallocate",
  "swapon-device",
  "swapoff-device",
  "swapon-file",
  "swapoff-file",
  "swapon-label",
  "swapoff-label",
  "swapon-uuid",
  "swapoff-uuid",
  "mkswap-file",
  "inotify-init",
  "inotify-add-watch",
  "inotify-rm-watch",
  "inotify-read",
  "inotify-files",
  "inotify-close",
  "setcon",
  "getcon",
  "mkfs-b",
  "mke2journal",
  "mke2journal-L",
  "mke2journal-U",
  "mke2fs-J",
  "mke2fs-JL",
  "mke2fs-JU",
  "modprobe",
  "echo-daemon",
  "find0",
  "case-sensitive-path",
  "vfs-type",
  "truncate",
  "truncate-size",
  "utimens",
  "mkdir-mode",
  "lchown",
  "lstatlist",
  "lxattrlist",
  "readlinklist",
  "pread",
  "part-init",
  "part-add",
  "part-disk",
  "part-set-bootable",
  "part-set-name",
  "part-list",
  "part-get-parttype",
  "fill",
  "available",
  "dd",
  "filesize",
  "lvrename",
  "vgrename",
  "initrd-cat",
  "pvuuid",
  "vguuid",
  "lvuuid",
  "vgpvuuids",
  "vglvuuids",
  "copy-size",
  "zero-device",
  "txz-in",
  "txz-out",
  "ntfsresize",
  "vgscan",
  "part-del",
  "part-get-bootable",
  "part-get-mbr-id",
  "part-set-mbr-id",
  "checksum-device",
  "lvresize-free",
  "aug-clear",
  "get-umask",
  "debug-upload",
  "base64-in",
  "base64-out",
  "checksums-out",
  "fill-pattern",
  "write",
  "pwrite",
  "resize2fs-size",
  "pvresize-size",
  "ntfsresize-size",
  "available-all-groups",
  "fallocate64",
  "vfs-label",
  "vfs-uuid",
  "lvm-set-filter",
  "lvm-clear-filter",
  "luks-open",
  "luks-open-ro",
  "luks-close",
  "luks-format",
  "luks-format-cipher",
  "luks-add-key",
  "luks-kill-slot",
  "is-lv",
  "findfs-uuid",
  "findfs-label",
  "is-chardev",
  "is-blockdev",
  "is-fifo",
  "is-symlink",
  "is-socket",
  "part-to-dev",
  "upload-offset",
  "download-offset",
  "pwrite-device",
  "pread-device",
  "lvm-canonical-lv-name",
  "mkfs-opts",
  "getxattr",
  "lgetxattr",
  "resize2fs-M",
  "is-zero",
  "is-zero-device",
  "list-9p",
  "mount-9p",
  "list-dm-devices",
  "ntfsresize-opts",
  "btrfs-filesystem-resize",
  "write-append",
  "compress-out",
  "compress-device-out",
  "part-to-partnum",
  "copy-device-to-device",
  "copy-device-to-file",
  "copy-file-to-device",
  "copy-file-to-file",
  "tune2fs",
  "md-create",
  "list-md-devices",
  "md-detail",
  "md-stop",
  "blkid",
  "e2fsck",
  "llz",
  "wipefs",
  "ntfsfix",
  "ntfsclone-out",
  "ntfsclone-in",
  "set-label",
  "zero-free-space",
  "lvcreate-free",
  "isoinfo-device",
  "isoinfo",
  "vgmeta",
  "md-stat",
  "mkfs-btrfs",
  "get-e2attrs",
  "set-e2attrs",
  "get-e2generation",
  "set-e2generation",
  "btrfs-subvolume-snapshot",
  "btrfs-subvolume-delete",
  "btrfs-subvolume-create",
  "btrfs-subvolume-list",
  "btrfs-subvolume-set-default",
  "btrfs-filesystem-sync",
  "btrfs-filesystem-balance",
  "btrfs-device-add",
  "btrfs-device-delete",
  "btrfs-set-seeding",
  "btrfs-fsck",
  "alloc",
  "allocate",
  "copy-in",
  "copy-out",
  "delete-event",
  "display",
  "echo",
  "edit",
  "vi",
  "emacs",
  "event",
  "glob",
  "hexedit",
  "lcd",
  "list-events",
  "man",
  "manual",
  "more",
  "less",
  "reopen",
  "setenv",
  "sparse",
  "supported",
  "time",
  "unsetenv",
  NULL
};

static char *
generator (const char *text, int state)
{
  static size_t index, len;
  const char *name;

  if (!state) {
    index = 0;
    len = strlen (text);
  }

  rl_attempted_completion_over = 1;

  while ((name = commands[index]) != NULL) {
    index++;
    if (STRCASEEQLEN (name, text, len))
      return strdup (name);
  }

  return NULL;
}

#endif /* HAVE_LIBREADLINE */

#ifdef HAVE_RL_COMPLETION_MATCHES
#define RL_COMPLETION_MATCHES rl_completion_matches
#else
#ifdef HAVE_COMPLETION_MATCHES
#define RL_COMPLETION_MATCHES completion_matches
#endif
#endif /* else just fail if we don't have either symbol */

char **
do_completion (const char *text, int start, int end)
{
  char **matches = NULL;

#ifdef HAVE_LIBREADLINE
  rl_completion_append_character = ' ';

  if (start == 0)
    matches = RL_COMPLETION_MATCHES (text, generator);
  else if (complete_dest_paths)
    matches = RL_COMPLETION_MATCHES (text, complete_dest_paths_generator);
#endif

  return matches;
}