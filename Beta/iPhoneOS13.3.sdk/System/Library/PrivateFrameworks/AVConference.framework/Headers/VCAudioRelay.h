/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

#import <AVConference/Swift-Protocol.h>

@class NSString, VCAudioRelayIO;

@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject <Swift>

{
    _Bool _isRelayRunning;
    double _IOBufferDuration;
    struct _opaque_pthread_t *_relayThread;
    struct _opaque_pthread_cond_t _wakeUpCondition;
    struct _opaque_pthread_mutex_t _wakeUpMutex;
    struct OpaqueAudioConverter *_clientToRemoteConverter;
    struct OpaqueAudioConverter *_remoteToClientConverter;
    VCAudioRelayIO *_remoteIO;
    VCAudioRelayIO *_clientIO;
    struct _opaque_pthread_mutex_t _relayLock;
    struct _opaque_pthread_mutex_t _clientIOLock;
    struct _opaque_pthread_mutex_t _remoteIOLock;
    NSObject<OS_dispatch_source> *_periodicHealthPrintDispatchSource;
    unsigned int _blocksRelayedCount;
    float _clientUplinkPowerMovingAverage;
    float _clientDownlinkPowerMovingAverage;
    struct _VCRemoteCodecInfo _remoteCodecInfo;
}

@property (readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource;
@property (readonly) unsigned int blocksRelayedCount;
@property (readonly) float clientUplinkPowerMovingAverage;
@property (readonly) float clientDownlinkPowerMovingAverage;
@property (readonly) struct OpaqueAudioConverter *remoteToClientConverter;
@property (readonly) struct OpaqueAudioConverter *clientToRemoteConverter;
@property (copy, nonatomic) VCAudioRelayIO *remoteIO;
@property (copy, nonatomic) VCAudioRelayIO *clientIO;
@property (readonly) _Bool isRelayRunning;
@property (readonly) double IOBufferDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)setIOBufferDuration:(double)arg1 withError:(id *)arg2;
- (_Bool)setClientIO:(id)arg1 withError:(id *)arg2;
- (_Bool)startClientIO;
- (void)stopClientIO;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)printStreamFormats;
- (void)stopRemoteIO;
- (void)destroyAudioConverters;
- (_Bool)canSetPropertyWithError:(id *)arg1;
- (_Bool)createAudioConvertersWithError:(id *)arg1;
- (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo *)arg1;
- (_Bool)startRelayThreadWithError:(id *)arg1;
- (void)startPeriodicHealthPrint;
- (_Bool)startRelayIO:(id)arg1 name:(id)arg2 recordingsName:(id)arg3;
- (void)stopRelayThread;
- (_Bool)stopRelayIO:(id)arg1;
- (struct OpaqueAudioConverter *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription *)arg1 outputFormat:(struct AudioStreamBasicDescription *)arg2 withError:(id *)arg3;
- (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter *)arg3;
- (void)updateRealTimeStats;
- (void)relayProcessSamples;
- (void)sleepTillTime:(struct timespec *)arg1;
- (_Bool)setRemoteIO:(id)arg1 withError:(id *)arg2;
- (_Bool)startRemoteIO;
- (float)rmsPowerOfBuffer:(float *)arg1 numSamples:(unsigned int)arg2;
- (void)relayCallback;

@end
