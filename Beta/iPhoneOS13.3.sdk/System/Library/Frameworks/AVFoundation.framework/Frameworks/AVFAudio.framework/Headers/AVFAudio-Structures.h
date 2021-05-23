/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

typedef void (^CDUnknownBlockType)(void);

struct AUInterfaceBaseV3;

struct AUInterfaceIOV3;

struct AUPreset {
    int _field1;
    struct __CFString *_field2;
};

struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>;

struct AVAudio3DAngularOrientation {
    float _field1;
    float _field2;
    float _field3;
};

struct AVAudio3DPoint {
    float _field1;
    float _field2;
    float _field3;
};

struct AVAudio3DVectorOrientation {
    struct AVAudio3DPoint _field1;
    struct AVAudio3DPoint _field2;
};

struct AVAudioConverterPrimeInfo {
    unsigned int _field1;
    unsigned int _field2;
};

struct AVAudioEngineGraph;

struct AVAudioEngineImpl {
    id _field1;
    struct unique_ptr<AVAudioEngineGraph, std::__1::default_delete<AVAudioEngineGraph>> _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    struct unique_ptr<AVAudioIOUnit, std::__1::default_delete<AVAudioIOUnit>> _field7;
    _Bool _field8;
    id _field9;
    int _field10;
    CDUnknownBlockType _field11;
    _Bool _field12;
    struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> _field13;
};

struct AVAudioEnvironmentNodeImpl {
    CDUnknownFunctionPointerType *_field1;
    struct AVAudioEngineImpl *_field2;
    id _field3;
    struct vector<bool, std::__1::allocator<bool>> _field4;
    _Bool _field5;
    _Bool _field6;
    struct AVAudioMixingImpl *_field7;
    struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>> *_field8;
    _Bool _field9;
    long long _field10;
    double _field11;
    struct atomic<double> _field12;
    int _field13;
    struct unique_ptr<AUInterfaceBaseV3, std::__1::default_delete<AUInterfaceBaseV3>> _field14;
    float _field15;
    long long _field16;
    unsigned int _field17;
    id _field18;
    struct AVAudio3DPoint _field19;
    struct AVAudio3DVectorOrientation _field20;
    struct AVAudio3DAngularOrientation _field21;
    struct map<AVAudio3DMixingImpl *, unsigned int, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned int>>> _field22;
    id _field23;
    unsigned int _field24;
    float _field25;
    float _field26;
    float _field27;
    id _field28;
    id _field29;
    _Bool _field30;
    float _field31;
    float _field32;
    float _field33;
    float _field34;
};

struct AVAudioIOUnit {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    struct AVAudioEngineImpl *_field3;
    struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3>> _field4;
    id _field5;
    id _field6;
    struct AudioComponentDescription _field7;
};

struct AVAudioMixingImpl {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    float _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    float _field7;
    float _field8;
    struct AVAudio3DPoint _field9;
    float _field10;
    float _field11;
};

struct AVAudioNodeImplBase {
    CDUnknownFunctionPointerType *_field1;
    struct AVAudioEngineImpl *_field2;
    id _field3;
    struct vector<bool, std::__1::allocator<bool>> _field4;
    _Bool _field5;
    _Bool _field6;
    struct AVAudioMixingImpl *_field7;
    struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>> *_field8;
    _Bool _field9;
    long long _field10;
    double _field11;
    struct atomic<double> _field12;
};

struct AVAudioPlayerCpp {
    struct __CFData *_field1;
    struct __CFURL *_field2;
    struct __CFDictionary *_field3;
    unsigned int _field4;
    struct AudioStreamBasicDescription _field5;
    struct AudioStreamBasicDescription _field6;
    unsigned int _field7;
    unsigned long long _field8;
    char *_field9;
    unsigned int _field10;
    struct AudioFormatListItem *_field11;
    unsigned int _field12;
    struct OpaqueAudioFileID *_field13;
    unsigned int _field14;
    struct OpaqueAudioQueue *_field15;
    long long _field16;
    long long _field17;
    long long _field18;
    double _field19;
    double _field20;
    double _field21;
    double _field22;
    unsigned int _field23;
    double _field24;
    int _field25;
    struct AudioFilePacketTableInfo _field26;
    long long _field27;
    long long _field28;
    int _field29;
    int _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    _Bool _field34;
    unsigned int _field35;
    _Bool _field36;
    _Bool _field37;
    _Bool _field38;
    _Bool _field39;
    double _field40;
    double _field41;
    double _field42;
    double _field43;
    double _field44;
    double _field45;
    struct __CFString *_field46;
    unsigned int _field47;
    struct AudioQueueLevelMeterState *_field48;
    struct AudioQueueBuffer *_field49[3];
    struct AudioQueueBuffer *_field50;
    int _field51;
    unsigned int _field52[3];
    _Bool _field53;
    _Bool _field54;
    _Bool _field55;
    _Bool _field56;
    _Bool _field57;
    struct AudioQueueBuffer *_field58;
    unsigned int _field59;
    _Bool _field60;
    _Bool _field61;
    _Bool _field62;
    _Bool _field63;
    long long _field64;
    int _field65;
    unsigned int _field66;
    unsigned int _field67;
    void *_field68;
    CDUnknownFunctionPointerType _field69;
    unsigned int _field70;
    id _field71;
    unsigned int _field72;
    struct AudioQueueChannelAssignment *_field73;
};

