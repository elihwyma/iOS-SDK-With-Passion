/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface VSAudioPlaybackService : NSObject

{
    _Bool _discontinuedDuringPlayback;
    unsigned int _sessionID;
    struct OpaqueAudioQueue *_audioQueue;
    NSString *_outputRoute;
    long long _state;
    double _enqueuedSampleCount;
    NSDate *_audioQueueStartDate;
    NSDate *_audioQueueFutureEndDate;
    struct AudioStreamBasicDescription _asbd;
    struct _opaque_pthread_cond_t _stateChangeCondition;
    struct _opaque_pthread_mutex_t _waitForStateChangeMutex;
}

@property (nonatomic) struct AudioStreamBasicDescription asbd;
@property (nonatomic) struct OpaqueAudioQueue *audioQueue;
@property (nonatomic) long long state;
@property (nonatomic) struct _opaque_pthread_mutex_t waitForStateChangeMutex;
@property (nonatomic) struct _opaque_pthread_cond_t stateChangeCondition;
@property (nonatomic) double enqueuedSampleCount;
@property (retain, nonatomic) NSDate *audioQueueStartDate;
@property (retain, nonatomic) NSDate *audioQueueFutureEndDate;
@property (retain, nonatomic) NSString *outputRoute;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, readonly) _Bool discontinuedDuringPlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)durationOfAudioDataLength:(unsigned long long)arg1 withAudioDescription:(struct AudioStreamBasicDescription)arg2;
+ (unsigned long long)bytesOfDuration:(double)arg1 withAudioDescription:(struct AudioStreamBasicDescription)arg2;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (id)start;
- (void)reset;
- (void)willBeginAccessPower;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)didEndAccessPower;
- (id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3;
- (id)audioPowerProvider;
- (id)initWithAudioSessionID:(unsigned int)arg1 asbd:(struct AudioStreamBasicDescription)arg2;
- (void)flushAndStop;
- (void)handleMediaServerReset;
- (void)waitForAudioQueueStop;
- (void)signalQueueRunningStateChange;
- (_Bool)isAudioQueueRunning;
- (_Bool)isAudioQueueStalled;

@end
