/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TTSAudioSession : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _audioSessionIsSetUp;
    CDStruct_a87a0d46 _desiredState;
    CDStruct_a87a0d46 _cachedState;
    _Bool _bluetoothAllowed;
    struct __CFBag *_activityBag;
    long long _serverGeneration;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_audioSessionInterrupted:(id)arg1;
- (void)_setupAudioSession;
- (void)_setCategoryForActivity:(long long)arg1;
- (long long)_nextActivityForActive:(_Bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;
- (void)_safeSetupAudioSession;
- (long long)_safeServerGeneration;
- (void)_safeSetCategoryForActivity:(long long)arg1;
- (void)_safeSetActive:(_Bool)arg1 withActivity:(long long)arg2;
- (void)_safeSetBluetoothInputAllowed:(_Bool)arg1;

@end
