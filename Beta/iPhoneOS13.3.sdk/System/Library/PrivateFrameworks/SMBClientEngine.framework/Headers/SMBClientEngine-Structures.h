/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

typedef void (^CDUnknownBlockType)(void);

struct FILE_FS_ATTRIBUTE_INFORMATION {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[1024];
};

struct FILE_FS_SIZE_INFORMATION {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct FILE_STREAM_INFORMATION {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct gss_buffer_desc_struct {
    unsigned long long length;
    void *value;
};

struct gss_cred_id_t_desc_struct;

struct gss_ctx_id_t_desc_struct;

struct mdchain {
    struct piston_mbuf *_field1;
    struct piston_mbuf *_field2;
    char *_field3;
    unsigned long long _field4;
};

struct piston_mbuf;

struct smb2_file_basic_info {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct smb_change_notify {
    unsigned int _field1;
};

struct smb_close {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned int _field8;
};

struct smb_create {
    unsigned long long _field1;
    unsigned char _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    void *_field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned int _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned int _field21;
    unsigned int _field22;
    CDStruct_9808ab94 _field23;
    struct smb_resolve_id _field24;
    struct smb_dur_handle _field25;
};

struct smb_dir_enum_out {
    unsigned int _field1;
    unsigned int _field2;
};

struct smb_dur_handle {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned short _field6;
    unsigned int _field7;
    unsigned char _field8[16];
    CDStruct_9808ab94 _field9;
    unsigned long long _field10;
    unsigned int _field11;
    unsigned int _field12;
};

struct smb_flush {
    unsigned int _field1;
    unsigned int _field2;
};

struct smb_ioctl {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct smb_valid_neg _field5;
};

struct smb_lease_break {
    unsigned short newEpoch;
    unsigned int flags;
    unsigned long long leaseKeyHigh;
    unsigned long long leaseKeyLow;
    unsigned int currLeaseState;
    unsigned int newLeaseState;
};

struct smb_lease_break_ack {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned int _field8;
};

struct smb_lock {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
};

struct smb_login_out {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned short _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct smb_negotiate {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5[3];
    unsigned char _field6[16];
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct smb_query_dir {
    unsigned char fileInfoClass;
    unsigned char flags;
    unsigned int fileIndex;
    unsigned int fileNameFlags;
    unsigned int ntStatus;
};

struct smb_query_info {
    unsigned char _field1;
    unsigned char _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct FILE_FS_ATTRIBUTE_INFORMATION _field6;
    struct FILE_FS_SIZE_INFORMATION _field7;
    struct FILE_STREAM_INFORMATION _field8;
    unsigned long long _field9;
};

struct smb_query_share {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
};

struct smb_read_write {
    unsigned long long _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct smb_resolve_id {
    unsigned long long _field1;
    unsigned int _field2;
};

struct smb_server_copy_file {
    unsigned int _field1;
};

struct smb_session {
    struct _opaque_pthread_mutex_t session_lock;
    unsigned int sv_caps;
    unsigned short sv_sessflags;
    unsigned short sv_dialect;
    unsigned short sv_neg_context_cnt;
    unsigned int sv_capabilities;
    unsigned int sv_maxtransact;
    unsigned int sv_maxread;
    unsigned int sv_maxwrite;
    unsigned char sv_guid[16];
    unsigned short sv_security_mode;
    unsigned int sv_mechs;
    struct gss_ctx_id_t_desc_struct *gss_context;
    struct gss_cred_id_t_desc_struct *gss_cred;
    struct gss_buffer_desc_struct gss_in_token;
    struct gss_buffer_desc_struct gss_out_token;
    unsigned int sess_setup_nt_status;
    unsigned int neg_capabilities;
    unsigned char client_guid[16];
    unsigned short neg_security_mode;
    unsigned short neg_dialect_count;
    unsigned short neg_dialects[8];
    char *session_key;
    unsigned int session_key_len;
    char *smb3_signing_key;
    unsigned int smb3_signing_key_len;
    unsigned char smb3_encrypt_key[16];
    unsigned int smb3_encrypt_key_len;
    unsigned char smb3_decrypt_key[16];
    unsigned int smb3_decrypt_key_len;
    unsigned long long smb3_nonce_high;
    unsigned long long smb3_nonce_low;
    unsigned long long session_flags;
    unsigned long long option_flags;
    unsigned long long session_id;
    unsigned long long prev_session_id;
    unsigned long long session_server_caps;
    unsigned long long session_volume_caps;
    char *session_model_infop;
    struct _opaque_pthread_mutex_t session_credits_lock;
    _Atomic unsigned long long session_message_id;
    _Atomic unsigned int session_credits_granted;
    _Atomic unsigned int session_credits_ss_granted;
    _Atomic unsigned int session_credits_max;
    _Atomic int session_credits_wait;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } session_credits_wait_cond;
    unsigned int session_req_pending;
    unsigned long long session_oldest_message_id;
};

struct smb_setinfo {
    unsigned int _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned int _field4;
    CDStruct_9808ab94 _field5;
    unsigned long long _field6;
    struct smb2_file_basic_info _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct smb_tree_connect_disc {
    unsigned int _field1;
    unsigned char _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct smb_valid_neg {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4[8];
    unsigned char _field5[16];
    unsigned int _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9[8];
    unsigned char _field10[16];
};

struct smbfattr {
    unsigned long long fa_valid_mask;
    unsigned int fa_attr;
    unsigned long long fa_size;
    unsigned long long fa_data_alloc;
    struct timespec fa_atime;
    struct timespec fa_chtime;
    struct timespec fa_mtime;
    struct timespec fa_crtime;
    unsigned long long fa_ino;
    struct timespec fa_reqtime;
    int fa_vtype;
    unsigned long long fa_uid;
    unsigned long long fa_gid;
    unsigned long long fa_permissions;
    unsigned long long fa_nlinks;
    unsigned int fa_flags_mask;
    unsigned int fa_unix;
    unsigned int fa_reparse_tag;
    unsigned short fa_fstatus;
    unsigned int fa_created_disp;
    unsigned long long fa_rsrc_size;
    unsigned long long fa_rsrc_alloc;
    unsigned char fa_finder_info[32];
    unsigned int fa_max_access;
};

struct sockaddr_storage {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[6];
    long long _field4;
    char _field5[112];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

typedef struct {
    unsigned long long fid_persistent;
    unsigned long long fid_volatile;
} CDStruct_9808ab94;
