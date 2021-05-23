/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMesaUnlockTrigger.h>

@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger

{
    _Bool _menuButtonDown;
    _Bool _primed;
}

- (id)description;
- (id)succinctDescriptionBuilder;
- (void)screenOff;
- (_Bool)bioUnlock;
- (void)significantUserInteractionOccurred;
- (void)menuButtonDown;
- (void)menuButtonUp;

@end
