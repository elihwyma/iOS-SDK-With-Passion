/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

typedef void (^CDUnknownBlockType)(void);

struct AudioQueueBuffer;

struct OpaqueAudioFileID;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _VE_HSAFE {
    void *_field1;
    unsigned int _field2;
};

struct __CFString;

struct __TTSPlayback;

struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>;

struct vector<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>>> {
    struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>> *__begin_;
    struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>> *__end_;
    struct __compressed_pair<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>*, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>>> {
        struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>> *__value_;
    } __end_cap_;
};

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    struct _VE_HSAFE _field5;
    struct __TTSPlayback *_field6;
    unsigned char _field7;
    char *_field8;
    int _field9;
    struct __CFString *_field10;
    struct __CFString *_field11;
    float _field12;
    float _field13;
    float _field14;
    char *_field15;
    char *_field16;
    long long _field17;
    long long _field18;
    id _field19;
    unsigned int _field20;
    struct OpaqueAudioFileID *_field21;
    int _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned char _field26;
    unsigned char _field27;
} CDStruct_e7d21709;

typedef struct {
    struct __TTSPlayback *_field1;
    CDStruct_183601bc *_field2;
    struct AudioQueueBuffer *_field3;
    int _field4;
    struct {
        unsigned int _field1;
        int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned short _field7;
        unsigned int _field8;
        unsigned int _field9;
        char *_field10;
    } _field5[32];
} CDStruct_b823fdf7;

typedef struct {
    int _field1;
    unsigned int _field2;
    void *_field3;
    unsigned int _field4;
    CDStruct_183601bc *_field5;
} CDStruct_ef07e5a0;
