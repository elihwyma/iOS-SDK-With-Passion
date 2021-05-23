/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

typedef void (^CDUnknownBlockType)(void);

struct NSMutableDictionary {
    Class _field1;
};

struct _CSArchitecture {
    int cpu_type;
    int cpu_subtype;
};

struct _CSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct dyld_uuid_info_64 {
    unsigned long long _field1;
    unsigned char _field2[16];
};

struct instrs_cycles_snapshot {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct kpdecode_callstack {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3[128];
};

struct kpdecode_pmc {
    int _field1;
    unsigned long long _field2[32];
};

struct kpdecode_record {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    struct {
        char _field1[20];
    } _field5;
    struct {
        unsigned int _field1;
        unsigned long long _field2[4];
    } _field6;
    struct {
        int _field1;
        int _field2;
        unsigned long long _field3;
    } _field7;
    struct kpdecode_callstack _field8;
    struct kpdecode_callstack _field9;
    struct kpdecode_pmc _field10;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field11;
    struct {
        unsigned int _field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
    } _field12;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned int _field3;
        short _field4;
        short _field5;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
    } _field13;
    struct {
        unsigned long long _field1;
        int _field2;
        int _field3;
        unsigned long long _field4;
        unsigned long long _field5;
    } _field14;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        short _field3;
        unsigned char _field4;
    } _field15;
    CDStruct_69d7cc99 _field16;
    struct {
        unsigned int _field1;
        unsigned int _field2;
    } _field17;
    struct {
        unsigned long long _field1;
        int _field2;
    } _field18;
    struct {
        int _field1;
        unsigned long long *_field2;
    } _field19;
    CDStruct_69d7cc99 _field20;
    struct {
        unsigned int _field1;
        int _field2;
    } _field21;
    struct {
        char _field1[256];
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned int _field4;
    } _field22;
    CDStruct_33dcf794 _field23;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field24;
    struct {
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
    } _field25;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct stack_snapshot_frame32 {
    unsigned int _field1;
    unsigned int _field2;
};

struct stack_snapshot_frame64 {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct stackshot_thread_turnstileinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned long long _field5;
};

struct stackshot_thread_waitinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned char _field4;
};

struct task_delta_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
};

struct task_snapshot {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned char _field6[16];
    unsigned long long _field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    unsigned int _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    char _field17[17];
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25[4];
    unsigned long long _field26[4];
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    unsigned long long _field30;
    unsigned long long _field31;
    unsigned long long _field32;
    unsigned long long _field33;
    unsigned long long _field34;
    unsigned int _field35;
};

struct task_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    int _field15;
    char _field16[32];
};

struct thread_delta_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    short _field7;
    short _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
};

struct thread_delta_snapshot_v3 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    short _field7;
    short _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

struct thread_snapshot_v2 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned int _field12;
    unsigned int _field13;
    short _field14;
    short _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
};

struct thread_snapshot_v4 {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned int _field12;
    unsigned int _field13;
    short _field14;
    short _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
};

struct timeval {
    long long _field1;
    int _field2;
};

struct trace_point {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    struct timeval _field9;
    char *_field10;
    char *_field11;
    int _field12;
};

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned long long _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned long long _field6;
} CDStruct_f186406e;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned long long _field3;
    unsigned char _field4[16];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned int _field11;
    unsigned int _field12;
} CDStruct_0ce2a4d3;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned long long _field3;
    unsigned char _field4[16];
} CDStruct_e7a0f457;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3[16];
    unsigned short _field4;
    unsigned long long _field5;
} CDStruct_0b74e904;

typedef struct {
    unsigned long long _field1;
    unsigned int _field2;
} CDStruct_4811d97b;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
} CDStruct_85cfeace;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
} CDStruct_c524502b;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
} CDStruct_71ce830f;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    _Bool _field11;
} CDStruct_92ebf433;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    int _field13;
    int _field14;
    short _field15;
    short _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
    unsigned char _field20;
    unsigned char _field21;
    unsigned char _field22;
    unsigned char _field23;
    unsigned long long _field24;
} CDStruct_f92c3047;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
} CDStruct_a16f0967;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    unsigned int _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
} CDStruct_4050d507;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
    char _field4;
    unsigned long long _field5;
    unsigned long long _field6;
} CDStruct_1a4856f2;

typedef struct {
    unsigned long long _field1;
    double _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_55f67497;

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    unsigned int _field4;
} CDStruct_92c9c886;

typedef struct {
    unsigned long long _field1;
    double _field2;
    double _field3;
    unsigned long long _field4;
} CDStruct_74e41edf;

typedef struct {
    unsigned long long _field1;
    double _field2;
    int _field3;
} CDStruct_fc10d2b4;

typedef struct {
    unsigned long long _field1;
} CDStruct_69d7cc99;

typedef struct {
    unsigned long long _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    double _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    struct _CSArchitecture _field17;
    double _field18;
    _Bool _field19;
} CDStruct_da81fb1d;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    CDUnion_baeb475b _field5;
} CDStruct_cdea0219;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned long long _field6;
    CDUnion_baeb475b _field7;
} CDStruct_f51ef38d;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3[16];
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    CDUnion_baeb475b _field11;
} CDStruct_5c58afa3;

typedef union {
    unsigned char _field1;
    struct {
        unsigned int :1;
    } _field2;
} CDUnion_baeb475b;
