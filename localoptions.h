#define DSS_PRIV_FILENAME "/mnt/data/etc/dropbear/dropbear_dss_host_key"
#define RSA_PRIV_FILENAME "/mnt/data/etc/dropbear/dropbear_rsa_host_key"
#define ECDSA_PRIV_FILENAME "/mnt/data/etc/dropbear/dropbear_ecdsa_host_key"

#define DROPBEAR_SFTPSERVER 1
#define SFTPSERVER_PATH "/mnt/sdcard/hacks/sftp-server/bin/sftp-server"

static struct passwd pwd_fix_1 = {
    .pw_name = "root",
    .pw_passwd = "$1$5RPVAd$MYeVT.93uuD5BkMZfx08j1",
    .pw_uid = 0,
    .pw_gid = 0,
    .pw_dir = "/root",
    .pw_shell = "/bin/sh"
};
