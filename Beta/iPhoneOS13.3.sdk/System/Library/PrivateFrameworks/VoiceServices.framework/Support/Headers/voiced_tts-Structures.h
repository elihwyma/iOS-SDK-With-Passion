/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

typedef void (^CDUnknownBlockType)(void);

struct Allocator;

struct AudioDescription {
    unsigned char _field1[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct BeginTextToSpeechStreamingResponse {
    unsigned char _field1[1];
};

struct ContextInfoEntry {
    unsigned char _field1[1];
};

struct FinalTextToSpeechStreamingResponse {
    unsigned char _field1[1];
};

struct FlatBufferBuilder {
    struct vector_downward _field1;
    unsigned int _field2;
    unsigned short _field3;
    _Bool _field4;
    _Bool _field5;
    unsigned long long _field6;
    _Bool _field7;
    _Bool _field8;
    struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String>>> *_field9;
};

struct Marker;

struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest> {
    unsigned int _field1;
};

struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::AudioDescription> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechMeta> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechRequest> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechRequestMeta> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechRequest_::ContextInfoEntry> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechResource> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechResponse> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::TextToSpeechVoice> {
    unsigned int _field1;
};

struct Offset<siri::speech::schema_fb::WordTimingInfo> {
    unsigned int _field1;
};

struct PartialTextToSpeechStreamingResponse {
    unsigned char _field1[1];
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct StartTextToSpeechStreamingRequest {
    unsigned char _field1[1];
};

struct TTSSynthesizer {
    struct unique_ptr<TTSSynthesizer::TTSSynthesizerInternal, std::__1::default_delete<TTSSynthesizer::TTSSynthesizerInternal>> _field1;
};

struct TTSSynthesizerInternal;

struct TextToSpeechMeta {
    unsigned char _field1[1];
};

struct TextToSpeechRequest {
    unsigned char _field1[1];
};

struct TextToSpeechRequestMeta {
    unsigned char _field1[1];
};

struct TextToSpeechResource {
    unsigned char _field1[1];
};

struct TextToSpeechResponse {
    unsigned char _field1[1];
};

struct TextToSpeechRouterStreamingStreamingRequest {
    unsigned char _field1[1];
};

struct TextToSpeechRouterStreamingStreamingResponse {
    unsigned char _field1[1];
};

struct TextToSpeechVoice {
    unsigned char _field1[1];
};

struct WordTimingInfo {
    unsigned char _field1[1];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
    long long __sig;
    char __opaque[8];
};

struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String>>>;

struct unique_ptr<TTSSynthesizer::TTSSynthesizerInternal, std::__1::default_delete<TTSSynthesizer::TTSSynthesizerInternal>> {
    struct __compressed_pair<TTSSynthesizer::TTSSynthesizerInternal *, std::__1::default_delete<TTSSynthesizer::TTSSynthesizerInternal>> {
        struct TTSSynthesizerInternal *_field1;
    } _field1;
};

struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker>> {
    struct Marker *__begin_;
    struct Marker *__end_;
    struct __compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker>> {
        struct Marker *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

struct vector_downward {
    struct Allocator *_field1;
    _Bool _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    char *_field6;
    char *_field7;
    char *_field8;
};

// Template types
typedef struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest> {
    unsigned int _field1;
} Offset_5ef787ef;

typedef struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> {
    unsigned int _field1;
} Offset_8714228f;

typedef struct Offset<siri::speech::schema_fb::AudioDescription> {
    unsigned int _field1;
} Offset_407e0587;

typedef struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> {
    unsigned int _field1;
} Offset_afb4d078;

typedef struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> {
    unsigned int _field1;
} Offset_8cb3aebb;

typedef struct Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse> {
    unsigned int _field1;
} Offset_cde40885;

typedef struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> {
    unsigned int _field1;
} Offset_acd6b661;

typedef struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest_::ContextInfoEntry> {
    unsigned int _field1;
} Offset_0dc7c184;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechMeta> {
    unsigned int _field1;
} Offset_256a1c65;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequest> {
    unsigned int _field1;
} Offset_91732649;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequestMeta> {
    unsigned int _field1;
} Offset_ad483e0b;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechRequest_::ContextInfoEntry> {
    unsigned int _field1;
} Offset_247d1513;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResource> {
    unsigned int _field1;
} Offset_ccd79ebd;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechResponse> {
    unsigned int _field1;
} Offset_84bb9af3;

typedef struct Offset<siri::speech::schema_fb::TextToSpeechVoice> {
    unsigned int _field1;
} Offset_b4fd9e28;

typedef struct Offset<siri::speech::schema_fb::WordTimingInfo> {
    unsigned int _field1;
} Offset_79ee9959;

typedef struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker>> {
    struct Marker *__begin_;
    struct Marker *__end_;
    struct __compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker>> {
        struct Marker *__value_;
    } __end_cap_;
} vector_c392d7c8;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
} vector_aab22ae2;
