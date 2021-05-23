/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SASSystemState.h>

@class SiriContextOverride;

@interface SASOverriddenSystemState : SASSystemState

{
    SASSystemState *_systemState;
    SiriContextOverride *_contextOverride;
}

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (_Bool)isPad;
- (_Bool)siriIsSupported;
- (_Bool)siriIsEnabled;
- (_Bool)carDNDActive;
- (id)lockStateMonitor;
- (_Bool)isConnectedToTrustedCarPlay;
- (_Bool)accessibilityShortcutEnabled;
- (_Bool)isConnectedToCarPlay;
- (_Bool)siriIsRestricted;
- (void)setLockStateMonitor:(id)arg1;
- (id)initWithSystemState:(id)arg1 contextOverride:(id)arg2;
- (id)currentSpokenLanguageCode;
- (_Bool)hasUnlockedSinceBoot;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)pocketStateShouldPreventVoiceTrigger;
- (_Bool)smartCoverClosed;

@end