struct AVAudioSequencerImpl {
    struct OpaqueMusicPlayer *_field1;
    struct OpaqueMusicSequence *_field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
};

struct AVAudioSessionImpl {
    id _field1;
    struct GenericRunLoopThread *_field2;
    struct KVOProperty<float> _field3;
    struct KVOProperty<float> _field4;
    struct KVONSArrayProperty _field5;
    struct KVONSArrayProperty _field6;
    struct KVOProperty<unsigned int> _field7;
    struct KVOProperty<unsigned int> _field8;
    struct KVONSObjectProperty<NSArray *> _field9;
    struct KVOProperty<unsigned int> _field10;
    id _field11;
    _Bool _field12;
    struct KVOProperty<unsigned int> _field13;
    struct KVOProperty<unsigned int> _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    _Bool _field18;
    struct SessionConnector _field19;
    _Bool _field20;
    _Bool _field21;
};

struct AVAudioUnitComponentManagerImpl {
    CDUnknownFunctionPointerType *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
};

struct AVAudioUnitEQFilterParametersImpl {
    CDUnknownFunctionPointerType *_field1;
};

struct AVVCRecordingEngine {
    CDUnknownFunctionPointerType *_field1;
    struct CAStreamBasicDescription _field2;
    id _field3;
    CDUnknownBlockType _field4;
    CDUnknownBlockType _field5;
    CDUnknownBlockType _field6;
    struct ControllerImpl *_field7;
    struct OpaqueAudioFileID *_field8;
    int _field9;
    long long _field10;
    int _field11;
    id _field12;
    unsigned int _field13;
    id _field14;
    unsigned long long _field15;
    _Bool _field16;
    _Bool _field17;
    unsigned int _field18;
    double _field19;
    unsigned long long _field20;
    long long _field21;
    _Bool _field22;
    struct AudioQueueLevelMeterState *_field23;
    id _field24;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioChannelDescription {
    unsigned int _field1;
    unsigned int _field2;
    float _field3[3];
};

struct AudioChannelLayout {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AudioChannelDescription _field4[1];
};

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct AudioFilePacketTableInfo {
    long long _field1;
    int _field2;
    int _field3;
};

struct AudioFormatListItem;

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueChannelAssignment;

struct AudioQueueLevelMeterState;

struct AudioRecorderImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    unsigned int _field7;
    struct AudioStreamBasicDescription _field8;
    struct OpaqueAudioFileID *_field9;
    struct OpaqueAudioQueue *_field10;
    long long _field11;
    long long _field12;
    long long _field13;
    double _field14;
    double _field15;
    double _field16;
    unsigned long long _field17;
    char *_field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct AudioQueueLevelMeterState *_field27;
    struct AudioQueueBuffer *_field28[4];
    struct AudioQueueBuffer *_field29;
    _Bool _field30;
    unsigned long long _field31;
    _Bool _field32;
    int _field33;
    id _field34;
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

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
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

struct CAMutex {
    CDUnknownFunctionPointerType *_field1;
    char *_field2;
    struct _opaque_pthread_t *_field3;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field4;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct ChannelDescriptionImpl {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct ConnectionResult {
    int _field1;
    unsigned int _field2;
};

struct ControllerImpl {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    struct GenericRunLoopThread *_field4;
    _Bool _field5;
    float _field6;
    id _field7;
    struct __CFDictionary *_field8;
    unsigned int _field9;
    id _field10;
    id _field11;
    struct CAStreamBasicDescription _field12;
    double _field13;
    struct OpaqueAudioQueue *_field14;
    int _field15;
    id _field16;
    unsigned int _field17;
    struct AudioQueueBuffer **_field18;
    int _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    float _field26;
    unsigned int _field27;
    long long _field28;
    struct CAStreamBasicDescription _field29;
    long long _field30;
    struct OpaqueAudioQueue *_field31;
    struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *>>> _field32;
    struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> _field33;
    int _field34;
    int _field35;
    int _field36;
    long long _field37;
    long long _field38;
    long long _field39;
    int _field40;
    int _field41;
    float _field42;
    double _field43;
    _Bool _field44;
    unsigned long long _field45;
    unsigned long long _field46;
    float _field47;
    float _field48;
    _Bool _field49;
    _Bool _field50;
    struct OpaqueAudioQueue *_field51;
    id _field52;
    id _field53;
    struct OpaqueAudioFileID *_field54;
    unsigned int _field55;
    struct AudioFormatListItem *_field56;
    unsigned int _field57;
    unsigned long long _field58;
    char *_field59;
    struct AudioFilePacketTableInfo _field60;
    long long _field61;
    long long _field62;
    _Bool _field63;
    int _field64;
    int _field65;
    id _field66;
    _Bool _field67;
    _Bool _field68;
    _Bool _field69;
    _Bool _field70;
    int _field71;
    double _field72;
    double _field73;
    double _field74;
    _Bool _field75;
    _Bool _field76;
    _Bool _field77;
    id _field78;
    unsigned char _field79;
    int _field80;
    _Bool _field81;
    _Bool _field82;
    _Bool _field83;
    unsigned int _field84;
    _Bool _field85;
    id _field86;
    id _field87;
    unsigned long long _field88;
    unsigned long long _field89;
    _Bool _field90;
    _Bool _field91;
    int _field92;
    _Bool _field93;
    long long _field94;
    id _field95;
    struct MyMutex *_field96[5];
    int _field97;
    int _field98;
    _Bool _field99;
    long long _field100;
    unsigned long long _field101;
    unsigned long long _field102;
    unsigned long long _field103;
    id _field104;
    id _field105;
    struct map<unsigned long, AVVCRecordingEngine *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, AVVCRecordingEngine *>>> _field106;
    _Bool _field107;
    CDUnknownBlockType _field108;
    CDUnknownBlockType _field109;
    long long _field110;
    id _field111;
};

struct DataSourceDescriptionImpl {
    unsigned int _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
};

struct GenericRunLoopThread;

struct KVONSArrayProperty {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct KVONSObjectProperty<NSArray *> {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct KVOProperty<float> {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct KVOProperty<unsigned int> {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct MIDIPlayerImpl {
    struct OpaqueAUGraph *_field1;
    struct OpaqueMusicPlayer *_field2;
    struct OpaqueMusicSequence *_field3;
    double _field4;
    CDUnknownBlockType _field5;
    id _field6;
};

struct MusicTrackImpl {
    struct OpaqueMusicTrack *_field1;
    id _field2;
    _Bool _field3;
    unsigned int _field4;
};

struct MyAudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
    struct AudioStreamBasicDescription _field8;
    _Bool _field9;
    unsigned char _field10;
    unsigned char _field11;
};

struct MyMutex;

struct OpaqueAUGraph;

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct OpaqueMusicPlayer;

struct OpaqueMusicSequence;

struct OpaqueMusicTrack;

struct PortDescriptionImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    unsigned long long _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
};

struct RouteDescriptionImpl {
    id _field1;
    id _field2;
    id _field3;
    unsigned long long _field4;
    _Bool _field5;
    _Bool _field6;
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

struct SessionConnector {
    struct shared_ptr<std::__1::function<void (avfaudio::SessionConnector::ConnectionResult)>> _field1;
};

struct _AVBeatRange {
    double _field1;
    double _field2;
};

struct __CFArray;

struct __CFDictionary;

struct __CFString;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct atomic<double> {
    _Atomic double _field1;
};

struct function<void (avfaudio::SessionConnector::ConnectionResult)>;

struct map<AVAudio3DMixingImpl *, unsigned int, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned int>>> {
    struct __tree<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true>, std::__1::allocator<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> {
    struct __tree<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::less<AVVoiceAlertType>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *>>> {
    struct __tree<std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::__value_type<AVVoiceAlertType, NSURL *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVVoiceAlertType, NSURL *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::less<AVVoiceAlertType>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int>>, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *>>>;

struct map<unsigned long, AVVCRecordingEngine *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, AVVCRecordingEngine *>>> {
    struct __tree<std::__1::__value_type<unsigned long, AVVCRecordingEngine *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, AVVCRecordingEngine *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, AVVCRecordingEngine *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, AVVCRecordingEngine *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, AVVCRecordingEngine *>, std::__1::less<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<std::__1::function<void (avfaudio::SessionConnector::ConnectionResult)>> {
    struct function<void (avfaudio::SessionConnector::ConnectionResult)> *_field1;
    struct __shared_weak_count *_field2;
};

struct unique_ptr<AUInterfaceBaseV3, std::__1::default_delete<AUInterfaceBaseV3>> {
    struct __compressed_pair<AUInterfaceBaseV3 *, std::__1::default_delete<AUInterfaceBaseV3>> {
        struct AUInterfaceBaseV3 *_field1;
    } _field1;
};

struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3>> {
    struct __compressed_pair<AUInterfaceIOV3 *, std::__1::default_delete<AUInterfaceIOV3>> {
        struct AUInterfaceIOV3 *_field1;
    } _field1;
};

struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> {
    struct __compressed_pair<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>*, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> {
        struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> *_field1;
    } _field1;
};

struct unique_ptr<AVAudioEngineGraph, std::__1::default_delete<AVAudioEngineGraph>> {
    struct __compressed_pair<AVAudioEngineGraph *, std::__1::default_delete<AVAudioEngineGraph>> {
        struct AVAudioEngineGraph *_field1;
    } _field1;
};

struct unique_ptr<AVAudioIOUnit, std::__1::default_delete<AVAudioIOUnit>> {
    struct __compressed_pair<AVAudioIOUnit *, std::__1::default_delete<AVAudioIOUnit>> {
        struct AVAudioIOUnit *_field1;
    } _field1;
};

struct vector<bool, std::__1::allocator<bool>> {
    unsigned long long *_field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long>> {
        unsigned long long _field1;
    } _field3;
};
