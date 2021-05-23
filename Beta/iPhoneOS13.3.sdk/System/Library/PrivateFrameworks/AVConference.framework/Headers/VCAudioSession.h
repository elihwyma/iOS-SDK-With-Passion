/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, VCAudioSessionClient;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioSession : NSObject

{
    struct opaqueCMSession *_cmSession;
    unsigned int _sessionId;
    int _sessionPid;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_requestedAudioSessionProperties;
    NSMutableDictionary *_currentAudioSessionProperties;
    VCAudioSessionClient *_activeClient;
    NSMutableArray *_clients;
    NSDictionary *_micSourceBack;
    NSDictionary *_micSourceFront;
    unsigned int _selectedMicrophone;
    _Bool _isTetheredDisplayMode;
    double _hardwareSampleRate;
    _Bool _isInterrupted;
    int _currentClientPid;
}

@property (nonatomic, readonly) NSDictionary *audioSessionProperties;
@property (nonatomic) int clientPid;
@property (nonatomic, readonly) struct opaqueCMSession *cmSession;

+ (id)sharedInstance;
+ (_Bool)convertAudioSessionProperties:(id)arg1 operatingMode:(int *)arg2 deviceRole:(int *)arg3 enableAudioPreWarming:(_Bool *)arg4;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (_Bool)setSampleRate:(double)arg1;
- (void)startInternal;
- (void)setAudioSessionProperties:(id)arg1;
- (_Bool)shouldResetAudioSession;
- (_Bool)startClient:(id)arg1 clientType:(unsigned char)arg2 mediaProperties:(id)arg3 sessionRef:(unsigned int *)arg4;
- (_Bool)resetClient:(id)arg1 mediaSetting:(id)arg2;
- (_Bool)stopClient:(id)arg1;
- (_Bool)isAnswerOnHoldUpdateParameters:(id)arg1;
- (_Bool)didRequestedStringPropertyChange:(id)arg1;
- (_Bool)applyRequestedProperty:(id)arg1 defaultValue:(void *)arg2;
- (void)setupInputBeamforming;
- (void)setBlockSize:(double)arg1 sampleRate:(double)arg2 force:(_Bool)arg3;
- (_Bool)forceBufferFrames:(int *)arg1;
- (void)applyClientPid;
- (void)selectMicrophoneWithType:(unsigned int)arg1;
- (void)setupVPBlockFormatWithProperties:(id)arg1;
- (void)applyAudioSessionProperties;
- (void)refreshAudioSessionProperties;
- (_Bool)applyAudioSessionMediaProperties:(id)arg1;
- (void)upgradeAudioSessionProperties;
- (void)selectNewActiveClient;
- (void)cleanupMicSources;
- (void)resumeActiveClient;
- (void)didBeginQuietTime;
- (void)didEndQuietTime;
- (void)didPause;
- (void)didResume;
- (void)didStop;
- (void)didInterruptionEnded;
- (void)resetOverrideRoute;
- (void)setBlockSizeOnSampleRateChange;
- (void)didAvailableSampleRateChange;
- (void)handleAudioInterruption:(struct opaqueCMSession *)arg1 interruptionInfo:(struct __CFDictionary *)arg2;
- (void)setAudioSessionMode:(id)arg1;
- (void)selectMicrophone:(unsigned int)arg1;

@end
