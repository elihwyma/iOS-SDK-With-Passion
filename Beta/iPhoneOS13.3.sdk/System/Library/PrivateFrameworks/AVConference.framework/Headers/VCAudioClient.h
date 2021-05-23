/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVAudioDevice, NSString, VCAudioIO;

__attribute__((visibility("hidden")))
@interface VCAudioClient : NSObject

{
    int _processId;
    VCAudioIO *_audioIO;
    _Bool _muted;
    unsigned int _state;
    struct _opaque_pthread_mutex_t _stateMutex;
    double _lastAudioSessionStart;
    _Bool _isOnHold;
    struct VCAudioClientSettings _selectedSettings;
    struct VCAudioClientSettings _requestedSettings;
}

@property (retain, nonatomic) AVAudioDevice *inputDevice;
@property (retain, nonatomic) AVAudioDevice *outputDevice;
@property (nonatomic, readonly) int processId;
@property (nonatomic, readonly) _Bool isMuted;
@property (retain, nonatomic) VCAudioIO *audioIO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)stopWithError:(id *)arg1;
- (_Bool)startWithError:(id *)arg1;
- (void)setAudioSessionProperties:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)startAudioSessionWithError:(id *)arg1;
- (void)stopAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)stopAudioSessionWithError:(id *)arg1;
- (id)initWithProcessId:(int)arg1;
- (_Bool)muteWithError:(id *)arg1;
- (_Bool)unmuteWithError:(id *)arg1;
- (_Bool)resetAudioSessionOutputPortOverride:(id *)arg1;
- (id)getCurrentAudioDeviceWithType:(_Bool)arg1;
- (_Bool)setCurrentAudioDevice:(id)arg1 type:(_Bool)arg2;

@end
