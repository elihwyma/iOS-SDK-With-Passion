/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@interface TPDialerSoundController : NSObject

{
    struct __CFSet *_inflightSounds;
    unsigned int _soundsActivated:1;
    unsigned long long _incompleteSoundCount;
}

@property unsigned long long incompleteSoundCount;

+ (void)_delayedDeactivate;

- (id)init;
- (void)dealloc;
- (void)_stopAllSoundsForcingCallbacks:(_Bool)arg1;
- (void)stopSoundForDialerCharacter:(unsigned int)arg1;
- (void)playSoundForDialerCharacter:(unsigned int)arg1;
- (void)applicationSuspendedNotification:(id)arg1;
- (void)applicationResumedNotification:(id)arg1;
- (void)setSoundsActivated:(_Bool)arg1;
- (void)soundCompletedPlaying:(unsigned int)arg1;

@end
