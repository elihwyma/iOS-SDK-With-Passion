/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPacketBundler : NSObject

{
    char *_buffer;
    unsigned int _bufferSize;
    unsigned int _maxPacketSize;
    struct _opaque_pthread_mutex_t _mutex;
    unsigned int _packetsPerBundle;
    int _payload;
    unsigned int _timestamp;
    unsigned int _encodedBufferSize;
    unsigned int _accessUnitDataSectionSize;
    unsigned int _bundledPackets;
    _Bool _currentBundleVoiceActivity;
    _Bool _lastBundleVoiceActivity;
    struct tagAccessUnitHeaderInfo _accessUnitHeaderInfo;
    int _bundlingScheme;
    _Bool _allowLargePackets;
    _Bool _isFull;
    int _operatingMode;
    unsigned char _priority;
}

@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) _Bool allowLargePackets;
@property (nonatomic) int payload;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) int bundlingScheme;
@property (nonatomic, readonly) unsigned int packetsPerBundle;
@property (nonatomic, readonly) char *encodedBuffer;
@property (nonatomic, readonly) unsigned int encodedBufferSize;
@property (nonatomic, readonly) unsigned int bundledPackets;
@property (nonatomic, readonly) _Bool isFull;
@property (nonatomic, readonly) _Bool isTalkSpurtStart;
@property (nonatomic, readonly) unsigned char priority;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)setPacketsPerBundle:(unsigned int)arg1;
- (void)resetBuffer;
- (void)initLock;
- (_Bool)reallocateBufferWithMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;
- (void)releaseBundleBuffer;
- (unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;
- (char *)encodedBufferForRFC3640;
- (unsigned int)encodedBufferSizeForRFC3640;
- (unsigned int)accessUnitHeaderSectionSize;
- (char *)accessUnitDataSectionHead;
- (unsigned int)accessUnitHeaderSectionSizeMaximum;
- (_Bool)bundleAudioLegacy:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (_Bool)bundleAudioRFC3640:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (_Bool)_copyInputBytes:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (void)updatePriority:(unsigned char)arg1;
- (id)initWithOperatingMode:(int)arg1;
- (_Bool)allocateBundleBuffer:(unsigned int)arg1;
- (_Bool)bundleAudio:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 voiceActivity:(_Bool)arg5 priority:(unsigned char)arg6;

@end
