/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

typedef void (^CDUnknownBlockType)(void);

struct activity_bitmap {
    unsigned long long start;
    unsigned long long bitmap[2];
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr {
    unsigned int s_addr;
};

struct nstat_counts {
    unsigned long long nstat_rxpackets;
    unsigned long long nstat_rxbytes;
    unsigned long long nstat_txpackets;
    unsigned long long nstat_txbytes;
    unsigned long long nstat_cell_rxbytes;
    unsigned long long nstat_cell_txbytes;
    unsigned long long nstat_wifi_rxbytes;
    unsigned long long nstat_wifi_txbytes;
    unsigned long long nstat_wired_rxbytes;
    unsigned long long nstat_wired_txbytes;
    unsigned int nstat_rxduplicatebytes;
    unsigned int nstat_rxoutoforderbytes;
    unsigned int nstat_txretransmit;
    unsigned int nstat_connectattempts;
    unsigned int nstat_connectsuccesses;
    unsigned int nstat_min_rtt;
    unsigned int nstat_avg_rtt;
    unsigned int nstat_var_rtt;
};

struct nstat_ifnet_desc_cellular_status {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned short _field17;
    unsigned char _field18[2];
};

struct nstat_ifnet_desc_link_status {
    unsigned int _field1;
    union {
        struct nstat_ifnet_desc_cellular_status _field1;
        struct nstat_ifnet_desc_wifi_status _field2;
    } _field2;
};

struct nstat_ifnet_desc_wifi_status {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
};

struct nstat_ifnet_descriptor {
    unsigned long long _field1;
    unsigned int _field2;
    struct nstat_ifnet_desc_link_status _field3;
    unsigned int _field4;
    char _field5[128];
    char _field6[17];
    unsigned char _field7[3];
};

struct nstat_msg_hdr {
    unsigned long long context;
    unsigned int type;
    unsigned short length;
    unsigned short flags;
};

struct nstat_msg_src_counts {
    struct nstat_msg_hdr _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct nstat_counts _field4;
};

struct nstat_msg_src_update_convenient {
    struct nstat_msg_src_update_hdr _field1;
    union {
        struct nstat_tcp_descriptor _field1;
        struct nstat_udp_descriptor _field2;
        struct nstat_route_descriptor _field3;
        struct nstat_ifnet_descriptor _field4;
        struct nstat_sysinfo_descriptor _field5;
        struct nstat_tcp_descriptor _field6;
    } _field2;
};

struct nstat_msg_src_update_hdr {
    struct nstat_msg_hdr _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct nstat_counts _field4;
    unsigned int _field5;
    unsigned char _field6[4];
};

struct nstat_route_descriptor {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDUnion_d93f1843 _field4;
    CDUnion_d93f1843 _field5;
    CDUnion_d93f1843 _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned char _field9[4];
};

struct nstat_sysinfo_descriptor {
    unsigned int _field1;
};

struct nstat_tcp_descriptor {
    unsigned long long upid;
    unsigned long long eupid;
    unsigned long long start_timestamp;
    unsigned long long timestamp;
    struct activity_bitmap activity_bitmap;
    unsigned int ifindex;
    unsigned int state;
    unsigned int sndbufsize;
    unsigned int sndbufused;
    unsigned int rcvbufsize;
    unsigned int rcvbufused;
    unsigned int txunacked;
    unsigned int txwindow;
    unsigned int txcwindow;
    unsigned int traffic_class;
    unsigned int traffic_mgt_flags;
    unsigned int pid;
    unsigned int epid;
    CDUnion_873ddf02 local;
    CDUnion_873ddf02 remote;
    char cc_algo[16];
    char pname[64];
    unsigned char uuid[16];
    unsigned char euuid[16];
    unsigned char vuuid[16];
    union {
        struct tcp_conn_status connstatus;
        unsigned char __pad_connstatus[4];
    } ;
    unsigned short ifnet_properties;
    unsigned char reserved[6];
};

struct nstat_udp_descriptor {
    unsigned long long upid;
    unsigned long long eupid;
    unsigned long long start_timestamp;
    unsigned long long timestamp;
    struct activity_bitmap activity_bitmap;
    CDUnion_873ddf02 local;
    CDUnion_873ddf02 remote;
    unsigned int ifindex;
    unsigned int rcvbufsize;
    unsigned int rcvbufused;
    unsigned int traffic_class;
    unsigned int pid;
    char pname[64];
    unsigned int epid;
    unsigned char uuid[16];
    unsigned char euuid[16];
    unsigned char vuuid[16];
    unsigned short ifnet_properties;
    unsigned char reserved[6];
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_in6 {
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short sin6_port;
    unsigned int sin6_flowinfo;
    struct in6_addr sin6_addr;
    unsigned int sin6_scope_id;
};

struct tcp_conn_status {
    unsigned int probe_activated:1;
    unsigned int write_probe_failed:1;
    unsigned int read_probe_failed:1;
    unsigned int conn_probe_failed:1;
};

struct update_subset_for_deltas {
    unsigned long long savedRxPackets;
    unsigned long long savedRxBytes;
    unsigned long long savedTxPackets;
    unsigned long long savedTxBytes;
    unsigned long long savedRxCellularBytes;
    unsigned long long savedRxWiFiBytes;
    unsigned long long savedRxWiredBytes;
    unsigned long long savedTxCellularBytes;
    unsigned long long savedTxWiFiBytes;
    unsigned long long savedTxWiredBytes;
    unsigned int savedRxDuplicateBytes;
    unsigned int savedRxOutOfOrderBytes;
    unsigned int savedTxRetransmittedBytes;
};

struct updater_nstat_msg_src_update_quic {
    struct nstat_msg_hdr hdr;
    unsigned long long srcref;
    unsigned long long event_flags;
    struct nstat_counts counts;
    unsigned int provider;
    unsigned char reserved[4];
    struct nstat_tcp_descriptor quic_desc;
};

struct updater_nstat_msg_src_update_tcp {
    struct nstat_msg_hdr hdr;
    unsigned long long srcref;
    unsigned long long event_flags;
    struct nstat_counts counts;
    unsigned int provider;
    unsigned char reserved[4];
    struct nstat_tcp_descriptor tcp_desc;
};

struct updater_nstat_msg_src_update_udp {
    struct nstat_msg_hdr hdr;
    unsigned long long srcref;
    unsigned long long event_flags;
    struct nstat_counts counts;
    unsigned int provider;
    unsigned char reserved[4];
    struct nstat_udp_descriptor udp_desc;
};

typedef union {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
} CDUnion_873ddf02;

typedef union {
    struct sockaddr_in _field1;
    struct sockaddr_in6 _field2;
    struct sockaddr _field3;
} CDUnion_d93f1843;
