/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, UINotificationFeedbackGenerator;

@interface SBSoundController : NSObject

{
    NSMutableDictionary *_soundsBySystemSoundIDs;
    UINotificationFeedbackGenerator *_hapticFeedbackGenerator;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    unsigned long long _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)_playFeedback:(id)arg1;
- (_Bool)_playSystemSound:(id)arg1;
- (_Bool)isPlaying:(id)arg1;
- (_Bool)playSound:(id)arg1 environments:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)stopSound:(id)arg1;
- (_Bool)playSoundWithDefaultEnvironment:(id)arg1;
- (_Bool)handleVolumeButtonDownEvent;
- (void)_ringerStateChanged:(id)arg1;
- (_Bool)_playToneAlert:(id)arg1;
- (void)_soundDidStartPlaying:(id)arg1;
- (void)_cleanupSystemSound:(unsigned int)arg1 andKill:(_Bool)arg2;
- (void)_cleanupToneAlertForSound:(id)arg1 andKill:(_Bool)arg2;
- (void)_beginPendingCallbacksBlock;
- (void)_endPendingCallbacksBlock;
- (_Bool)stopAllSounds;
- (void)_soundDidFinishPlaying:(id)arg1;
- (void)_enqueueCallback:(CDUnknownBlockType)arg1;
- (_Bool)isPlayingAnySound;

@end
