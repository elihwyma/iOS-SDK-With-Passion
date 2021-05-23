/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextJitterBuffer : NSObject

{
    struct tagVCTextJitterBufferConfiguration _configuration;
    _Bool _resetRequested;
    id _delegate;
    struct JitterPreloadQueue_t *_preloadQueue;
    struct JitterQueue_t *_jitterQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    unsigned int _lastSequenceNumber;
    _Bool _firstFrameReceived;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (_Bool)start;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg1;
- (void)heartbeat;
- (struct tagAudioPacket *)allocTextPacket;
- (void)releaseTextPacket:(struct tagAudioPacket *)arg1;
- (void)enqueuePacket:(struct tagAudioPacket *)arg1;
- (struct tagAudioFrame *)allocTextFrame;
- (_Bool)startHeartbeat;
- (void)stopHeartbeat;
- (void)jitterQueuePushPacket:(struct tagAudioPacket *)arg1;
- (void)releaseTextFrame:(struct tagAudioFrame *)arg1;

@end
